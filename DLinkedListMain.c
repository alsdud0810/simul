#include <stdio.h>
#include <Windows.h>
#include "LinkedList.h"
#include "Main.h"

void LinkedListMain(void);

void LinkedListMain(void){
	List1 list;
	int data;
	ListInit1(&list);

	int menu;
	while(1){
        printf("option: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert: ");
            scanf("%d", &data);
            LInsert1(&list, data);
			if(LFirst1(&list, &data)){
				printf("%d ", data);
		
				while(LNext1(&list, &data))
					printf("%d ", data);
			}
        }

        else if(menu==1){
			int num;
            printf("delete: ");
            scanf("%d", &num);
			if(LFirst1(&list, &data)){
				if(data == num)
					LRemove1(&list);
		
				while(LNext1(&list, &data)){
					if(data == num)
						LRemove1(&list);
				}
			}
			if(LFirst1(&list, &data)){
				printf("%d ", data);
		
				while(LNext1(&list, &data))
					printf("%d ", data);
			}		
        }
		
		else if(menu==2) break;
		
		printf("\n\n");
        
            
        
    }
}
