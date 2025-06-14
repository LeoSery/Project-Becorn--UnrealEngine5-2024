FROM tracto/spark-doxygen-build-tools:latest

# --------------------------------------------
# Install Graphviz and clean old docs
# --------------------------------------------
RUN apt-get update && apt-get install -y graphviz && rm -rf /var/lib/apt/lists/*

# --------------------------------------------
# Add code and custom documentation
# --------------------------------------------
WORKDIR /sources
ADD ./README.md ./README.md
ADD ./docs ./docs
ADD ./Source ./Source

# --------------------------------------------
# Generate documentation
# --------------------------------------------
WORKDIR /docs

# Clean any existing documentation
RUN rm -rf html latex

RUN mv $DOXYGEN_AWESOME_CSS/* .
RUN mv /sources/docs/* .
RUN doxygen Doxyfile
RUN mkdir -p ./html/docs
