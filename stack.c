#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void StackInit(Stack * pstack)
{
   pstack->head = NULL;
}

int SIsEmpty(Stack * pstack)
{
   if(pstack->head == NULL)
      return TRUE;
   else
      return FALSE;
}

void SPush(Stack * pstack, Data data)
{
   Node * newNode = (Node*)malloc(sizeof(Node));

   newNode->data = data;
   newNode->next = pstack->head;

   pstack->head = newNode;
}

Data SPop(Stack * pstack, Data data)
{
   Data rdata;
   Node * rnode;

   if(SIsEmpty(pstack)) {
      printf("Stack Memory Error!");
      exit(-1);
   }

   rdata = pstack->head->data;
   rnode = pstack->head; //tmp

   pstack->head = pstack->head->next;
   free(rnode);

   return rdata;
}

Data SPeek(Stack * pstack)
{
   if(SIsEmpty(pstack)) {
      printf("Stack Memory Error!");
      exit(-1);
   }

   return pstack->head->data;
}

void PPrint1(Stack * pstack){
    if (!SIsEmpty(pstack)){
        Node* temp = pstack->head;

      while(temp){
         printf("%d ", temp->data);
         temp = temp->next;
      }
      printf("\n");
   }
}

/*
void PPrint(Stack * pstack){
    if (SIsEmpty(pstack)){
      printf("stack empty.");
   }
   else{
        for (int i=0; i<= pstack->head; i++){
         printf("%d ", pstack->data[i]);
      }
    }
    printf("\n");
}*/
