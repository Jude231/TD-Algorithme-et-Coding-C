#include <stdio.h>

int main() {
    int A, B, C, D;

    // Demander à l'utilisateur d'entrer les valeurs de A, B et C
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);
    printf("Entrez la valeur de C : ");
    scanf("%d", &C);

    // Afficher les valeurs avant l'échange
    printf("Avant l'échange : A = %d, B = %d, C = %d\n", A, B, C);

    // Échange des valeurs
    D = A;
    A = B;
    B = C;
    C = D;

    // Afficher les valeurs après l'échange
    printf("Après l'échange : A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}