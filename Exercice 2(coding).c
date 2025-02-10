#include<stdio.h>

int main() {
    int a, b;

    // Lecture des nombres
    printf("Entrer un nombre a : ");
    scanf("%d", &a);
    printf("Entrer un nombre b : ");
    scanf("%d", &b);

    // Vérification des signes
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("Le produit est positif.\n");
    } else  {
        printf("Le produit est negatif.\n");
}
    return 0;
}