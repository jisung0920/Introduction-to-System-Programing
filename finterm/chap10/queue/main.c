#include "queue.h"

int main(void){
  int c;
  int cnt_a = 0;
  int cnt_b = 0;
  data pid;
  queue a,b;

  init(&a);
  init(&b);

  while((c=getchar())!=EOF){
    switch(c){
      case 'A':
        assert(scanf("%u",&pid)==1);
        if(!full(&a))
          enqueue(pid,&a);
        break;
      case 'B':
      assert(scanf("%u",&pid)==1);
      if(!full(&b))
        enqueue(pid,&b);
      break;
    }
  }

  printf("\nschedule:\n");
  while(!empty(&a)){
    pid = dequeue(&a);
    printf("Job :%u is %d\n",pid,++cnt_a );
  }
  while(!empty(&b)){
    pid = dequeue(&b);
    printf("Job :%u is %d\n",pid,++cnt_b );
  }
  return 0;
}
