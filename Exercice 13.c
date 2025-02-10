#include <stdio.h>

int main() {
int N ;
long long produit=1 ;
printf("Entrer un entier N pour calculer le produit entre 1 a N: ");
scanf("%d",&N);
for (int i=1 ; i<=N ; i++) {
produit *= i;
}
printf("la produit de 1 a %d est %lld.\n", N , produit ); 

return 0 ;
}
