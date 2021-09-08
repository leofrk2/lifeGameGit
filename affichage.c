#include "affichage.h"

void ecranJeu(SDL_Renderer *renderer){
	//Fonction qui affiche l'écran du jeu de la vie
	
	//====================
	SDL_SetRenderDrawColor(renderer,255,255,255,255);
	SDL_RenderClear(renderer);

	//Affichage bouton play
	SDL_Rect r_but;
	r_but.w = SIZE_W*0.0571;
	r_but.h = 20;
	r_but.x = SIZE_W*0.7857;
	r_but.y = 400;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_but);
	SDL_Color clr_txt = {255,255,255,255};
	SDL_Rect r_txt;
	r_txt.w = 80;
	r_txt.h = 20;
	r_txt.x = 1100;
	r_txt.y = 400;
	
	//Chargement police
	TTF_Font* font1 = TTF_OpenFont("arial.ttf", 40);
	SDL_Surface* surfTxt = TTF_RenderText_Solid(font1, "Play/Pause", clr_txt);
	SDL_Texture* textTxt = SDL_CreateTextureFromSurface(renderer, surfTxt);
	SDL_RenderCopy(renderer, textTxt, NULL, &r_txt);

	//Affichage bouton vitesse + rapide
	SDL_Rect r_but2;
	r_but2.w = 80;
	r_but2.h = 20;
	r_but2.x = 1100;
	r_but2.y = 600;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_but2);
	SDL_Rect r_txt2;
	r_txt2.w = 80;
	r_txt2.h = 20;
	r_txt2.x = 1100;
	r_txt2.y = 600;
	
	//Chargement police
	SDL_Surface* surfTxt2 = TTF_RenderText_Solid(font1, "Plus rapide", clr_txt);
	SDL_Texture* textTxt2 = SDL_CreateTextureFromSurface(renderer, surfTxt2);
	SDL_RenderCopy(renderer, textTxt2, NULL, &r_txt2);

	//Affichage bouton vitesse - rapide
	SDL_Rect r_but3;
	r_but3.w = 80;
	r_but3.h = 20;
	r_but3.x = 1200;
	r_but3.y = 600;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_but3);
	SDL_Rect r_txt3;
	r_txt3.w = 80;
	r_txt3.h = 20;
	r_txt3.x = 1200;
	r_txt3.y = 600;
	
	//Chargement police
	SDL_Surface* surfTxt3 = TTF_RenderText_Solid(font1, "Plus lent", clr_txt);
	SDL_Texture* textTxt3 = SDL_CreateTextureFromSurface(renderer, surfTxt3);
	SDL_RenderCopy(renderer, textTxt3, NULL, &r_txt3);

	//Affichage bouton écran structures
	SDL_Rect r_butStruc;
	r_butStruc.w = 80;
	r_butStruc.h = 20;
	r_butStruc.x = 1300;
	r_butStruc.y = 400;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_butStruc);
	SDL_Rect r_txtStruc;
	r_txtStruc.w = 80;
	r_txtStruc.h = 20;
	r_txtStruc.x = 1300;
	r_txtStruc.y = 400;
	
	//Chargement police
	SDL_Surface* surfTxtStruc = TTF_RenderText_Solid(font1, "Structures", clr_txt);
	SDL_Texture* textTxtStruc = SDL_CreateTextureFromSurface(renderer, surfTxtStruc);
	SDL_RenderCopy(renderer, textTxtStruc, NULL, &r_txtStruc);
	//Affichage bouton écran random
	SDL_Rect r_butRa;
	r_butRa.w = 80;
	r_butRa.h = 20;
	r_butRa.x = 1300;
	r_butRa.y = 600;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_butRa);
	SDL_Rect r_txtRa;
	r_txtRa.w = 80;
	r_txtRa.h = 20;
	r_txtRa.x = 1300;
	r_txtRa.y = 600;
	
	//Chargement police
	SDL_Surface* surfTxtRa = TTF_RenderText_Solid(font1, "Randomize", clr_txt);
	SDL_Texture* textTxtRa = SDL_CreateTextureFromSurface(renderer, surfTxtRa);
	SDL_RenderCopy(renderer, textTxtRa, NULL, &r_txtRa);


	//Affichage bouton reset
	SDL_Rect r_butRe;
	r_butRe.w = 80;
	r_butRe.h = 20;
	r_butRe.x = 1300;
	r_butRe.y = 200;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_butRe);
	SDL_Rect r_txtRe;
	r_txtRe.w = 80;
	r_txtRe.h = 20;
	r_txtRe.x = 1300;
	r_txtRe.y = 200;
	
	//Chargement police
	SDL_Surface* surfTxtRe = TTF_RenderText_Solid(font1, "Reset", clr_txt);
	SDL_Texture* textTxtRe = SDL_CreateTextureFromSurface(renderer, surfTxtRe);
	SDL_RenderCopy(renderer, textTxtRe, NULL, &r_txtRe);

	//Affichage bouton print tab
	SDL_Rect r_butP;
	r_butP.w = 80;
	r_butP.h = 20;
	r_butP.x = 1100;
	r_butP.y = 200;
	SDL_SetRenderDrawColor(renderer, 168,168,219,255);
	SDL_RenderFillRect(renderer, &r_butP);
	SDL_Rect r_txtP;
	r_txtP.w = 80;
	r_txtP.h = 20;
	r_txtP.x = 1100;
	r_txtP.y = 200;
	
	//Chargement police
	SDL_Surface* surfTxtP = TTF_RenderText_Solid(font1, "Print", clr_txt);
	SDL_Texture* textTxtP = SDL_CreateTextureFromSurface(renderer, surfTxtP);
	SDL_RenderCopy(renderer, textTxtP, NULL, &r_txtP);





	


	
	//Affichage du cadrillage
	SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
	for(int i = 0; i<(SIZE_H/THICK); i++){
		SDL_RenderDrawLine(renderer,i*THICK,0,i*THICK,SIZE_H);
	}
	for(int i = 0; i<(SIZE_H/THICK); i++){
		SDL_RenderDrawLine(renderer,0,i*THICK,SIZE_H,i*THICK);
	}
	
	//Tab
	cube** tab;
	tab = malloc(SIZE_H * sizeof(*tab));
	for(int i = 0; i < SIZE_H; i++) tab[i] = malloc(SIZE_H * sizeof(tab[0]));
	for(int i = 0; i < SIZE_H/THICK; i++){
		for(int j = 0; j < SIZE_H/THICK; j++){
			tab[i][j].x = i*THICK;
			tab[i][j].y = j*THICK;
			tab[i][j].e = 0;
			
		}
	}

	//BLINK
	tab[4][4].e = 1;
	tab[3][4].e = 1;
	tab[5][4].e = 1;
	


	
	tab[10][12].e = 1;
	tab[11][12].e = 1;
	tab[11][11].e = 1;
	tab[11][14].e = 1;
	tab[11][15].e = 1;
	tab[12][15].e = 1;
	tab[12][14].e = 1;
	tab[12][13].e = 1;
	tab[12][12].e = 1;
	tab[12][11].e = 1;
	tab[13][11].e = 1;
	tab[13][12].e = 1;
	tab[16][12].e = 1;
	tab[16][10].e = 1;
	tab[17][11].e = 1;
	tab[14][12].e = 1;

	
	tab[51][50].e = 1;
	tab[50][52].e = 1;
	tab[51][52].e = 1;
	tab[52][52].e = 1;
	tab[52][51].e = 1;



	//INIT
	initJeu(renderer, tab);
	SDL_RenderPresent(renderer);
	computeV(tab);
	
	SDL_Event e;
	long speed = 100;
	int r = 0;
	int r2 = 0;
	int e2 = 0;
	int q = 0;
	int tmp = 0; 
	while(!q){
		while(SDL_PollEvent(&e)){
			switch(e.type){
				case SDL_QUIT:
					exit(1);
				case SDL_MOUSEBUTTONDOWN:
					if(e.button.x > r_but.x
							&& e.button.x < r_but.x + r_but.w
							&& e.button.y > r_but.y
							&& e.button.y < r_but.y + r_but.h){
						r2 = r;
						if(r2) r = 0;
						if(!r2) r = 1;
					}
					if( e.button.x > 0
							&& e.button.x < 1000
							&& e.button.y > 0
							&& e.button.y < 1000){
						e2 = tab[e.button.x/THICK][e.button.y/THICK].e;
						if(e2) tab[e.button.x/THICK][e.button.y/THICK].e = 0;
						if(!e2) tab[e.button.x/THICK][e.button.y/THICK].e = 1;
						initJeu(renderer, tab);
						SDL_RenderPresent(renderer);
					}
					if(e.button.x > r_but2.x
							&& e.button.x < r_but2.x + r_but2.w
							&& e.button.y > r_but2.y
							&& e.button.y < r_but2.y + r_but2.h){
						speed = speed - 100;
					}
					if(e.button.x > r_but3.x
							&& e.button.x < r_but3.x + r_but3.w
							&& e.button.y > r_but3.y
							&& e.button.y < r_but3.y + r_but3.h){
						speed = speed + 100;
					}
					if(e.button.x > r_butStruc.x
							&& e.button.x < r_butStruc.x + r_butStruc.w
							&& e.button.y > r_butStruc.y
							&& e.button.y < r_butStruc.y + r_butStruc.h){
						tmp = choixStruc(tab); 
						Construc(renderer,tmp,tab);
						initJeu(renderer,tab);
						SDL_RenderPresent(renderer);
						///////
					}

					if(e.button.x > r_butRa.x
							&& e.button.x < r_butRa.x + r_butRa.w
							&& e.button.y > r_butRa.y
							&& e.button.y < r_butRa.y + r_butRa.h){
						Randomize(tab);
						initJeu(renderer, tab);
						SDL_RenderPresent(renderer);
					}
					if(e.button.x > r_butRe.x
							&& e.button.x < r_butRe.x + r_butRe.w
							&& e.button.y > r_butRe.y
							&& e.button.y < r_butRe.y + r_butRe.h){
						Reset(tab);
						initJeu(renderer, tab);
						SDL_RenderPresent(renderer);
					}
					if(e.button.x > r_butP.x
							&& e.button.x < r_butP.x + r_butP.w
							&& e.button.y > r_butP.y
							&& e.button.y < r_butP.y + r_butP.h){
						printTab(tab,e.button.x, e.button.y);
					}

			}
		}
		if(r) Run(renderer, tab,speed);
	}
	
	for(int i = 0; i < SIZE_H; i++)free(tab[i]);
	free(tab);
	TTF_CloseFont(font1);


	//====================


}


void traceCarre(SDL_Renderer *renderer, cube c){
	int x = c.x;
	int y = c.y;
	SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
	if(c.e == 1){
		for(int i = 0; i < THICK; i++){
			SDL_RenderDrawLine(renderer, x+i,y,x+i,y+THICK);
		}
	}
	if(c.e == 0){
		effaceCarre(renderer, x, y);
	}
	if(c.e == 2){
		SDL_SetRenderDrawColor(renderer,0,0,255,SDL_ALPHA_OPAQUE);
		for(int i = 0; i < THICK; i++){
			SDL_RenderDrawLine(renderer, x+i,y,x+i,y+THICK);
		}

	}

}

void effaceCarre(SDL_Renderer *renderer,int x, int y){
	SDL_SetRenderDrawColor(renderer,255,255,255,SDL_ALPHA_OPAQUE);
	for(int i = 0; i < THICK; i++){
		SDL_RenderDrawLine(renderer, x+i,y,x+i,y+THICK);
	}
	SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
	SDL_RenderDrawLine(renderer,x,y,x+THICK,y);
	SDL_RenderDrawLine(renderer,x+THICK,y,x+THICK,y+THICK);
	SDL_RenderDrawLine(renderer,x,y,x,y+THICK);
}
void updJeu(SDL_Renderer *renderer, cube **tab){
	for(int i = 0; i < SIZE_H/THICK; i++){
		for(int j = 0; j < SIZE_H/THICK; j++){
		traceCarre(renderer, tab[i][j]);
		}
	}
}



void initJeu(SDL_Renderer *renderer, cube **tab){
	for(int i = 0; i < SIZE_H/THICK; i++){
		for(int j = 0; j < SIZE_H/THICK; j++){
			traceCarre(renderer, tab[i][j]);

		}
	}
}
void computeV(cube** tab){
	for(int i = 1; i < SIZE_H/THICK; i++){
		for(int j = 1; j < SIZE_H/THICK; j++){
			tab[i][j].s = 0;
			if(tab[i+1][j].e == 1) tab[i][j].s++; 
			if(tab[i-1][j].e == 1) tab[i][j].s++; 
			if(tab[i][j+1].e == 1) tab[i][j].s++; 
			if(tab[i][j-1].e == 1) tab[i][j].s++; 
			if(tab[i-1][j-1].e == 1) tab[i][j].s++; 
			if(tab[i+1][j+1].e == 1) tab[i][j].s++; 
			if(tab[i-1][j+1].e == 1) tab[i][j].s++; 
			if(tab[i+1][j-1].e == 1) tab[i][j].s++; 
		}
	}
}

void Run(SDL_Renderer *renderer, cube **tab, long s){
		msleep(s);
		computeV(tab);
		for(int i = 0; i < SIZE_H/THICK; i++){
			for(int j = 0; j < SIZE_H/THICK; j++){
				if(tab[i][j].e == 0 && tab[i][j].s == 3) tab[i][j].e = 1;
				if(tab[i][j].s < 2 || tab[i][j].s > 3) tab[i][j].e = 0;
			}
		}
		//Fin de la génération : affichage 
		updJeu(renderer, tab);
		SDL_RenderPresent(renderer);
}


int msleep(long msec)
{
    struct timespec ts;
    int res;

    if (msec < 0)
    {
        errno = EINVAL;
        return -1;
    }

    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000;

    do {
        res = nanosleep(&ts, &ts);
    } while (res && errno == EINTR);

    return res;
}


void contour(int ty, int tx, int x, int y, int l, SDL_Renderer *renderer2){
	SDL_SetRenderDrawColor(renderer2, 0,0,0,255);
	for(int i = l; i > 0; i++){
		SDL_RenderDrawLine(renderer2, x, y-i, x+tx,y-i);
		SDL_RenderDrawLine(renderer2, x, y-i+ty, x+tx,y-i+ty);
		SDL_RenderDrawLine(renderer2, x-i, y-l, x-i,y+ty);
		SDL_RenderDrawLine(renderer2, x+i+tx-1, y-l, x+tx+i-1,y+ty);
	}
}

int choixStruc(cube **tab){
	//
	SDL_Window *windowStruc = SDL_CreateWindow("Choix Structures", 0,0,500,500,SDL_WINDOW_SHOWN);
	SDL_Renderer *rendererStruc = SDL_CreateRenderer(windowStruc,-1,SDL_RENDERER_ACCELERATED);
	
	SDL_SetRenderDrawColor(rendererStruc,255,255,255,255);
	SDL_RenderClear(rendererStruc);
	SDL_RenderPresent(rendererStruc);
	TTF_Font* font1 = TTF_OpenFont("arial.ttf", 40);
	
	/////////
	////Affichage bouton play
	SDL_Rect r_but;
	r_but.w = 100;
	r_but.h = 20;
	r_but.x = 50;
	r_but.y = 50;
	SDL_SetRenderDrawColor(rendererStruc, 168,168,219,255);
	SDL_RenderFillRect(rendererStruc, &r_but);
	SDL_Color clr_txt = {255,255,255,255};
	SDL_Rect r_txt;
	r_txt.w = 100;
	r_txt.h = 20;
	r_txt.x = 50;;
	r_txt.y = 50;
	
	//Chargement police
	SDL_Surface* surfTxt = TTF_RenderText_Solid(font1, "InfiniteGrowth", clr_txt);
	SDL_Texture* textTxt = SDL_CreateTextureFromSurface(rendererStruc, surfTxt);
	SDL_RenderCopy(rendererStruc, textTxt, NULL, &r_txt);

	////Affichage bouton annuler
	SDL_Rect r_but2;
	r_but2.w = 100;
	r_but2.h = 20;
	r_but2.x = 300;
	r_but2.y = 50;
	SDL_SetRenderDrawColor(rendererStruc, 168,168,219,255);
	SDL_RenderFillRect(rendererStruc, &r_but2);
	SDL_Rect r_txt2;
	r_txt2.w = 100;
	r_txt2.h = 20;
	r_txt2.x = 300;;
	r_txt2.y = 50;
	
	//Chargement police
	SDL_Surface* surfTxt2 = TTF_RenderText_Solid(font1, "Annuler", clr_txt);
	SDL_Texture* textTxt2 = SDL_CreateTextureFromSurface(rendererStruc, surfTxt2);
	SDL_RenderCopy(rendererStruc, textTxt2, NULL, &r_txt2);
	////Affichage bouton annuler
	SDL_Rect r_but3;
	r_but3.w = 100;
	r_but3.h = 20;
	r_but3.x = 300;
	r_but3.y = 350;
	SDL_SetRenderDrawColor(rendererStruc, 168,168,219,255);
	SDL_RenderFillRect(rendererStruc, &r_but3);
	SDL_Rect r_txt3;
	r_txt3.w = 100;
	r_txt3.h = 20;
	r_txt3.x = 300;;
	r_txt3.y = 350;
	
	//Chargement police
	SDL_Surface* surfTxt3 = TTF_RenderText_Solid(font1, "Gun", clr_txt);
	SDL_Texture* textTxt3 = SDL_CreateTextureFromSurface(rendererStruc, surfTxt3);
	SDL_RenderCopy(rendererStruc, textTxt3, NULL, &r_txt3);





	SDL_RenderPresent(rendererStruc);
	
	SDL_Event e;
	int q = 0;
	int s = 0;
	while(!q){
		while(SDL_PollEvent(&e)){
			switch(e.type){
				case SDL_MOUSEBUTTONDOWN:
					if(e.button.x > r_but.x
							&& e.button.x < r_but.x + r_but.w
							&& e.button.y > r_but.y
							&& e.button.y < r_but.y + r_but.h){
						s = 1;
						q = 1;
					}
					if(e.button.x > r_but2.x
							&& e.button.x < r_but2.x + r_but2.w
							&& e.button.y > r_but2.y
							&& e.button.y < r_but2.y + r_but2.h){
						s = 0;
						q = 1;
					}

					if(e.button.x > r_but3.x
							&& e.button.x < r_but3.x + r_but3.w
							&& e.button.y > r_but3.y
							&& e.button.y < r_but3.y + r_but3.h){
						s = 2;
						q = 1;
					}
			}
		}
	}

	/////////
	TTF_CloseFont(font1);
	SDL_DestroyRenderer(rendererStruc);
	SDL_DestroyWindow(windowStruc);
	return s;

}

void Randomize(cube **tab){
	srand(time(NULL));
	for(int i = 3; i < SIZE_H/THICK-3; i++){
		for(int j = 3; j < SIZE_H/THICK-3; j++){
			int r; 
			r = rand() % 2;
			//tab[i][j].e = 1;
			tab[i][j].e = r;
		}
	}

}
void Reset(cube **tab){
	for(int i = 0; i < SIZE_H/THICK; i++){
		for(int j = 0; j < SIZE_H/THICK; j++){
			tab[i][j].e = 0;
		}
	}

}
void Construc(SDL_Renderer *renderer, int s,cube **tab){
	int q = 0;
	int rotation = 0;
	int x2, y2, xx, yy;
	SDL_Event e;
	while(!q){
		while(SDL_PollEvent(&e) != 0){
			switch(e.type){
				case SDL_MOUSEBUTTONDOWN:
					if(e.button.button == SDL_BUTTON_RIGHT){
						if(rotation < 3) rotation++;
						else rotation = 0;
					}
					if(e.button.button == SDL_BUTTON_LEFT){
						int x22, y22;
						x22 = e.button.x/THICK;
						y22 = e.button.y/THICK;
						
						if(s == 1 && rotation == 0){//Infinite growth
							for(int i = e.button.x/THICK; i < e.button.x/THICK + 8; i++) tab[i][e.button.y/THICK].e = 1;
							for(int i = e.button.x/THICK+9; i < e.button.x/THICK + 14; i++) tab[i][e.button.y/THICK].e = 1;
							for(int i = e.button.x/THICK+17; i < e.button.x/THICK + 20; i++) tab[i][e.button.y/THICK].e = 1;
							for(int i = e.button.x/THICK+26; i < e.button.x/THICK + 33; i++) tab[i][e.button.y/THICK].e = 1;
							for(int i = e.button.x/THICK+34; i < e.button.x/THICK + 39; i++) tab[i][e.button.y/THICK].e = 1;
	
							q = 1;
							break;
						}

						if(s == 1 && rotation == 1){//Infinite growth
							for(int i = y22; i < y22 + 8; i++) tab[x22][i].e = 1;
							for(int i = y22+9; i < y22 + 14; i++) tab[x22][i].e = 1;
							for(int i = y22+17; i < y22 + 20; i++) tab[x22][i].e = 1;
							for(int i = y22+26; i < y22 + 33; i++) tab[x22][i].e = 1;
							for(int i = y22+34; i < y22 + 39; i++) tab[x22][i].e = 1;
							q = 1;
							break;
						}
						if(s == 1 && rotation == 2){
							for(int i = x22; i > x22 - 8; i--) tab[i][y22].e = 1;
							for(int i = x22-9; i > x22 - 14; i--) tab[i][y22].e = 1;
							for(int i = x22-17; i > x22 - 20; i--) tab[i][y22].e = 1;
							for(int i = x22-26; i > x22 - 33; i--) tab[i][y22].e = 1;
							for(int i = x22-34; i > x22 - 39; i--) tab[i][y22].e = 1;
							q = 1;
							break;
						}
						if(s == 1 && rotation == 3){
							for(int i = y22; i > y22 - 8; i--) tab[x22][i].e = 1;
							for(int i = y22-9; i > y22 - 14; i--) tab[x22][i].e = 1;
							for(int i = y22-17; i > y22 - 20; i--) tab[x22][i].e = 1;
							for(int i = y22-26; i > y22 - 33; i--) tab[x22][i].e = 1;
							for(int i = y22-34; i > y22 - 39; i--) tab[x22][i].e = 1;
							q = 1;
							break;
						}

						if(s == 2 && rotation == 0){//Gun
							int x = e.button.x/THICK;
							int y = e.button.y/THICK;
							tab[x+0][y+4].e = 1;
							tab[x+0][y+5].e = 1;
							tab[x+1][y+4].e = 1;
							tab[x+1][y+5].e = 1;
							tab[x+34][y+2].e = 1;
							tab[x+35][y+2].e = 1;
							tab[x+34][y+3].e = 1;
							tab[x+35][y+3].e = 1;
							tab[x+10][y+4].e = 1;
							tab[x+10][y+5].e = 1;
							tab[x+10][y+6].e = 1;
							tab[x+13][y+2].e = 1;
							tab[x+12][y+2].e = 1;
							tab[x+11][y+3].e = 1;
							tab[x+11][y+7].e = 1;
							tab[x+12][y+8].e = 1;
							tab[x+13][y+8].e = 1;
							tab[x+14][y+5].e = 1;
							tab[x+16][y+5].e = 1;
							tab[x+16][y+6].e = 1;
							tab[x+16][y+4].e = 1;
							tab[x+15][y+3].e = 1;
							tab[x+15][y+7].e = 1;
							tab[x+17][y+5].e = 1;
							tab[x+20][y+2].e = 1;
							tab[x+21][y+2].e = 1;
							tab[x+21][y+3].e = 1;
							tab[x+20][y+3].e = 1;
							tab[x+20][y+4].e = 1;
							tab[x+21][y+4].e = 1;
							tab[x+22][y+5].e = 1;
							tab[x+22][y+1].e = 1;
							tab[x+24][y+0].e = 1;
							tab[x+24][y+1].e = 1;
							tab[x+24][y+5].e = 1;
							tab[x+24][y+6].e = 1;
						}

						if(s == 2 && rotation == 1){//Gun
							int x = e.button.x/THICK;
							int y = e.button.y/THICK;
/*
							tab[x+3][y+3].e = 1;
tab[x+3][y+4].e = 1;
tab[x+3][y+5].e = 1;
tab[x+3][y+6].e = 1;
tab[x+3][y+7].e = 1;
tab[x+3][y+8].e = 1;
tab[x+4][y+2].e = 1;
tab[x+4][y+5].e = 1;
tab[x+5][y+2].e = 1;
tab[x+5][y+5].e = 1;
tab[x+6][y+2].e = 1;
tab[x+6][y+5].e = 1;
tab[x+7][y+3].e = 1;
tab[x+7][y+4].e = 1;
tab[x+7][y+5].e = 1;
tab[x+7][y+6].e = 1;
tab[x+7][y+7].e = 1;
tab[x+7][y+8].e = 1;
tab[x+8][y+20].e = 1;
tab[x+8][y+21].e = 1;
tab[x+8][y+22].e = 1;
tab[x+8][y+23].e = 1;
tab[x+8][y+24].e = 1;
tab[x+8][y+25].e = 1;
tab[x+8][y+26].e = 1;
tab[x+8][y+27].e = 1;
tab[x+8][y+28].e = 1;
tab[x+9][y+28].e = 1;
tab[x+10][y+28].e = 1;
tab[x+11][y+2].e = 1;
tab[x+11][y+3].e = 1;
tab[x+11][y+4].e = 1;
tab[x+11][y+5].e = 1;
tab[x+11][y+6].e = 1;
tab[x+11][y+7].e = 1;
tab[x+11][y+8].e = 1;
tab[x+11][y+28].e = 1;
tab[x+12][y+3].e = 1;
tab[x+12][y+4].e = 1;
tab[x+12][y+41].e = 1;
tab[x+12][y+43].e = 1;
tab[x+13][y+4].e = 1;
tab[x+13][y+5].e = 1;
tab[x+13][y+6].e = 1;
tab[x+13][y+41].e = 1;
tab[x+13][y+43].e = 1;
tab[x+13][y+58].e = 1;
tab[x+13][y+59].e = 1;
tab[x+13][y+60].e = 1;
tab[x+13][y+61].e = 1;
tab[x+14][y+6].e = 1;
tab[x+14][y+7].e = 1;
tab[x+14][y+41].e = 1;
tab[x+14][y+43].e = 1;
tab[x+14][y+57].e = 1;
tab[x+14][y+58].e = 1;
tab[x+14][y+59].e = 1;
tab[x+14][y+61].e = 1;
tab[x+14][y+62].e = 1;
tab[x+15][y+2].e = 1;
tab[x+15][y+3].e = 1;
tab[x+15][y+4].e = 1;
tab[x+15][y+5].e = 1;
tab[x+15][y+6].e = 1;
tab[x+15][y+7].e = 1;
tab[x+15][y+8].e = 1;
tab[x+15][y+20].e = 1;
tab[x+15][y+21].e = 1;
tab[x+15][y+22].e = 1;
tab[x+15][y+23].e = 1;
tab[x+15][y+24].e = 1;
tab[x+15][y+25].e = 1;
tab[x+15][y+26].e = 1;
tab[x+15][y+27].e = 1;
tab[x+15][y+28].e = 1;
tab[x+15][y+41].e = 1;
tab[x+15][y+43].e = 1;
tab[x+15][y+57].e = 1;
tab[x+15][y+62].e = 1;
tab[x+15][y+63].e = 1;
tab[x+16][y+20].e = 1;
tab[x+16][y+24].e = 1;
tab[x+16][y+28].e = 1;
tab[x+16][y+41].e = 1;
tab[x+16][y+43].e = 1;
tab[x+16][y+56].e = 1;
tab[x+16][y+57].e = 1;
tab[x+16][y+63].e = 1;
tab[x+16][y+64].e = 1;
tab[x+16][y+65].e = 1;
tab[x+17][y+20].e = 1;
tab[x+17][y+24].e = 1;
tab[x+17][y+28].e = 1;
tab[x+17][y+41].e = 1;
tab[x+17][y+43].e = 1;
tab[x+17][y+56].e = 1;
tab[x+17][y+57].e = 1;
tab[x+17][y+65].e = 1;
tab[x+17][y+66].e = 1;
tab[x+18][y+20].e = 1;
tab[x+18][y+24].e = 1;
tab[x+18][y+28].e = 1;
tab[x+18][y+41].e = 1;
tab[x+18][y+43].e = 1;
tab[x+18][y+57].e = 1;
tab[x+18][y+58].e = 1;
tab[x+18][y+66].e = 1;
tab[x+18][y+67].e = 1;
tab[x+18][y+68].e = 1;
tab[x+19][y+3].e = 1;
tab[x+19][y+4].e = 1;
tab[x+19][y+5].e = 1;
tab[x+19][y+6].e = 1;
tab[x+19][y+16].e = 1;
tab[x+19][y+20].e = 1;
tab[x+19][y+24].e = 1;
tab[x+19][y+28].e = 1;
tab[x+19][y+58].e = 1;
tab[x+19][y+59].e = 1;
tab[x+19][y+68].e = 1;
tab[x+20][y+2].e = 1;
tab[x+20][y+7].e = 1;
tab[x+20][y+8].e = 1;
tab[x+20][y+16].e = 1;
tab[x+20][y+20].e = 1;
tab[x+20][y+28].e = 1;
tab[x+20][y+59].e = 1;
tab[x+20][y+60].e = 1;
tab[x+20][y+68].e = 1;
tab[x+20][y+69].e = 1;
tab[x+21][y+2].e = 1;
tab[x+21][y+8].e = 1;
tab[x+21][y+14].e = 1;
tab[x+21][y+15].e = 1;
tab[x+21][y+16].e = 1;
tab[x+21][y+17].e = 1;
tab[x+21][y+18].e = 1;
tab[x+21][y+20].e = 1;
tab[x+21][y+28].e = 1;
tab[x+21][y+60].e = 1;
tab[x+21][y+61].e = 1;
tab[x+21][y+69].e = 1;
tab[x+21][y+70].e = 1;
tab[x+22][y+2].e = 1;
tab[x+22][y+5].e = 1;
tab[x+22][y+8].e = 1;
tab[x+22][y+16].e = 1;
tab[x+22][y+60].e = 1;
tab[x+22][y+61].e = 1;
tab[x+22][y+68].e = 1;
tab[x+22][y+69].e = 1;
tab[x+22][y+70].e = 1;
tab[x+23][y+3].e = 1;
tab[x+23][y+5].e = 1;
tab[x+23][y+6].e = 1;
tab[x+23][y+7].e = 1;
tab[x+23][y+16].e = 1;
tab[x+23][y+59].e = 1;
tab[x+23][y+60].e = 1;
tab[x+23][y+68].e = 1;
tab[x+24][y+58].e = 1;
tab[x+24][y+59].e = 1;
tab[x+24][y+66].e = 1;
tab[x+24][y+67].e = 1;
tab[x+24][y+68].e = 1;
tab[x+25][y+57].e = 1;
tab[x+25][y+58].e = 1;
tab[x+25][y+65].e = 1;
tab[x+26][y+20].e = 1;
tab[x+26][y+21].e = 1;
tab[x+26][y+22].e = 1;
tab[x+26][y+23].e = 1;
tab[x+26][y+24].e = 1;
tab[x+26][y+25].e = 1;
tab[x+26][y+26].e = 1;
tab[x+26][y+27].e = 1;
tab[x+26][y+28].e = 1;
tab[x+26][y+56].e = 1;
tab[x+26][y+57].e = 1;
tab[x+26][y+58].e = 1;
tab[x+26][y+64].e = 1;
tab[x+26][y+65].e = 1;
tab[x+27][y+2].e = 1;
tab[x+27][y+3].e = 1;
tab[x+27][y+4].e = 1;
tab[x+27][y+5].e = 1;
tab[x+27][y+6].e = 1;
tab[x+27][y+7].e = 1;
tab[x+27][y+8].e = 1;
tab[x+27][y+20].e = 1;
tab[x+27][y+28].e = 1;
tab[x+27][y+56].e = 1;
tab[x+27][y+57].e = 1;
tab[x+27][y+63].e = 1;
tab[x+27][y+64].e = 1;
tab[x+28][y+2].e = 1;
tab[x+28][y+5].e = 1;
tab[x+28][y+8].e = 1;
tab[x+28][y+20].e = 1;
tab[x+28][y+28].e = 1;
tab[x+28][y+57].e = 1;
tab[x+28][y+58].e = 1;
tab[x+28][y+61].e = 1;
tab[x+28][y+62].e = 1;
tab[x+28][y+63].e = 1;
tab[x+29][y+2].e = 1;
tab[x+29][y+5].e = 1;
tab[x+29][y+8].e = 1;
tab[x+29][y+20].e = 1;
tab[x+29][y+28].e = 1;
tab[x+29][y+58].e = 1;
tab[x+29][y+59].e = 1;
tab[x+29][y+60].e = 1;
tab[x+29][y+61].e = 1;
tab[x+30][y+2].e = 1;
tab[x+30][y+8].e = 1;
tab[x+30][y+20].e = 1;
tab[x+30][y+28].e = 1;
tab[x+31][y+20].e = 1;
tab[x+31][y+21].e = 1;
tab[x+31][y+22].e = 1;
tab[x+31][y+23].e = 1;
tab[x+31][y+24].e = 1;
tab[x+31][y+25].e = 1;
tab[x+31][y+26].e = 1;
tab[x+31][y+27].e = 1;
tab[x+31][y+28].e = 1;
tab[x+34][y+2].e = 1;
tab[x+34][y+3].e = 1;
tab[x+34][y+4].e = 1;
tab[x+34][y+5].e = 1;
tab[x+34][y+6].e = 1;
tab[x+34][y+7].e = 1;
tab[x+34][y+8].e = 1;
tab[x+35][y+8].e = 1;
tab[x+36][y+8].e = 1;
tab[x+37][y+8].e = 1;
tab[x+41][y+3].e = 1;
tab[x+41][y+4].e = 1;
tab[x+41][y+5].e = 1;
tab[x+41][y+6].e = 1;
tab[x+41][y+7].e = 1;
tab[x+41][y+8].e = 1;
tab[x+42][y+2].e = 1;
tab[x+42][y+5].e = 1;
tab[x+43][y+2].e = 1;
tab[x+43][y+5].e = 1;
tab[x+44][y+2].e = 1;
tab[x+44][y+5].e = 1;
tab[x+45][y+3].e = 1;
tab[x+45][y+4].e = 1;
tab[x+45][y+5].e = 1;
tab[x+45][y+6].e = 1;
tab[x+45][y+7].e = 1;
tab[x+45][y+8].e = 1;
*/
							
							
							
							
tab[x+0][y+12].e = 1;
tab[x+0][y+13].e = 1;
tab[x+1][y+11].e = 1;
tab[x+1][y+15].e = 1;
tab[x+2][y+10].e = 1;
tab[x+2][y+16].e = 1;
tab[x+2][y+24].e = 1;
tab[x+3][y+0].e = 1;
tab[x+3][y+1].e = 1;
tab[x+3][y+10].e = 1;
tab[x+3][y+14].e = 1;
tab[x+3][y+16].e = 1;
tab[x+3][y+17].e = 1;
tab[x+3][y+22].e = 1;
tab[x+3][y+24].e = 1;
tab[x+4][y+0].e = 1;
tab[x+4][y+1].e = 1;
tab[x+4][y+10].e = 1;
tab[x+4][y+16].e = 1;
tab[x+4][y+20].e = 1;
tab[x+4][y+21].e = 1;
tab[x+5][y+11].e = 1;
tab[x+5][y+15].e = 1;
tab[x+5][y+20].e = 1;
tab[x+5][y+21].e = 1;
tab[x+5][y+34].e = 1;
tab[x+5][y+35].e = 1;
tab[x+6][y+12].e = 1;
tab[x+6][y+13].e = 1;
tab[x+6][y+20].e = 1;
tab[x+6][y+21].e = 1;
tab[x+6][y+34].e = 1;
tab[x+6][y+35].e = 1;
tab[x+7][y+22].e = 1;
tab[x+7][y+24].e = 1;
tab[x+8][y+24].e = 1;
tab[x+50][y+52].e = 1;
tab[x+51][y+50].e = 1;
tab[x+51][y+52].e = 1;
tab[x+52][y+51].e = 1;
tab[x+52][y+52].e = 1;

						}


						q = 1;
					}
				}
		}
		SDL_GetMouseState(&x2, &y2);
		//Previsualisation
		if(!q){
			//Sauvegarde de tab
			cube tab2[100][100];
			for(int i = 0; i < 100; i++){
				for(int j = 0; j < 100; j++){
					tab2[i][j] = tab[i][j];
				}
			}




			//======
			int saved;
			if(s == 1){//Infinite growth
				if(rotation== 0){
					for(int i = x2/THICK; i < x2/THICK + 8; i++) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK+9; i < x2/THICK + 14; i++) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK+17; i < x2/THICK + 20; i++) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK+26; i < x2/THICK + 33; i++) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK+34; i < x2/THICK + 39; i++) tab[i][y2/THICK].e = 2;
					updJeu(renderer, tab);
					SDL_RenderPresent(renderer);
					for(int i = x2/THICK; i < x2/THICK + 8; i++) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK+9; i < x2/THICK + 14; i++) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK+17; i < x2/THICK + 20; i++) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK+26; i < x2/THICK + 33; i++) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK+34; i < x2/THICK + 39; i++) tab[i][y2/THICK].e = 0;
				}
				if(rotation == 1){
					for(int i = y2/THICK; i < y2/THICK + 8; i++) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK+9; i < y2/THICK + 14; i++) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK+17; i < y2/THICK + 20; i++) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK+26; i < y2/THICK + 33; i++) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK+34; i < y2/THICK + 39; i++) tab[x2/THICK][i].e = 2;
					updJeu(renderer, tab);
					SDL_RenderPresent(renderer);
					for(int i = y2/THICK; i < y2/THICK + 8; i++) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK+9; i < y2/THICK + 14; i++) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK+17; i < y2/THICK + 20; i++) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK+26; i < y2/THICK + 33; i++) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK+34; i < y2/THICK + 39; i++) tab[x2/THICK][i].e = 0;
				}
				if(rotation== 2){
					for(int i = x2/THICK; i > x2/THICK - 8; i--) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK-9; i > x2/THICK - 14; i--) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK-17; i > x2/THICK - 20; i--) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK-26; i > x2/THICK - 33; i--) tab[i][y2/THICK].e = 2;
					for(int i = x2/THICK-34; i > x2/THICK - 39; i--) tab[i][y2/THICK].e = 2;
					updJeu(renderer, tab);
					SDL_RenderPresent(renderer);
					for(int i = x2/THICK; i > x2/THICK - 8; i--) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK-9; i > x2/THICK - 14; i--) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK-17; i > x2/THICK - 20; i--) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK-26; i > x2/THICK - 33; i--) tab[i][y2/THICK].e = 0;
					for(int i = x2/THICK-34; i > x2/THICK - 39; i--) tab[i][y2/THICK].e = 0;
				}
				if(rotation == 3){
					for(int i = y2/THICK; i > y2/THICK - 8; i--) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK-9; i > y2/THICK - 14; i--) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK-17; i > y2/THICK - 20; i--) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK-26; i > y2/THICK - 33; i--) tab[x2/THICK][i].e = 2;
					for(int i = y2/THICK-34; i > y2/THICK - 39; i--) tab[x2/THICK][i].e = 2;
					updJeu(renderer, tab);
					SDL_RenderPresent(renderer);
					for(int i = y2/THICK; i > y2/THICK - 8; i--) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK-9; i > y2/THICK - 14; i--) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK-17; i > y2/THICK - 20; i--) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK-26; i > y2/THICK - 33; i--) tab[x2/THICK][i].e = 0;
					for(int i = y2/THICK-34; i > y2/THICK - 39; i--) tab[x2/THICK][i].e = 0;
				}




			}

			if(s == 2 && rotation == 0){//Gun
				int x = x2/THICK;
				int y = y2/THICK;
					tab[x+0][y+4].e = 2;
					tab[x+0][y+5].e = 2;
					tab[x+1][y+4].e = 2;
					tab[x+1][y+5].e = 2;
					tab[x+34][y+2].e = 2;
					tab[x+35][y+2].e = 2;
					tab[x+34][y+3].e = 2;
					tab[x+35][y+3].e = 2;
					tab[x+10][y+4].e = 2;
					tab[x+10][y+5].e = 2;
					tab[x+10][y+6].e = 2;
					tab[x+13][y+2].e = 2;
					tab[x+12][y+2].e = 2;
					tab[x+11][y+3].e = 2;
					tab[x+11][y+7].e = 2;
					tab[x+12][y+8].e = 2;
					tab[x+13][y+8].e = 2;
					tab[x+14][y+5].e = 2;
					tab[x+16][y+5].e = 2;
					tab[x+16][y+6].e = 2;
					tab[x+16][y+4].e = 2;
					tab[x+15][y+3].e = 2;
					tab[x+15][y+7].e = 2;
					tab[x+17][y+5].e = 2;
					tab[x+20][y+2].e = 2;
					tab[x+21][y+2].e = 2;
					tab[x+21][y+3].e = 2;
					tab[x+20][y+3].e = 2;
					tab[x+20][y+4].e = 2;
					tab[x+21][y+4].e = 2;
					tab[x+22][y+5].e = 2;
					tab[x+22][y+1].e = 2;
					tab[x+24][y+0].e = 2;
					tab[x+24][y+1].e = 2;
					tab[x+24][y+5].e = 2;
					tab[x+24][y+6].e = 2;
					updJeu(renderer, tab);
					SDL_RenderPresent(renderer);
					tab[x+0][y+4].e = 0;
					tab[x+0][y+5].e = 0;
					tab[x+1][y+4].e = 0;
					tab[x+1][y+5].e = 0;
					tab[x+34][y+2].e = 0;
					tab[x+35][y+2].e = 0;
					tab[x+34][y+3].e = 0;
					tab[x+35][y+3].e = 0;
					tab[x+10][y+4].e = 0;
					tab[x+10][y+5].e = 0;
					tab[x+10][y+6].e = 0;
					tab[x+13][y+2].e = 0;
					tab[x+12][y+2].e = 0;
					tab[x+11][y+3].e = 0;
					tab[x+11][y+7].e = 0;
					tab[x+12][y+8].e = 0;
					tab[x+13][y+8].e = 0;
					tab[x+14][y+5].e = 0;
					tab[x+16][y+5].e = 0;
					tab[x+16][y+6].e = 0;
					tab[x+16][y+4].e = 0;
					tab[x+15][y+3].e = 0;
					tab[x+15][y+7].e = 0;
					tab[x+17][y+5].e = 0;
					tab[x+20][y+2].e = 0;
					tab[x+21][y+2].e = 0;
					tab[x+21][y+3].e = 0;
					tab[x+20][y+3].e = 0;
					tab[x+20][y+4].e = 0;
					tab[x+21][y+4].e = 0;
					tab[x+22][y+5].e = 0;
					tab[x+22][y+1].e = 0;
					tab[x+24][y+0].e = 0;
					tab[x+24][y+1].e = 0;
					tab[x+24][y+5].e = 0;
					tab[x+24][y+6].e = 0;
			}
			if(s == 2 && rotation == 1){//Gun
				int x = x2/THICK;
				int y = y2/THICK;

/*
tab[x+3][y+3].e = 2;
tab[x+3][y+4].e = 2;
tab[x+3][y+5].e = 2;
tab[x+3][y+6].e = 2;
tab[x+3][y+7].e = 2;
tab[x+3][y+8].e = 2;
tab[x+4][y+2].e = 2;
tab[x+4][y+5].e = 2;
tab[x+5][y+2].e = 2;
tab[x+5][y+5].e = 2;
tab[x+6][y+2].e = 2;
tab[x+6][y+5].e = 2;
tab[x+7][y+3].e = 2;
tab[x+7][y+4].e = 2;
tab[x+7][y+5].e = 2;
tab[x+7][y+6].e = 2;
tab[x+7][y+7].e = 2;
tab[x+7][y+8].e = 2;
tab[x+8][y+20].e = 2;
tab[x+8][y+21].e = 2;
tab[x+8][y+22].e = 2;
tab[x+8][y+23].e = 2;
tab[x+8][y+24].e = 2;
tab[x+8][y+25].e = 2;
tab[x+8][y+26].e = 2;
tab[x+8][y+27].e = 2;
tab[x+8][y+28].e = 2;
tab[x+9][y+28].e = 2;
tab[x+10][y+28].e = 2;
tab[x+11][y+2].e = 2;
tab[x+11][y+3].e = 2;
tab[x+11][y+4].e = 2;
tab[x+11][y+5].e = 2;
tab[x+11][y+6].e = 2;
tab[x+11][y+7].e = 2;
tab[x+11][y+8].e = 2;
tab[x+11][y+28].e = 2;
tab[x+12][y+3].e = 2;
tab[x+12][y+4].e = 2;
tab[x+12][y+41].e = 2;
tab[x+12][y+43].e = 2;
tab[x+13][y+4].e = 2;
tab[x+13][y+5].e = 2;
tab[x+13][y+6].e = 2;
tab[x+13][y+41].e = 2;
tab[x+13][y+43].e = 2;
tab[x+13][y+58].e = 2;
tab[x+13][y+59].e = 2;
tab[x+13][y+60].e = 2;
tab[x+13][y+61].e = 2;
tab[x+14][y+6].e = 2;
tab[x+14][y+7].e = 2;
tab[x+14][y+41].e = 2;
tab[x+14][y+43].e = 2;
tab[x+14][y+57].e = 2;
tab[x+14][y+58].e = 2;
tab[x+14][y+59].e = 2;
tab[x+14][y+61].e = 2;
tab[x+14][y+62].e = 2;
tab[x+15][y+2].e = 2;
tab[x+15][y+3].e = 2;
tab[x+15][y+4].e = 2;
tab[x+15][y+5].e = 2;
tab[x+15][y+6].e = 2;
tab[x+15][y+7].e = 2;
tab[x+15][y+8].e = 2;
tab[x+15][y+20].e = 2;
tab[x+15][y+21].e = 2;
tab[x+15][y+22].e = 2;
tab[x+15][y+23].e = 2;
tab[x+15][y+24].e = 2;
tab[x+15][y+25].e = 2;
tab[x+15][y+26].e = 2;
tab[x+15][y+27].e = 2;
tab[x+15][y+28].e = 2;
tab[x+15][y+41].e = 2;
tab[x+15][y+43].e = 2;
tab[x+15][y+57].e = 2;
tab[x+15][y+62].e = 2;
tab[x+15][y+63].e = 2;
tab[x+16][y+20].e = 2;
tab[x+16][y+24].e = 2;
tab[x+16][y+28].e = 2;
tab[x+16][y+41].e = 2;
tab[x+16][y+43].e = 2;
tab[x+16][y+56].e = 2;
tab[x+16][y+57].e = 2;
tab[x+16][y+63].e = 2;
tab[x+16][y+64].e = 2;
tab[x+16][y+65].e = 2;
tab[x+17][y+20].e = 2;
tab[x+17][y+24].e = 2;
tab[x+17][y+28].e = 2;
tab[x+17][y+41].e = 2;
tab[x+17][y+43].e = 2;
tab[x+17][y+56].e = 2;
tab[x+17][y+57].e = 2;
tab[x+17][y+65].e = 2;
tab[x+17][y+66].e = 2;
tab[x+18][y+20].e = 2;
tab[x+18][y+24].e = 2;
tab[x+18][y+28].e = 2;
tab[x+18][y+41].e = 2;
tab[x+18][y+43].e = 2;
tab[x+18][y+57].e = 2;
tab[x+18][y+58].e = 2;
tab[x+18][y+66].e = 2;
tab[x+18][y+67].e = 2;
tab[x+18][y+68].e = 2;
tab[x+19][y+3].e = 2;
tab[x+19][y+4].e = 2;
tab[x+19][y+5].e = 2;
tab[x+19][y+6].e = 2;
tab[x+19][y+16].e = 2;
tab[x+19][y+20].e = 2;
tab[x+19][y+24].e = 2;
tab[x+19][y+28].e = 2;
tab[x+19][y+58].e = 2;
tab[x+19][y+59].e = 2;
tab[x+19][y+68].e = 2;
tab[x+20][y+2].e = 2;
tab[x+20][y+7].e = 2;
tab[x+20][y+8].e = 2;
tab[x+20][y+16].e = 2;
tab[x+20][y+20].e = 2;
tab[x+20][y+28].e = 2;
tab[x+20][y+59].e = 2;
tab[x+20][y+60].e = 2;
tab[x+20][y+68].e = 2;
tab[x+20][y+69].e = 2;
tab[x+21][y+2].e = 2;
tab[x+21][y+8].e = 2;
tab[x+21][y+14].e = 2;
tab[x+21][y+15].e = 2;
tab[x+21][y+16].e = 2;
tab[x+21][y+17].e = 2;
tab[x+21][y+18].e = 2;
tab[x+21][y+20].e = 2;
tab[x+21][y+28].e = 2;
tab[x+21][y+60].e = 2;
tab[x+21][y+61].e = 2;
tab[x+21][y+69].e = 2;
tab[x+21][y+70].e = 2;
tab[x+22][y+2].e = 2;
tab[x+22][y+5].e = 2;
tab[x+22][y+8].e = 2;
tab[x+22][y+16].e = 2;
tab[x+22][y+60].e = 2;
tab[x+22][y+61].e = 2;
tab[x+22][y+68].e = 2;
tab[x+22][y+69].e = 2;
tab[x+22][y+70].e = 2;
tab[x+23][y+3].e = 2;
tab[x+23][y+5].e = 2;
tab[x+23][y+6].e = 2;
tab[x+23][y+7].e = 2;
tab[x+23][y+16].e = 2;
tab[x+23][y+59].e = 2;
tab[x+23][y+60].e = 2;
tab[x+23][y+68].e = 2;
tab[x+24][y+58].e = 2;
tab[x+24][y+59].e = 2;
tab[x+24][y+66].e = 2;
tab[x+24][y+67].e = 2;
tab[x+24][y+68].e = 2;
tab[x+25][y+57].e = 2;
tab[x+25][y+58].e = 2;
tab[x+25][y+65].e = 2;
tab[x+26][y+20].e = 2;
tab[x+26][y+21].e = 2;
tab[x+26][y+22].e = 2;
tab[x+26][y+23].e = 2;
tab[x+26][y+24].e = 2;
tab[x+26][y+25].e = 2;
tab[x+26][y+26].e = 2;
tab[x+26][y+27].e = 2;
tab[x+26][y+28].e = 2;
tab[x+26][y+56].e = 2;
tab[x+26][y+57].e = 2;
tab[x+26][y+58].e = 2;
tab[x+26][y+64].e = 2;
tab[x+26][y+65].e = 2;
tab[x+27][y+2].e = 2;
tab[x+27][y+3].e = 2;
tab[x+27][y+4].e = 2;
tab[x+27][y+5].e = 2;
tab[x+27][y+6].e = 2;
tab[x+27][y+7].e = 2;
tab[x+27][y+8].e = 2;
tab[x+27][y+20].e = 2;
tab[x+27][y+28].e = 2;
tab[x+27][y+56].e = 2;
tab[x+27][y+57].e = 2;
tab[x+27][y+63].e = 2;
tab[x+27][y+64].e = 2;
tab[x+28][y+2].e = 2;
tab[x+28][y+5].e = 2;
tab[x+28][y+8].e = 2;
tab[x+28][y+20].e = 2;
tab[x+28][y+28].e = 2;
tab[x+28][y+57].e = 2;
tab[x+28][y+58].e = 2;
tab[x+28][y+61].e = 2;
tab[x+28][y+62].e = 2;
tab[x+28][y+63].e = 2;
tab[x+29][y+2].e = 2;
tab[x+29][y+5].e = 2;
tab[x+29][y+8].e = 2;
tab[x+29][y+20].e = 2;
tab[x+29][y+28].e = 2;
tab[x+29][y+58].e = 2;
tab[x+29][y+59].e = 2;
tab[x+29][y+60].e = 2;
tab[x+29][y+61].e = 2;
tab[x+30][y+2].e = 2;
tab[x+30][y+8].e = 2;
tab[x+30][y+20].e = 2;
tab[x+30][y+28].e = 2;
tab[x+31][y+20].e = 2;
tab[x+31][y+21].e = 2;
tab[x+31][y+22].e = 2;
tab[x+31][y+23].e = 2;
tab[x+31][y+24].e = 2;
tab[x+31][y+25].e = 2;
tab[x+31][y+26].e = 2;
tab[x+31][y+27].e = 2;
tab[x+31][y+28].e = 2;
tab[x+34][y+2].e = 2;
tab[x+34][y+3].e = 2;
tab[x+34][y+4].e = 2;
tab[x+34][y+5].e = 2;
tab[x+34][y+6].e = 2;
tab[x+34][y+7].e = 2;
tab[x+34][y+8].e = 2;
tab[x+35][y+8].e = 2;
tab[x+36][y+8].e = 2;
tab[x+37][y+8].e = 2;
tab[x+41][y+3].e = 2;
tab[x+41][y+4].e = 2;
tab[x+41][y+5].e = 2;
tab[x+41][y+6].e = 2;
tab[x+41][y+7].e = 2;
tab[x+41][y+8].e = 2;
tab[x+42][y+2].e = 2;
tab[x+42][y+5].e = 2;
tab[x+43][y+2].e = 2;
tab[x+43][y+5].e = 2;
tab[x+44][y+2].e = 2;
tab[x+44][y+5].e = 2;
tab[x+45][y+3].e = 2;
tab[x+45][y+4].e = 2;
tab[x+45][y+5].e = 2;
tab[x+45][y+6].e = 2;
tab[x+45][y+7].e = 2;
tab[x+45][y+8].e = 2;

updJeu(renderer, tab);
SDL_RenderPresent(renderer);

tab[x+3][y+3].e = 0;
tab[x+3][y+4].e = 0;
tab[x+3][y+5].e = 0;
tab[x+3][y+6].e = 0;
tab[x+3][y+7].e = 0;
tab[x+3][y+8].e = 0;
tab[x+4][y+2].e = 0;
tab[x+4][y+5].e = 0;
tab[x+5][y+2].e = 0;
tab[x+5][y+5].e = 0;
tab[x+6][y+2].e = 0;
tab[x+6][y+5].e = 0;
tab[x+7][y+3].e = 0;
tab[x+7][y+4].e = 0;
tab[x+7][y+5].e = 0;
tab[x+7][y+6].e = 0;
tab[x+7][y+7].e = 0;
tab[x+7][y+8].e = 0;
tab[x+8][y+20].e = 0;
tab[x+8][y+21].e = 0;
tab[x+8][y+22].e = 0;
tab[x+8][y+23].e = 0;
tab[x+8][y+24].e = 0;
tab[x+8][y+25].e = 0;
tab[x+8][y+26].e = 0;
tab[x+8][y+27].e = 0;
tab[x+8][y+28].e = 0;
tab[x+9][y+28].e = 0;
tab[x+10][y+28].e = 0;
tab[x+11][y+2].e = 0;
tab[x+11][y+3].e = 0;
tab[x+11][y+4].e = 0;
tab[x+11][y+5].e = 0;
tab[x+11][y+6].e = 0;
tab[x+11][y+7].e = 0;
tab[x+11][y+8].e = 0;
tab[x+11][y+28].e = 0;
tab[x+12][y+3].e = 0;
tab[x+12][y+4].e = 0;
tab[x+12][y+41].e = 0;
tab[x+12][y+43].e = 0;
tab[x+13][y+4].e = 0;
tab[x+13][y+5].e = 0;
tab[x+13][y+6].e = 0;
tab[x+13][y+41].e = 0;
tab[x+13][y+43].e = 0;
tab[x+13][y+58].e = 0;
tab[x+13][y+59].e = 0;
tab[x+13][y+60].e = 0;
tab[x+13][y+61].e = 0;
tab[x+14][y+6].e = 0;
tab[x+14][y+7].e = 0;
tab[x+14][y+41].e = 0;
tab[x+14][y+43].e = 0;
tab[x+14][y+57].e = 0;
tab[x+14][y+58].e = 0;
tab[x+14][y+59].e = 0;
tab[x+14][y+61].e = 0;
tab[x+14][y+62].e = 0;
tab[x+15][y+2].e = 0;
tab[x+15][y+3].e = 0;
tab[x+15][y+4].e = 0;
tab[x+15][y+5].e = 0;
tab[x+15][y+6].e = 0;
tab[x+15][y+7].e = 0;
tab[x+15][y+8].e = 0;
tab[x+15][y+20].e = 0;
tab[x+15][y+21].e = 0;
tab[x+15][y+22].e = 0;
tab[x+15][y+23].e = 0;
tab[x+15][y+24].e = 0;
tab[x+15][y+25].e = 0;
tab[x+15][y+26].e = 0;
tab[x+15][y+27].e = 0;
tab[x+15][y+28].e = 0;
tab[x+15][y+41].e = 0;
tab[x+15][y+43].e = 0;
tab[x+15][y+57].e = 0;
tab[x+15][y+62].e = 0;
tab[x+15][y+63].e = 0;
tab[x+16][y+20].e = 0;
tab[x+16][y+24].e = 0;
tab[x+16][y+28].e = 0;
tab[x+16][y+41].e = 0;
tab[x+16][y+43].e = 0;
tab[x+16][y+56].e = 0;
tab[x+16][y+57].e = 0;
tab[x+16][y+63].e = 0;
tab[x+16][y+64].e = 0;
tab[x+16][y+65].e = 0;
tab[x+17][y+20].e = 0;
tab[x+17][y+24].e = 0;
tab[x+17][y+28].e = 0;
tab[x+17][y+41].e = 0;
tab[x+17][y+43].e = 0;
tab[x+17][y+56].e = 0;
tab[x+17][y+57].e = 0;
tab[x+17][y+65].e = 0;
tab[x+17][y+66].e = 0;
tab[x+18][y+20].e = 0;
tab[x+18][y+24].e = 0;
tab[x+18][y+28].e = 0;
tab[x+18][y+41].e = 0;
tab[x+18][y+43].e = 0;
tab[x+18][y+57].e = 0;
tab[x+18][y+58].e = 0;
tab[x+18][y+66].e = 0;
tab[x+18][y+67].e = 0;
tab[x+18][y+68].e = 0;
tab[x+19][y+3].e = 0;
tab[x+19][y+4].e = 0;
tab[x+19][y+5].e = 0;
tab[x+19][y+6].e = 0;
tab[x+19][y+16].e = 0;
tab[x+19][y+20].e = 0;
tab[x+19][y+24].e = 0;
tab[x+19][y+28].e = 0;
tab[x+19][y+58].e = 0;
tab[x+19][y+59].e = 0;
tab[x+19][y+68].e = 0;
tab[x+20][y+2].e = 0;
tab[x+20][y+7].e = 0;
tab[x+20][y+8].e = 0;
tab[x+20][y+16].e = 0;
tab[x+20][y+20].e = 0;
tab[x+20][y+28].e = 0;
tab[x+20][y+59].e = 0;
tab[x+20][y+60].e = 0;
tab[x+20][y+68].e = 0;
tab[x+20][y+69].e = 0;
tab[x+21][y+2].e = 0;
tab[x+21][y+8].e = 0;
tab[x+21][y+14].e = 0;
tab[x+21][y+15].e = 0;
tab[x+21][y+16].e = 0;
tab[x+21][y+17].e = 0;
tab[x+21][y+18].e = 0;
tab[x+21][y+20].e = 0;
tab[x+21][y+28].e = 0;
tab[x+21][y+60].e = 0;
tab[x+21][y+61].e = 0;
tab[x+21][y+69].e = 0;
tab[x+21][y+70].e = 0;
tab[x+22][y+2].e = 0;
tab[x+22][y+5].e = 0;
tab[x+22][y+8].e = 0;
tab[x+22][y+16].e = 0;
tab[x+22][y+60].e = 0;
tab[x+22][y+61].e = 0;
tab[x+22][y+68].e = 0;
tab[x+22][y+69].e = 0;
tab[x+22][y+70].e = 0;
tab[x+23][y+3].e = 0;
tab[x+23][y+5].e = 0;
tab[x+23][y+6].e = 0;
tab[x+23][y+7].e = 0;
tab[x+23][y+16].e = 0;
tab[x+23][y+59].e = 0;
tab[x+23][y+60].e = 0;
tab[x+23][y+68].e = 0;
tab[x+24][y+58].e = 0;
tab[x+24][y+59].e = 0;
tab[x+24][y+66].e = 0;
tab[x+24][y+67].e = 0;
tab[x+24][y+68].e = 0;
tab[x+25][y+57].e = 0;
tab[x+25][y+58].e = 0;
tab[x+25][y+65].e = 0;
tab[x+26][y+20].e = 0;
tab[x+26][y+21].e = 0;
tab[x+26][y+22].e = 0;
tab[x+26][y+23].e = 0;
tab[x+26][y+24].e = 0;
tab[x+26][y+25].e = 0;
tab[x+26][y+26].e = 0;
tab[x+26][y+27].e = 0;
tab[x+26][y+28].e = 0;
tab[x+26][y+56].e = 0;
tab[x+26][y+57].e = 0;
tab[x+26][y+58].e = 0;
tab[x+26][y+64].e = 0;
tab[x+26][y+65].e = 0;
tab[x+27][y+2].e = 0;
tab[x+27][y+3].e = 0;
tab[x+27][y+4].e = 0;
tab[x+27][y+5].e = 0;
tab[x+27][y+6].e = 0;
tab[x+27][y+7].e = 0;
tab[x+27][y+8].e = 0;
tab[x+27][y+20].e = 0;
tab[x+27][y+28].e = 0;
tab[x+27][y+56].e = 0;
tab[x+27][y+57].e = 0;
tab[x+27][y+63].e = 0;
tab[x+27][y+64].e = 0;
tab[x+28][y+2].e = 0;
tab[x+28][y+5].e = 0;
tab[x+28][y+8].e = 0;
tab[x+28][y+20].e = 0;
tab[x+28][y+28].e = 0;
tab[x+28][y+57].e = 0;
tab[x+28][y+58].e = 0;
tab[x+28][y+61].e = 0;
tab[x+28][y+62].e = 0;
tab[x+28][y+63].e = 0;
tab[x+29][y+2].e = 0;
tab[x+29][y+5].e = 0;
tab[x+29][y+8].e = 0;
tab[x+29][y+20].e = 0;
tab[x+29][y+28].e = 0;
tab[x+29][y+58].e = 0;
tab[x+29][y+59].e = 0;
tab[x+29][y+60].e = 0;
tab[x+29][y+61].e = 0;
tab[x+30][y+2].e = 0;
tab[x+30][y+8].e = 0;
tab[x+30][y+20].e = 0;
tab[x+30][y+28].e = 0;
tab[x+31][y+20].e = 0;
tab[x+31][y+21].e = 0;
tab[x+31][y+22].e = 0;
tab[x+31][y+23].e = 0;
tab[x+31][y+24].e = 0;
tab[x+31][y+25].e = 0;
tab[x+31][y+26].e = 0;
tab[x+31][y+27].e = 0;
tab[x+31][y+28].e = 0;
tab[x+34][y+2].e = 0;
tab[x+34][y+3].e = 0;
tab[x+34][y+4].e = 0;
tab[x+34][y+5].e = 0;
tab[x+34][y+6].e = 0;
tab[x+34][y+7].e = 0;
tab[x+34][y+8].e = 0;
tab[x+35][y+8].e = 0;
tab[x+36][y+8].e = 0;
tab[x+37][y+8].e = 0;
tab[x+41][y+3].e = 0;
tab[x+41][y+4].e = 0;
tab[x+41][y+5].e = 0;
tab[x+41][y+6].e = 0;
tab[x+41][y+7].e = 0;
tab[x+41][y+8].e = 0;
tab[x+42][y+2].e = 0;
tab[x+42][y+5].e = 0;
tab[x+43][y+2].e = 0;
tab[x+43][y+5].e = 0;
tab[x+44][y+2].e = 0;
tab[x+44][y+5].e = 0;
tab[x+45][y+3].e = 0;
tab[x+45][y+4].e = 0;
tab[x+45][y+5].e = 0;
tab[x+45][y+6].e = 0;
tab[x+45][y+7].e = 0;
tab[x+45][y+8].e = 0;
*/



tab[x+0][y+12].e = 2;
tab[x+0][y+13].e = 2;
tab[x+1][y+11].e = 2;
tab[x+1][y+15].e = 2;
tab[x+2][y+10].e = 2;
tab[x+2][y+16].e = 2;
tab[x+2][y+24].e = 2;
tab[x+3][y+0].e = 2;
tab[x+3][y+1].e = 2;
tab[x+3][y+10].e = 2;
tab[x+3][y+14].e = 2;
tab[x+3][y+16].e = 2;
tab[x+3][y+17].e = 2;
tab[x+3][y+22].e = 2;
tab[x+3][y+24].e = 2;
tab[x+4][y+0].e = 2;
tab[x+4][y+1].e = 2;
tab[x+4][y+10].e = 2;
tab[x+4][y+16].e = 2;
tab[x+4][y+20].e = 2;
tab[x+4][y+21].e = 2;
tab[x+5][y+11].e = 2;
tab[x+5][y+15].e = 2;
tab[x+5][y+20].e = 2;
tab[x+5][y+21].e = 2;
tab[x+5][y+34].e = 2;
tab[x+5][y+35].e = 2;
tab[x+6][y+12].e = 2;
tab[x+6][y+13].e = 2;
tab[x+6][y+20].e = 2;
tab[x+6][y+21].e = 2;
tab[x+6][y+34].e = 2;
tab[x+6][y+35].e = 2;
tab[x+7][y+22].e = 2;
tab[x+7][y+24].e = 2;
tab[x+8][y+24].e = 2;
tab[x+50][y+52].e = 2;
tab[x+51][y+50].e = 2;
tab[x+51][y+52].e = 2;
tab[x+52][y+51].e = 2;
tab[x+52][y+52].e = 2;

updJeu(renderer, tab);
SDL_RenderPresent(renderer);

tab[x+0][y+12].e = 0;
tab[x+0][y+13].e = 0;
tab[x+1][y+11].e = 0;
tab[x+1][y+15].e = 0;
tab[x+2][y+10].e = 0;
tab[x+2][y+16].e = 0;
tab[x+2][y+24].e = 0;
tab[x+3][y+0].e = 0;
tab[x+3][y+1].e = 0;
tab[x+3][y+10].e = 0;
tab[x+3][y+14].e = 0;
tab[x+3][y+16].e = 0;
tab[x+3][y+17].e = 0;
tab[x+3][y+22].e = 0;
tab[x+3][y+24].e = 0;
tab[x+4][y+0].e = 0;
tab[x+4][y+1].e = 0;
tab[x+4][y+10].e = 0;
tab[x+4][y+16].e = 0;
tab[x+4][y+20].e = 0;
tab[x+4][y+21].e = 0;
tab[x+5][y+11].e = 0;
tab[x+5][y+15].e = 0;
tab[x+5][y+20].e = 0;
tab[x+5][y+21].e = 0;
tab[x+5][y+34].e = 0;
tab[x+5][y+35].e = 0;
tab[x+6][y+12].e = 0;
tab[x+6][y+13].e = 0;
tab[x+6][y+20].e = 0;
tab[x+6][y+21].e = 0;
tab[x+6][y+34].e = 0;
tab[x+6][y+35].e = 0;
tab[x+7][y+22].e = 0;
tab[x+7][y+24].e = 0;
tab[x+8][y+24].e = 0;
tab[x+50][y+52].e = 0;
tab[x+51][y+50].e = 0;
tab[x+51][y+52].e = 0;
tab[x+52][y+51].e = 0;
tab[x+52][y+52].e = 0;




			}












			//======

		//remise  de tab	
			for(int i = 0; i < 100; i++){
				for(int j = 0; j < 100; j++){
					tab[i][j] = tab2[i][j];
				}
			}

		}
	}

}




void printTab(cube **tab, int x, int y){
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if(tab[i][j].e == 1){
				printf("tab[x+%d][y+%d].e = 2;\n", i,j);
			}
		}
	}
	printf("\n\n\n");
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if(tab[i][j].e == 1){
				printf("tab[x+%d][y+%d].e = 0;\n",i,j);
			}
		}
	}
	printf("\n\n\n");
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if(tab[i][j].e == 1){
				printf("tab[x+%d][y+%d].e = 1;\n",i,j);
			}
		}
	}

}
