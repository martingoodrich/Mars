all: main

clean:
	rm -rf main.exe main *.swp 

main: main.c
	gcc -g -o main main.c
