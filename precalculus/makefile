# --- Configuration ---
MAIN = main
BUILD_DIR = build
CHAPTERS_DIR = chapters

# Tools
LATEXMK = latexmk
FLAGS = -pdf -output-directory=$(BUILD_DIR) -use-make

# --- Recipes ---

.PHONY: all clean view

# Default target: builds the PDF
all: $(BUILD_DIR)/$(MAIN).pdf
	@echo "Build successful! PDF is located at: $(BUILD_DIR)/$(MAIN).pdf"

# Compiles the document using latexmk
$(BUILD_DIR)/$(MAIN).pdf: $(MAIN).tex $(wildcard $(CHAPTERS_DIR)/*.tex)
	@mkdir -p $(BUILD_DIR)
	$(LATEXMK) $(FLAGS) $(MAIN).tex

# Cleans up all auxiliary and PDF files
clean:
	rm -rf $(BUILD_DIR)
	@echo "Cleaned up all build files."

# Opens the generated PDF (Works on Mac/Linux/Windows WSL)
view: all
	@if [ "$$(uname)" = "Darwin" ]; then \
		open $(BUILD_DIR)/$(MAIN).pdf; \
	elif [ "$$(uname)" = "Linux" ]; then \
		xdg-open $(BUILD_DIR)/$(MAIN).pdf; \
	fi

