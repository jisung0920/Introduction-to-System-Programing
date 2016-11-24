#include "mbit.h"

int mypack(char a, char b, char c, char d){
  int p=a;
  p=(p<<CHAR_BIT)|b;
  p=(p<<CHAR_BIT)|c;
  p=(p<<CHAR_BIT)|d;
  return p;
}

char myunpack(int p, int k){
  int n=k*CHAR_BIT;
  unsigned mask =255;
  mask <<=n;
  return ((p&mask)>>n);
}
