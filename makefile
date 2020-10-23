all: mystring.o main.o
	gcc -o mystring mystring.o main.o

main.o: main.c mystring.h
	gcc -c main.c

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

clean:
		rm *.o

run:
		./mystring
