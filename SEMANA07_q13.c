/*
#include <stdio.h>

int main(void) {
  int n, 
      n1=-1, 
      n2=-1, 
      n3=-1;

  do {
    scanf("%i",&n);

    if  (n==0){
      break;
    }

    if (n>n1){
      n3 = n2;
      n2 = n1;
      n1 = n;
      continue;
    }
    if (n>n2){
      n3 = n2;
      n2 = n;
      n1 = n1;
      continue;
    }    
    if (n>n3){
      n3 = n;
      n2 = n2;
      n1 = n1;
      continue;
    }
    
  } while (n!=0);

printf("%i %i %i", n1, n2, n3);

  return 0;
}
*/