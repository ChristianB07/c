#include <stdio.h>

int main() {
    int n,multipli;
    float x;
    printf("quante volte vuoi far leggere i multipli?\n");
    scanf("%d",&n);
    printf("inserisci il numero\n");
    scanf("%f",&x);
    printf("ecco a te\n");
    for(int i=1;i<=n;i++){
        multipli=i*x;
        printf ("\n%d",multipli);
    }
}
