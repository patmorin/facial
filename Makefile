

facial.pdf : facial.tex facial.bib
	(cd figs; make)
	latexmk -pdf facial

clean :
	rm -f facial.pdf
