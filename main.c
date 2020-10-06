#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QMAX 100

struct queue {
  int qu[QMAX];
  int rear, frnt;
};

void init(struct queue *q) {
  q->frnt = 1;
  q->rear = 0;
}

void insert(struct queue *q, int x) {
  if(q->rear < QMAX-1) {
    q->rear++;
    q->qu[q->rear]=x;
  }
  else
    printf("Queue cannot be over 100\n");
}

int isempty(struct queue *q) {
  if(q->rear < q->frnt)
        return 1;
  else
        return 0;
}

void print(struct queue *q) {
  int h;
  if(isempty(q)==1) {
    printf("Queue is empty\n");
    return;
  }
  for(h = q->frnt; h<= q->rear; h++)
    printf("%d  ",q->qu[h]);
}

int removex(struct queue *q) {
  int x, h;
  if(isempty(q)==1) {
    printf("Queue is empty\n");
    return 0;
  }
  x = q->qu[q->frnt];
  for(h = q->frnt; h < q->rear; h++) {
    q->qu[h] = q->qu[h+1];
  }
  q->rear--;
  return x;
}

int ent(void){
    int n;
    printf("\nIf you want to add values, type 1\nIf you want to delete value, type 2\nIf you want to see all values, type 3\n");
    scanf("%d",&n);
    return n;
}

void select(int n,struct queue *q){
    if(n==1){
        system("cls");
        int x;
        printf("Add value: ");
        scanf("%d",&x);
        insert(q,x);
        system("cls");
        select(ent(),q);
    }
    else if(n==2){
        system("cls");
        removex(q);
        select(ent(),q);
    }
    else if(n==3){
        system("cls");
        print(q);
        getchar();
        select(ent(),q);
    }
    else{
        system("cls");
        printf("Wrong value\n");
        getchar();
        select(ent(),q);
    }
}

int main(void){
    struct queue q;
    init(&q);
    select(ent(),&q);
    return 0;
}
