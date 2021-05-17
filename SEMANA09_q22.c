/*
#include <stdio.h>

int main(void) {
  char palavra[50];
  int i=0;
  gets (palavra);

  while (palavra[i] !='\0'){
    if (palavra [i] == 65){ // A
      palavra [i] = palavra[i] +8; 
    }
    if (palavra [i] == 69){ // E 
      palavra [i] = palavra[i] +4;
    }
    if (palavra [i] == 73){  // I
      palavra [i] = palavra[i];
    }
    if (palavra [i] == 79){ // O
      palavra [i] = palavra[i]-6;
    }
    if (palavra [i] == 85){ // U
      palavra [i] = palavra[i]-12;
    }
    if (palavra [i] == 97){ // a
      palavra [i] = palavra[i] +8; 
    }
    if (palavra [i] == 101){ // e 
      palavra [i] = palavra[i] +4;
    }
    if (palavra [i] == 105){  // i
      palavra [i] = palavra[i];
    }
    if (palavra [i] == 111){ // o
      palavra [i] = palavra[i]-6;
    }
    if (palavra [i] == 117){ // u
      palavra [i] = palavra[i]-12;
    }
    
    i++;
  }

  printf  ("%s", palavra);

  return 0;
}
*/