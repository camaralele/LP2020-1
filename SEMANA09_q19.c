/*
#include <stdio.h>

int main(void) {
  int num, linha=0, coluna=0, matriz[num][num];
	char letra;
	
	scanf("%i %c", &num, &letra);
	
	printf("%i \n", num);


	if(letra == 'T'){
		for (linha=0; linha<num; linha++){
			    for (coluna=0; coluna<num; coluna++){
            if ((linha+coluna)%2==0){
              printf ("1");
            }else{
              printf ("0");
            }
			  }
        printf ("\n");
 			}
		}

  if(letra == 'I'){
		for (linha=0; linha<num; linha++){
			    for (coluna=0; coluna<num; coluna++){
            if (coluna <= linha){
              matriz [linha][coluna]=1;
            }else{
              matriz [linha][coluna]=0;
            }
            printf ("%i", matriz [linha] [coluna]);
			  }
        printf ("\n");
 			}
		}

  if(letra == 'D'){
		for (linha=0; linha<num; linha++){
			    for (coluna=0; coluna<num; coluna++){
            if (coluna == linha){
              matriz [linha][coluna]=1;
            }else{
              matriz [linha][coluna]=0;
            }
            printf ("%i", matriz [linha] [coluna]);
			  }
        printf ("\n");
 			}
		}

  if(letra == 'S'){
		for (linha=0; linha<num; linha++){
			    for (coluna=0; coluna<num; coluna++){
            if (coluna >= linha){
              matriz [linha][coluna]=1;
            }else{
              matriz [linha][coluna]=0;
            }
            printf ("%i", matriz [linha] [coluna]);
			  }
        printf ("\n");
 			}
		}

  return 0;
}
*/