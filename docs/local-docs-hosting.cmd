<# :
  @echo off
    powershell /nologo /noprofile /command ^
         "&{[ScriptBlock]::Create((cat """%~f0""") -join [Char[]]10).Invoke(@(&{$args}%*))}"
  pause
#>

function Check-Exit-Code($sucess_msg, $error_msg) {
    if ($LastExitCode -ne 0) {
        Write-Host -ForegroundColor red $error
        exit $LastExitCode
    }
    Write-Host -ForegroundColor green $sucess_msg
}

# Check if docker is installed
docker --version | Out-Null
Check-Exit-Code "Docker installation checked. Proceeding..." "Docker is not installed."

# Delete all images with the name "spark-doxygen-generated-content" or "spark-doxygen-hosting" with containers
docker rm -f $(docker ps -a -q --filter ancestor=spark-doxygen-hosting)
docker rmi -f $(docker images -a -q --filter reference=spark-doxygen-generated-content)
docker rmi -f $(docker images -a -q --filter reference=spark-doxygen-hosting)

# Build documentation
docker build -t spark-doxygen-generated-content -f doxygen-generator.dockerfile ../
Check-Exit-Code "Generated documentation successfully." "Failed to generate documentation."

docker build -t spark-doxygen-hosting -f doxygen-hosting.dockerfile .
Check-Exit-Code "Generated server sucessfully. Proceeding..." "Failed to generate server."

docker run -d -p 8080:80 spark-doxygen-hosting
Check-Exit-Code "Server is running. Opening web browser..." "Failed to run server."

Start-Process "http://localhost:8080"
