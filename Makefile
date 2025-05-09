all: main

clean:
	rm -rf main.exe main *.o *.swp 

main: main.o message.o
	gcc -g -o main main.o message.o

main.o: main.c
	gcc -c  -g -o main.o main.c

message.o: message.c message.h
	gcc -c -g -o message.o message.c

