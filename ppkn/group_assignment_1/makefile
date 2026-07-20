# Directories
BUILD_DIR = build
MAT_DIR = materials
PRES_DIR = presentation

# Compiler settings
# We use latexmk because it automatically handles multiple passes for TOCs and references.
LATEX = latexmk
LATEX_FLAGS = -pdf -interaction=nonstopmode

# Phony targets (targets that don't represent a file on disk)
.PHONY: all materials presentation clean fullclean

# Default target when you just run 'make'
all: materials presentation

# Compile the materials document
materials:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Materials..."
	cd $(MAT_DIR) && $(LATEX) $(LATEX_FLAGS) -output-directory=../$(BUILD_DIR) materials.tex

# Compile the presentation document
presentation:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Presentation..."
	cd $(PRES_DIR) && $(LATEX) $(LATEX_FLAGS) -output-directory=../$(BUILD_DIR) presentation.tex

# Clean up auxiliary files but keep the final PDFs in the build directory
clean:
	@echo "Cleaning up auxiliary files..."
	cd $(MAT_DIR) && $(LATEX) -c -output-directory=../$(BUILD_DIR) materials.tex || true
	cd $(PRES_DIR) && $(LATEX) -c -output-directory=../$(BUILD_DIR) presentation.tex || true
	# Clean up any leftover legacy files currently sitting in the source folders
	rm -f $(MAT_DIR)/*.aux $(MAT_DIR)/*.log
	rm -f $(PRES_DIR)/*.aux $(PRES_DIR)/*.log $(PRES_DIR)/*.nav $(PRES_DIR)/*.out $(PRES_DIR)/*.snm $(PRES_DIR)/*.toc $(PRES_DIR)/texput.log

# Clean everything, including the build directory and the legacy in-place PDFs
fullclean: clean
	@echo "Removing all PDFs and build artifacts..."
	rm -rf $(BUILD_DIR)/*
	rm -f $(MAT_DIR)/materials.pdf
	rm -f $(PRES_DIR)/presentation.pdf
