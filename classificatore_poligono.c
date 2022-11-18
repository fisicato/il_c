/*Questo programma classifica i poligoni in base al numero dei lati (max. 10) */
#include <stdio.h>

int main(){
	int lati;
	printf("Inserire il numero di lati del poligono da classificare (max. 10): ");
	scanf("%d",&lati);
	printf("\n");
	switch (lati){
		case 0: case 1: case 2: printf("Un poligono deve avere almeno tre lati.\n"); break;
		case 3: printf("TRIANGOLO\n"); break;
		case 4: printf("QUADRILATERO\n"); break;
		case 5: printf("PENTAGONO\n"); break;
		case 6: printf("ESAGONO\n"); break;
		case 7: printf("EPTAGONO\n"); break;
		case 8: printf("OTTAGONO\n"); break;
		case 9: printf("ENNEAGONO\n"); break;
		case 10: printf("DECAGONO\n"); break;
		default: printf("Hai superato il numero massimo di lati.");
	}
}
