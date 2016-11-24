#include "mbit.h"

int main(void){
  char a = 'a';
  char b = 'b';
  char c = 'c';
  char d = 'd';
  printf("bit printer char a b c d\n");
  mybit_print(a);
  mybit_print(b);
  mybit_print(c);
  mybit_print(d);
  printf("bit packing \n");
  int i = mypack(a,b,c,d);
  mybit_print(i);
  printf("unpacking %c %c %c %c\n",myunpack(i,0),myunpack(i,1),myunpack(i,2),myunpack(i,3) );
  return 0;
}
