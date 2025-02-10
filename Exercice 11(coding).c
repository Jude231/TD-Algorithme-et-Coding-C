#include <stdio.h>

int main() {
int N , I ;
long long produit=1 ;
printf("Entrer le nombre N: ");
scanf("%d", &N);

if(N>1){
for(I=1 ; I<=N; I++){
produit*=I ;
}
printf("la factorielle de %d est :%lld.\n" , N, produit);
}else{
printf("Entrer un nombre superieur a 1 .\n");
}
return 0 ;
}