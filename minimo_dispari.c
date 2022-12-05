// Creare un programma che trovi il numero dispari
// più piccolo tra quelli inseriti.

int main(){
	int min=0, k=0, i=0, N, a;
	
	printf("Questo programma, inseriti un libero numero di numeri interi,\ntrova il minimo numero dispari.");
	
	// ACQUISIZIONE DEL VETTORE
	printf("\n\nInserire il numero di numeri che si desidera inserire: ");scanf("%ld",&N);printf("\n");
	int vettore[N];
	while (i<N){
		printf("Inserisci il valore n. %ld del vettore: ",i+1);scanf("%ld",&a);
		vettore[i]=a;
		i+=1;
	}

	// INDIVIDUAZIONE DEL MINIMO DISPARI (SE PRESENTE)
	for(i=0;i<N && (vettore[i]%2!=0);i+=1){
		a=vettore[i];
		if (min==0)
			min=a;		
		if (min>a)
			min=a;
	}	
	
	// STAMPA DEI RISULTATI
	if (min==0)
		printf("I numeri inseriti sono tutti pari.");
	else
		printf("Il numero dispari minore inserito: %ld",min);
}
