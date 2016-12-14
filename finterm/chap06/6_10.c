#include <ctype.h>
#include <stdio.h>

int word_cnt(const char *s){
  int cnt = 0;
  while(*s!='\0'){
    while(isspace(*s))
      ++s;
    if(*s!='\0'){
      ++cnt;
      while(!isspace(*s)&& *s!='\0')
      ++s;
    }
  }
  return cnt;
}

int main(void){
  char *c = "Hello hanyang univer";
  printf("\n%d\n",word_cnt(c));
  return 0;
}
