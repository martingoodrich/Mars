all: main

clean:
	rm -rf main.exe *.swp 

main: main.c
	gcc -d -o main main.c
