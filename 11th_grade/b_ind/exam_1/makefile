TARGET = main
BUILD_DIR = build

COMPILER = latexmk
FLAGS    = -pdf -halt-on-error -interaction=nonstopmode -output-directory=$(BUILD_DIR)

.PHONY: all clean cleanall open

all: $(BUILD_DIR)/$(TARGET).pdf

$(BUILD_DIR)/$(TARGET).pdf: $(TARGET).tex
	mkdir -p $(BUILD_DIR)
	$(COMPILER) $(FLAGS) $(TARGET).tex

clean:
	$(COMPILER) -c -output-directory=$(BUILD_DIR)
	rm -f $(BUILD_DIR)/*.bbl $(BUILD_DIR)/*.bcf $(BUILD_DIR)/*.run.xml

cleanall: clean
	rm -rf $(BUILD_DIR)

open: all
	@if [ -f $(BUILD_DIR)/$(TARGET).pdf ]; then \
		echo "Membuka $(BUILD_DIR)/$(TARGET).pdf..."; \
		xdg-open $(BUILD_DIR)/$(TARGET).pdf > /dev/null 2>&1 || open $(BUILD_DIR)/$(TARGET).pdf > /dev/null 2>&1 || start $(BUILD_DIR)/$(TARGET).pdf > /dev/null 2>&1; \
	else \
		echo "File PDF tidak ditemukan. Silakan jalankan 'make' terlebih dahulu."; \
	fi
