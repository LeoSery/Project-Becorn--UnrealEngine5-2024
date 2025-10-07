FROM tracto/spark-doxygen-build-tools:latest

# --------------------------------------------
# Install Graphviz (Alpine Linux uses apk)
# --------------------------------------------
RUN apk add --no-cache graphviz

# --------------------------------------------
# Add code and custom documentation
# --------------------------------------------
WORKDIR /sources
ADD ./README.md ./README.md
ADD ./docs ./docs
ADD ./Source ./Source
ADD ./ReadmeContent ./ReadmeContent

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