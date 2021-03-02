#include <stdio.h>

int main(void) {
  float valor;
  float a;
  float b;
  float c;
  printf("digite o valor\n");
  scanf("%f",&valor); //Nunca mais formatar entrada!
  if(valor <= 100.00){ 
    a = valor;
    printf("R$ %.2f\n", valor); 
  }else{
    if (valor >= 200.00){
    c = valor - (valor*0.1);
    printf("R$ %.2f\n", c);
  }else{
    b = valor - (valor*0.05);
    printf("R$ %.2f\n", b);
    }
  }
  return 0;
}