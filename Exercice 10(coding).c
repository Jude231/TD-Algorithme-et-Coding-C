#include <stdio.h>

int main() {
int N , I ;
printf("Entrer le nombre N: ");
scanf("%d", &N);

if(N>1){
printf("les nombres diviseurs de %d sont: \n",N);
for(I=1 ; I<=N; I++){
if(N%I==0)
printf("%d \n",I);
}
}else{
printf("Entrer un nombre superieur a 1 .\n");
}
return 0 ;
}