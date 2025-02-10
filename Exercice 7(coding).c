#include <stdio.h>

int main(){
double a , b , c ;
printf("Entrer la premiere valeur: ");
scanf("%lf",&a);
printf("Entrer la deuxieme valeur: ");
scanf("%lf",&b);
printf("Entrer la troisieme valeur: ");
scanf("%lf",&c);

if(a>b>c){
printf("Le maximum est:%.2lf .\n" , a);
}else if(b>a>c){
printf("Le maximum est:%.2lf .\n", b);
}else{
printf("Le maximum est:%.2lf .\n",c);
}
return 0 ;
}
