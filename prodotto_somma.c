//Programma che effettua il prodotto attraverso somme ripetute.

#include <stdio.h>
int main(){
	int i, a, b, somma=0;
	printf("Inserire i numeri da moltiplicare.\n");
	printf("Primo fattore: ");scanf("%ld",&a);
	printf("Secondo fattore: ");scanf("%ld",&b);

	for(i=0;i<b;i++)
		somma+=a;			
	printf("Il prodotto vale: %ld",somma);	
}
