/*
#include <stdio.h>

int main(void) {
  int parada = 0,
      n, n1, n2, n3;

  do {
    scanf("%i",&n);

    if  (n==parada){
      continue;
    }
    if  (n<=9){
      n1 = n;
    }
    if (n<n1){
      n1 = n1;
      n2 = n;
    }
    if (n>n1){
      n1 = n;
      n2 = n1;
      n3 = n2;
    }    
    if (n>n2){
      n1 = n1;
      n2 = n;
      n3 = n2;
    }
    if (n<n2 || n>n3){
      n1 = n1;
      n2 = n2;
      n3 = n;
    }
  } while (n!=0);

printf("%i %i %i", n1, n2, n3);

  return 0;
}
*/