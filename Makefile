

vp.pdf	: vp.tex facial.bib
	(cd figs; make)
	latexmk -pdf vp

clean :
	rm -f vp.pdf
