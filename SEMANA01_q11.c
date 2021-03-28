
#include <stdio.h>

int main(void) {
  int impar1,impar2,par,passo4,passo5,cod1,cod2,cod3,cod4,cod5,cod6,cod7,cod8,cod9,cod10,cod11,cod12,cod13;
  
  scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i", &cod1,&cod2,&cod3,&cod4,&cod5,&cod6,&cod7,&cod8,&cod9,&cod10,&cod11,&cod12,&cod13);

 impar1 = cod2 + cod4 + cod6 + cod8 + cod10 + cod12;
 impar2 = impar1 * 3;
 par = cod3 + cod5 + cod7 + cod9 + cod11 + cod13;
 passo4 = impar2 + par;
 passo5 = passo4 + cod1;

 if (passo5 % 10 == 0){
   printf("S\n");
 }else{
   printf("N\n");
 }

  return 0;
}
