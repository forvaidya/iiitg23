#include <stdio.h>

int facto(int) ;

int facto(int input) {

  if ( input < 2 ) {
     return(1);
  } else {

     return (input * facto(input -1)) ;
}


}

int main() {

  int k = 4;
  printf("%d", facto(k));
  return(0) ;
}


