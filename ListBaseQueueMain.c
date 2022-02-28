#include <stdio.h>
#include "ListBaseQueue.h"
#include "Main.h"

void QueueMain(void)
{
	int menu, data;
	
	Queue q;
	QueueInit(&q);

	while(1){
        printf("option: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert: ");
            scanf("%d", &data);
            Enqueue(&q, data);
            PPrint2(&q);
        }

        else if(menu==1){
            Dequeue(&q);
            PPrint2(&q);
        }
        else if(menu==2) break;
		
		printf("\n\n");
        
            
        
    }

}