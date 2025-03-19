all: main

clean:
	rm -rf main.exe *.swp 

main: main.c
	gcc -g -o main main.c
