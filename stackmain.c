#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "Main.h"

void StackMain(void)
{
    int menu, data;
	// Stack 생성 및 초기화
	Stack stack;
	StackInit(&stack);

	// 데이터 삽입
	while(1){
        printf("option: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert: ");
            scanf("%d", &data);
            SPush(&stack, data);
            PPrint1(&stack);
        }

        else if(menu==1){
            SPop(&stack,data);
            PPrint1(&stack);
        }
        else if(menu==2) break;
		
		printf("\n\n");
        
            
        
    }

	// 데이터 꺼내기
	 
}