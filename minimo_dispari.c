// Programma che trova il minimo numero dispari tra quelli inseriti

int main(){
	int min=0, k=0, i=0, N, a;
	
	printf("Questo programma, inserito un libero numero di numeri interi,\ntrova il minimo numero dispari.");
	
	// ACQUISIZIONE DEL VETTORE
	printf("\n\nInserire il numero di numeri che si desidera inserire: ");scanf("%ld",&N);printf("\n");
	int vettore[N];
	while (i<N){
		printf("Inserisci il valore n. %ld del vettore: ",i+1);scanf("%ld",&a);
		vettore[i]=a;
		i+=1;
	}

	// INDIVIDUAZIONE DEL MINIMO DISPARI (SE PRESENTE)
	for(i=0;i<N;i+=1){
		if (vettore[i]%2!=0){
			a=vettore[i];
			if (min==0)
				min=a;		
			if (min>a)
				min=a;
		}
	}	
	
	// STAMPA DEl RISULTATO
	if (min==0)
		printf("I numeri inseriti sono tutti pari.");
	else
		printf("Il numero dispari minore inserito: %ld",min);
}
