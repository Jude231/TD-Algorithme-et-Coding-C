#include <stdio.h>

int main() {
int c1 , c2 ;
double N1 , N2 , Moyenne ;

printf("entrer votre premier note: ");
scanf("%lf", &N1);
printf("entrer sa coefficient: ");
scanf("%d", &c1);
printf("entrer votre deuxieme note: ");
scanf("%lf", &N2);
printf("entrer sa coefficient: ");
scanf("%d", &c2);

Moyenne=((N1*c1)+(N2*c2))/(c1+c2);
printf("Leur moyenne est:%.2lf .\n",&Moyenne);

return 0;
}