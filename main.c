#include "main.h"
#include "affichage.h"

int main(/*int argc, char *argv[]*/) {

	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		fprintf(stderr, "Impossible d'initialiser la SDL error : %s\n", SDL_GetError()); 
		exit(EXIT_FAILURE);
	}

	if(TTF_Init() != 0){
		fprintf(stderr, "Impossible d'initialiser la SDL_TTF : %s\n", TTF_GetError());
		exit(EXIT_FAILURE);
	}

	SDL_Window *window = SDL_CreateWindow("Jeu de la vie", 0, 0, SIZE_W, SIZE_H, SDL_WINDOW_SHOWN);
	if(window == NULL) sortie("Erreur création fenetre window dans main");
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if(renderer == NULL){
		SDL_DestroyWindow(window);
		sortie("Erreur création rendu renderer dans main");
	}

	ecranJeu(renderer);

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	TTF_Quit();
	SDL_Quit();




    return(EXIT_SUCCESS);
}


void sortie(const char* nom){
	//Fonction pour quitter et afficher l'erreur de la SDL
	fprintf(stderr, "%s -> %s\n", nom, SDL_GetError());
	exit(EXIT_FAILURE);
}

