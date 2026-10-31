# Nama file utama tanpa ekstensi .tex
TARGET = main

# Direktori untuk hasil kompilasi
BUILD_DIR = build

# Perintah latexmk dan opsinya
# -pdf          : Menghasilkan output PDF menggunakan pdflatex
# -output-directory : Mengarahkan semua file hasil kompilasi ke folder build
LATEXMK = latexmk -pdf -output-directory=$(BUILD_DIR)

# Target default saat Anda mengetik 'make'
all: $(BUILD_DIR)
	$(LATEXMK) $(TARGET).tex

# Membuat folder build jika belum ada
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Target untuk memantau perubahan file secara real-time (continuous mode)
watch: $(BUILD_DIR)
	$(LATEXMK) -pvc $(TARGET).tex

# Target untuk membersihkan file log dan auxiliary buatan LaTeX
clean:
	$(LATEXMK) -c
	rm -rf $(BUILD_DIR)/*.nav $(BUILD_DIR)/*.snm $(BUILD_DIR)/*.vrb

# Target untuk membersihkan semua hasil build termasuk main.pdf
cleanall:
	$(LATEXMK) -C
	rm -rf $(BUILD_DIR)

.PHONY: all watch clean cleanall
