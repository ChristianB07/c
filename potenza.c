#include <stdio.h>

int main() {
    int e,potenza;
    int b;
    printf("quale vuoi sia il tuo esponente?\n");
    scanf("%d",&e);
    printf("quale vuoi sia la tua base?\n");
    scanf("%d",&b);
        if (e>0){
            printf("ecco a te la potenza calcolata:\n");
            potenza=b*b;
                for(int i=3;i<=e;i++){
                    potenza=potenza*b;
                }
            printf("\n%d",potenza);
        } else if(e==0)
            printf("1\n");
          else
            printf("il tuo esponente non è positivo");
}
