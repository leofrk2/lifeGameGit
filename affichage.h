#ifndef __AFFICHAGE_H__
#define __AFFICHAGE_H__

#include "main.h"
#include <unistd.h>
#include <time.h>
#include <errno.h>
#define THICK 20
#define SIZE_W2 500
#define SIZE_H2 500


typedef struct{
	int x, y, s, e;
}cube;

void ecranJeu(SDL_Renderer *renderer);
void traceCarre(SDL_Renderer *renderer,cube c);
void effaceCarre(SDL_Renderer *renderer,int x, int y);
int msleep(long msec);

void initJeu(SDL_Renderer *renderer, cube **tab);
void upJeu(SDL_Renderer *renderer, cube **tab);
void computeV(cube **tab);
void Run(SDL_Renderer *renderer, cube **tab, long s);
void contour(int ty, int tx, int x, int y, int l, SDL_Renderer *renderer);
void Reset(cube **tab);
int choixStruc(cube **tab);
void Randomize(cube **tab);
void printTab(cube **tab, int x, int y);

void Construc(SDL_Renderer *renderer, int s,cube **tab);
#endif
