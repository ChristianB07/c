#include <stdio.h>

int main()
{
int n, i;
float numero, somma = 0.0, media;

printf("Inserisci il numero di elementi: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
printf("Inserisci il %do numero: ",i);
scanf("%f", &numero);
somma += numero;
}

media = somma / n;

printf("La media dei %d numeri inseriti è: %f\n", n, media);
}
