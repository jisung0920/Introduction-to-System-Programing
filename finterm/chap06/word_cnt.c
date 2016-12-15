#include <stdio.h>
#include <ctype.h>

int word_cnt(char *s){
  int cnt =0;
  while(*s != '\0'){
    while(isspace(*s))
      ++s;
    if(*s!='\0'){
      cnt++;
      while(*s!='\0'&&!isspace(*s)){
        ++s;
      }
    }
  }
  return cnt;
}

int main(void){
  char *s ="Hello world my name is jisung";
  printf("word count %d \n%s\n",word_cnt(s),s );
  return 0;
}
