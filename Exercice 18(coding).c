#include <stdio.h>

int main() {
int a , b , r ;

printf("Entrer a: ");
scanf("%d",&a);
printf("Entrer b: ");
scanf("%d", &b);

while (b!=0){
r=a%b ;
a=b ;
b=r ;
}
printf("le pgcd de a et b est:%d \n",a);
return 0 ;
}