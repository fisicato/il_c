/* Calcolo delle radici di un'equazuibe du secondo grado */

#include <stdio.h>
#include <math.h>

int main (){
	double root1, root2, a, b, c, delta;
	printf("Questo programma calcola le radici di un'eqauizione di secondo grado.\n");
	printf("Ordina l'equazione nella forma ax^2 + bx + c = 0.\n");
	printf("Inserisci i coeffcienti: \n");
	printf("a = "); scanf("%lf", &a);
	printf("b = "); scanf("%lf", &b);
	printf("c = "); scanf("%lf", &c);
	delta = b*b - (4.0 * a * c);	
	if (delta < 0) {
		printf("L'equazione ha soluzioni immaginarie.");
		printf("La prima soluzione immaginaria è %lf - %lf i", (-b/(2*a)), (sqrt(-delta)/(2*a)));
		printf("La seconda soluzione immaginaria è %lf + %lf i", (-b/(2*a)), (sqrt(-delta)/(2*a)));
	}
	else if (delta== 0) {
		root1 = - b/(2*a);
		printf("Le due soluzioni sono coincidenti e valgono %lf.", root1);
	}
	else{
		root1 = (-b - sqrt(delta))/(2*a);
		root2 = (-b + sqrt(delta))/(2*a);
		printf("Le due soluzioni sono %lf e %lf.", root1, root2);
	}
}
