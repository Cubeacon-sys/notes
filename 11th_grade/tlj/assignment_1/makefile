MAIN = main
PRES = presentation
BUILDDIR = build

all: $(BUILDDIR)/$(MAIN).pdf $(BUILDDIR)/$(PRES).pdf

$(BUILDDIR)/%.pdf: %.tex
	mkdir -p $(BUILDDIR)
	latexmk -pdf -outdir=$(BUILDDIR) $<

clean:
	latexmk -c -outdir=$(BUILDDIR) $(MAIN).tex $(PRES).tex

cleanall:
	latexmk -C -outdir=$(BUILDDIR) $(MAIN).tex $(PRES).tex
	rm -rf $(BUILDDIR)

.PHONY: all clean cleanall