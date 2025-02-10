#include <stdio.h>

int main() {
    int N, S = 0, i, fact = 1;

    // Lire la valeur de N
    printf("Entrez un nombre N : ");
    scanf("%d", &N);

    // Calcul de la somme des factorielles
    for (i = 1; i <= N; i++) {
        fact *= i; 
        S += fact;
    }

    // Affichage du résultat
    printf("La somme S est : %d\n", S);

    return 0;
}