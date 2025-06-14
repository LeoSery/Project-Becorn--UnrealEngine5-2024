FROM tracto/spark-doxygen-build-tools:latest

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
RUN mv $DOXYGEN_AWESOME_CSS/* .
RUN mv /sources/docs/* .
RUN doxygen Doxyfile
RUN mkdir -p ./html/docs
