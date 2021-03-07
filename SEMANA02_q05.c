
#include <stdio.h>

int main(void) {
  int a,b;
  scanf("%i %i",&a,&b);
  
  if (a-b>=0){
    printf("%i %i %i %i %i %i\n",a-1,a,a+1,b-1,b,b+1);
  }else{
    if (a-b<=1){
      printf("%i %i %i %i %i %i\n",a-2,a,a+2,b-2,b,b+2);
    }else{
      if(a-b<=2){
        printf("%i %i %i %i %i %i\n",a-1,a,a+1,b-1,b,b+1);
      }else{
      printf("%i %i %i %i %i %i\n",a-1,a,a+1,b-1,b,b+1);
      }
    }
  }
  return 0;
}

