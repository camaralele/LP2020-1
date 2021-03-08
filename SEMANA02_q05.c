
#include <stdio.h>

int main(void) {
  int a,b;
  scanf("%i %i",&a,&b);
  
  if (a-b==0){ // diferença de 0: saída de 3
    printf("%i %i %i\n",a-1,a,a+1);
  }else{
      if (a-b==1){ // diferença de 1: saída de 4
        printf("%i %i %i %i\n",b-1,b,a,a+1);
      }else{
        if (b-a==1){ // diferença de 1: saída de 4
          printf("%i %i %i %i\n",a-1,a,b,b+1);
        }else{
        if(a-b==2){ // diferença de 2: saída de 5
          printf("%i %i %i %i %i\n",b-1,b,b+1,a,a+1);
        }else{
          if(b-a==2){ // diferença de 2: saída de 5
          printf("%i %i %i %i %i\n",a-1,a,a+1,b,b+1);
      }else{
      printf("%i %i %i %i %i %i\n",a-1,a,a+1,b-1,b,b+1);
      }
        }
        }
        }
  }
  return 0;
}

