// Programma che trava il minimo numero dispari tra quelli inseriti.

int main(){
	int a=0, min=0;
	
	//Indicazioni sull'uso del programma
	printf("Il programma restituisce il minor numero dispari inserito.\n");
	printf("Quando si vuole terminare l'inserimento dei numeri, premere Ctrl^C\n\n");
	
	// Acquisizione primo numero : può essere sia pari sia dispari
	printf("\nInserisci il primo numero: ");scanf("%ld",&min);
	
	//Ciclo per continuare a leggere i numeri
	while (1){
		printf("\n\nInserire un altro numero: ");scanf("%ld",&a);
		
		// Vengono considerati solo i numeri dispari
		if (a%2!=0){
			
			// Se il min è ancora pari (equivale al primo numero pari inserito dall'utente)
			// ed essendo entrati nel ciclo, in virtù del fatto che l'utente ha inserito un numero dispari,
			// a può essere assegnato ad a, cioè il primo valore dispari letto.
			if (min%2!=0) {
				min=a;
			}
			// Nei casi in cui a è minore di min (ed è dispari poichè siamo nel ciclo),
			// poichè a non può che essere dispari, i due dispari ( a e min) possono essere confrontati.
			else if (min>a){
				min=a;
			}
		}
		
		// Stampa dei risultati
		if (min%2==0)
			printf("I numeri inseriti sono tuti pari.");
		else
			printf("Il minimo numero dispari inserito: %ld",min);		
	}
}
