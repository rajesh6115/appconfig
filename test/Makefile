all:
	gcc -o first -I../ -I. testconfig.c ../appconfig.c `pkg-config libxml-2.0 --cflags --libs`
clean:
	rm -rf *.o *.core first
