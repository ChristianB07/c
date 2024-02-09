#include <stdio.h>

int main() {
int n;
float numero, massimo, minimo;

printf("Inserisci il numero di elementi: ");
scanf("%d", &n);
printf("Inserisci il primo numero: ");
scanf("%f", &numero);
massimo = minimo = numero;
for (int i = 1; i < n; ++i) {
printf("Inserisci il prossimo numero: ");
scanf("%f", &numero);

if (numero > massimo) {
massimo = numero;
}

if (numero < minimo) {
minimo = numero;
}
}
printf("Il massimo è: %.2f\n", massimo);
printf("Il minimo è: %.2f\n", minimo);

return 0;
}
