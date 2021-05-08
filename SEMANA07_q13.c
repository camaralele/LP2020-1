/*
#include <stdio.h>

int main(void) {
  int N,
      n1,
      n2,
      n3;

  while (N>=0){
    scanf("%i\n",&N);
    
    if  (N<0){
    continue;
    }
    if (N>n1){
      n2=n1;
      n1=N;
   }
    if (N>n2){
        n3=n2;
        n2=n1;
        n1=N;
    }
    if (N>n2 && N>n1){
        n3=n2;
        n2=n1;
        n1=N;
    }     
    n1=N;
  }
   printf("N1 - %i N2 - %i N3 - %i \n",n1, n2, n3);

  return 0;
}
*/