all: melinji

melinji.o: melinji.c objects.h
	gcc -Wall -g -c melinji.c

melinji: melinji.o
	gcc -Wall -g -o melinji melinji.o

clean:
	rm -rf melinji melinji.o
