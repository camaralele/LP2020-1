
#include <stdio.h>

int main(void) {
  int num, resto, milhar, centena, dezena, unidade;
  scanf("%i", &num);
  
  milhar=num/1000;
  resto=num%1000;
  centena=resto/100;
  resto=resto%100;
  dezena=resto/10;
  resto=resto%10;
  unidade=resto/1;

  if (num == 0){
    printf("Zero");
  }

  switch (milhar){
    case 1: printf("Mil ");
    break;
    case 2: printf("Dois mil ");
    break;
    case 3: printf("Três mil ");
    break;
    case 4: printf("Quatro mil ");
    break;
    case 5: printf("Cinco mil ");
    break;
    case 6: printf("Seis mil ");
    break;
    case 7: printf("Sete mil ");
    break;
    case 8: printf("Oito mil ");
    break;
    case 9: printf("Nove mil ");
    break;
    default: printf("");
    break;
  }

    if  ((milhar != 0 && centena ==1 && dezena ==0 && unidade == 0) || (milhar != 0 && centena >= 2 && dezena ==0 && unidade == 0) || (milhar !=0 && centena == 0 && dezena > 0 ) || (milhar !=0 && centena == 0 && unidade > 0)){
          printf("e ");
        }

  switch (centena){
      case 1: switch (dezena){
        case 0: printf("Cem ");
        break;
        case 1: printf("Cento ");
        break;
      }
      break;
      case 2: printf("Duzentos ");
      break;
      case 3: printf("Trezentos ");
      break;
      case 4: printf("Quatrocentos ");
      break;
      case 5: printf("Quinhentos ");
      break;
      case 6: printf("Seiscentos ");
      break;
      case 7: printf("Setecentos ");
      break;
      case 8: printf("Oitocentos ");
      break;
      case 9: printf("Novecentos ");
      break;
      default: printf("");
      break;
    }

      if  ((milhar == 0 && centena > 1 && dezena ==0 && unidade == 0) || (milhar ==0 && centena != 0 && dezena > 0 ) || (milhar ==0 && centena != 0 && unidade > 0)|| (milhar !=0 && centena != 0 && dezena > 0 && unidade >0)){
                printf("e ");
              }

    switch (dezena){
        case 1: switch (unidade){
            case 0: printf ("dez");
            break;
            case 1: printf ("onze");
            break;
            case 2: printf ("doze");
            break;
            case 3: printf ("treze");
            break;
            case 4: printf ("quatorze");
            break;
            case 5: printf ("quinze");
            break;
            case 6: printf ("dezesseis");
            break;
            case 7: printf ("dezessete");
            break;
            case 8: printf ("dezoito");
            break;
            case 9: printf ("dezenove");
            break;
            default: printf ("");
            break;
          }
        break;
        case 2: printf("Vinte ");
        break;
        case 3: printf("Trinta ");
        break; 
        case 4: printf("Quarenta ");
        break;
        case 5: printf("Cinquenta ");
        break;
        case 6: printf("Sessenta ");
        break;
        case 7: printf("Setenta ");
        break;
        case 8: printf("Oitenta ");
        break;
        case 9: printf("Noventa ");
        break;
        default: printf("");
        break;
      }

       if  ((milhar ==0 && centena == 0 && dezena > 1 && unidade > 0) || (milhar !=0 && centena == 0 && dezena > 1 && unidade > 0) || (milhar !=0 && centena != 0 && dezena> 1 && unidade >0)){
          printf   ("e ");
        }
 

        if  (dezena !=1){
          switch (unidade){
            case 1: printf("Um");
            break;
            case 2: printf("dois");
            break;
            case 3: printf("Três");
            break;
            case 4: printf("Quatro");
            break;
            case 5: printf("Cinco");
            break;
            case 6: printf("Seis");
            break;
            case 7: printf("Sete");
            break;
            case 8: printf("Oito");
            break;
            case 9: printf("Nove");
            break;
            default: printf("");
            break;
          }
 }
return 0;
}
