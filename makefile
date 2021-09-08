all : main

main : main.o affichage.o
	gcc -o main main.o affichage.o `sdl2-config --cflags --libs` -lSDL2_ttf

main.o : main.c
	gcc -o main.o -c main.c -Wall -Wextra -pedantic -std=c99 `sdl2-config --cflags --libs` -lSDL2_ttf

affichage.o : affichage.c
	gcc -o affichage.o -c affichage.c -Wall -Wextra -pedantic -std=c99 `sdl2-config --cflags --libs` -lSDL2_ttf

clean : 
	rm -rf *.o

mrproper : clean
	rm -rf main
