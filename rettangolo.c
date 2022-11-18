/* Programma che calcola il perimetro e l'area di un rettangolo data la base e l'altezza*/

#include <stdio.h>

int main(){
	int base, altezza, perimetro, area;
	printf("Questo programma calcola perimetro e area date la base e l'altezza.\n");
	printf("Inserire i dati richiesti:\n");
	printf("BASE = ");
	scanf("%d", &base);
	printf("ALTEZZA = ");
	scanf("%d", &altezza);
	perimetro = 2 * (base + altezza);
	area = base * altezza;
	printf("\n\n\n");
	printf("Il rettangolo di base %d e altezza %d, ha i seguenti perimetro e area.\n\n", base, altezza);
	printf("PERIMETRO = %d\n",perimetro);
	printf("AREA = %d\n",area);
}
