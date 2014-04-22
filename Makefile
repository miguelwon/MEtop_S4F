all:
	python pdfcomp.py
	chmod a+x run.py
	cd src/Dtop23C;make
	cd src/Gtop24C;make
	cd src/Lqtop24C;make
	cd src;make
	cp src/classes.py lib/

clean:
	cd lib;rm -f *
	cd src/Dtop23C;make clean
	cd src/Gtop24C;make clean
	cd src/Lqtop24C;make clean
	cd src;make clean
	cd temp;rm -f *
