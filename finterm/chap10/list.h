#include <stdio.h>
#include <stdlib.h>

typedef char DATA;
typedef struct linked_list{
  DATA d;
  struct linked_list *next;
}ELEMENT;
typedef ELEMENT* LINK;
void print_list(LINK head);
LINK string_to_list(char s[]);
LINK s_to_l(char s[]);
int count(LINK head);
