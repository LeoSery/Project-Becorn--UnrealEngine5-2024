# Get the files from the doxygen-generator image as builder
FROM spark-doxygen-generated-content:latest as files

# Use httpd image as base and copy the files from the builder
FROM httpd:alpine
COPY --from=files /docs/html /usr/local/apache2/htdocs/
