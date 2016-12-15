#include <stdio.h>
int main(void){
  int p,c=1;
  int a[2][3];
  for(int i=0;i<2;i++)
    for(int j=0;j<3;j++){
      a[i][j]=c++;
      printf("a[%d][%d] = %d \n",i,j,c );
    }

  //p=*(*(a+1)+1);
  printf("%d is values and %p is reference\n",a[0][0],a[0] );
  printf("%d is values and %p is reference\n",*(a+1)[1],*(a+1)[1]);
  return 0;
}
