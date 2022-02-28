#include <stdio.h>
#include "PriorityQueue.h"
#include "Main.h"

int DataPriorityComp(char ch1, char ch2)
{
	return ch2-ch1;
}

void PQMain(void)
{
	int menu, data;

	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	while(1){
        printf("\nmenu: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("option: ");
            scanf("%d", &data);
            PEnqueue(&pq, data);
            PPrint(&pq);
            
        }

        else if(menu==1){
            PDequeue(&pq);
            PPrint(&pq);
        }

        
        else if(menu==2) break;
		
		printf("\n\n");

        
    }
}
