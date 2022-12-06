#include <stdio.h>

int main(){
	int a, s_p=0, s_d=0, N, i;
	
	// Acquisizione del vettore
	printf("\nInserire il numero di numeri che si desidera inserire: ");scanf("%ld",&N);printf("\n");
	int vettore[N];
	while (i<N){
		printf("Inserisci il valore n. %ld del vettore: ",i+1);scanf("%ld",&a);
		vettore[i]=a;
		i+=1;
	}
	
	//Svolgmento dei prodotti tramite le somme ripetute
	for(i=0;i<N;i++){
		a=vettore[i];
		if (i%2==0) s_p+=a;
		else s_d+=a;
	}
	
	
	//Stampa dei risultati
	printf("\nSomma dei numeri di posizione pari: %ld",s_p);
	printf("\nSomme dei numeri di posizione dispari: %ld",s_d);
	
}
