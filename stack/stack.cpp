#include<stdlib.h>
#include<iostream>

using namespace std;


int size = 10;


struct stack{
  int items[MAX];
  int top;
}


typedf struct stack st;


void create_stack(st *s){
  s->top = -1;
}


int isfull(st *s){
  if(s->top == MAX -1)
    return 1;
  else
    return 0;
}

int isempty(st *s){
  if (s->top == -1)
    return 1;
  else
    return 0;
}


void push(st *s, int newitem){
  if(isfull(s)){
    return "FULL !!"
  }
  else{
    s->top++;
    s->items[s->top]=newitem;
  }
  size++;
}

void pop(st *s){
  if(isempty(s)){
    return "EMPTY !!";
  }
  else{
    printf("item popped : %d\n",s->items[s->top]);
    s->top--;
  }
  size--;
}


void display(st *s){
  printf("stack: ");
  for(int i=0; i<size; i++){
      printf(" ",s->items[i]);
  }
  printf("\n");
}



int main(){
  int ch;
  st *s = (st *)malloc(sizeof(str));
  create_stack(s);
  push(s,1);
  push(s,2);
  push(s,3);
  push(s,4);
  display(s);
  pop(s);
  display(s);
}
