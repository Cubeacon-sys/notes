MAIN = main
BUILDDIR = build

all: $(BUILDDIR)/$(MAIN).pdf

$(BUILDDIR)/%.pdf: %.tex
	mkdir -p $(BUILDDIR)
	latexmk -pdf -outdir=$(BUILDDIR) $<

clean:
	latexmk -c -outdir=$(BUILDDIR) $(MAIN).tex

cleanall:
	latexmk -C -outdir=$(BUILDDIR) $(MAIN).tex
	rm -rf $(BUILDDIR)

.PHONY: all clean cleanall
