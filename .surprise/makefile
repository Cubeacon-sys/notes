# --- Configuration ---
MAIN = main
BUILD_DIR = build
CHAPTERS_DIR = graphics

# Tools
LATEXMK = latexmk
FLAGS = -pdf -output-directory=$(BUILD_DIR) -use-make

# --- Recipes ---

.PHONY: all clean view

# --- Default target: builds the PDF ---
all: $(BUILD_DIR)/$(MAIN).pdf
	@echo "Build successful! PDF is located at: $(BUILD_DIR)/$(MAIN).pdf"

# --- Compiles the document and handles nested build directories ---
$(BUILD_DIR)/$(MAIN).pdf: $(MAIN).tex $(shell find $(CHAPTERS_DIR) -name "*.tex" 2>/dev/null)
	@mkdir -p $(BUILD_DIR)
	@# This line automatically replicates your chapters directory structure inside the build folder
	@find $(CHAPTERS_DIR) -type d -exec mkdir -p $(BUILD_DIR)/{} \;
	$(LATEXMK) $(FLAGS) $(MAIN).tex

# --- Cleans up all auxiliary and PDF files ---
clean:
	rm -rf $(BUILD_DIR)
	@echo "Cleaned up all build files."

# --- Opens the generated PDF ---
view: all
	@if [ "$$(uname)" = "Darwin" ]; then \
		open $(BUILD_DIR)/$(MAIN).pdf; \
	elif [ "$$(uname)" = "Linux" ]; then \
		xdg-open $(BUILD_DIR)/$(MAIN).pdf; \
	fi
