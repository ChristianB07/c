#include <stdio.h>

int main() {
int n,numax,num1,num2;
numax=10;
num1=9;
num2=8;
printf("inserisci un numero\n");
scanf("%d",&n);
    if(n>=1){
printf("ecco a te la prima sequenza di numeri");
        for(int i=n;i<=numax;i++){
            printf("%d",i);
        }
printf("\necco a te la seconda sequenza di numeri n-1");
            for(int i=n;i<=num1;i++){
                printf("%d",i);
            }
printf("\necco a te la terza sequenza di numeri n-2");
                for(int i=n;i<=num2;i++){
                    printf("%d",i);
                }
    }else
    printf("il numero inserito è minore di 1");
}
