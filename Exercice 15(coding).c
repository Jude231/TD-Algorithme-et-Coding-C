#include <stdio.h>
#include <math.h>

int main() {
    int N ,i;
    double S = 0, puissance = 1; 

    // Lire la valeur de N
    printf("Entrez un nombre N : ");
    scanf("%d", &N);

    // Calcul de la somme
    for (i = 0; i <= N; i++) {
        S += puissance;
        puissance *= 10; 
    }

    // Affichage du résultat
    printf("La somme S est : %.2lf\n", S);

    return 0;
}