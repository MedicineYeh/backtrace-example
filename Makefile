all:	main.c main.cc
	gcc -rdynamic -o c_bt main.c
	g++ -rdynamic -o cc_bt main.cc

clean:
	rm -f c_bt cc_bt
