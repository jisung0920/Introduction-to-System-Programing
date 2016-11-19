#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWORD 50
#define N 1000

void sort_words(char *p[],int);
void swap(char **,char **);

int main(void){
  char *w[N];
  char word[MAXWORD];
  int n;
  int i;

  for(i=0;scanf("%s",word)==1;++i){
    if(!strcmp(word,"exit"))break;
    if(i>=N){
      printf("Sorry, at most %d words can be sorted",N);
      exit(1);
    }
    w[i]=calloc(strlen(word)+1,sizeof(char));//입력받은 문자열을 배열에 할당한다.
    strcpy(w[i],word);
  }
  n=i;
  sort_words(w,n);
  for(i=0;i<n;++i)
    printf("%s\n",w[i]);
  return 0;
}

void swap(char **a, char **b){
	char *tmp = *a;
	*a = *b;
	*b = tmp;
}//문자열 교체 함수

void sort_words(char *w[],int n){
  int i,j;
  for(i=0;i<n;++i)//앞에서 시작해서
    for(j=i+1;j<n;++j)//그 뒤에 있는 문자열들과
      if(strcmp(w[i],w[j])>0)//비교해서
        swap(&w[i],&w[j]);//더 크면 그 문자와 바꾼다.
}
