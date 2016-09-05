#Makefile for WShell project

wsh: main.o wsh.o
	gcc -o wsh main.o wsh.o
main.o: main.c
	gcc -c main.c
wsh.o: wsh.c
	gcc -c wsh.c
clean: 
	rm -f *.o wsh
