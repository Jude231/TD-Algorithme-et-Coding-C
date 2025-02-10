#include <stdio.h> 

int main() {
double note1 , note2 ;
double somme , moyenne ;
printf("Entrer votre premier note: ");
scanf("%lf" , &note1);
printf("Entrer votre deuxieme note: ");
scanf("%lf" , &note2);

somme=(note1 + note2);
moyenne=((note1 + note2)/2);

printf("La somme est: %.2lf .\n" , somme);
printf("La moyenne est:%.2lf .\n", moyenne);

return 0 ;
}