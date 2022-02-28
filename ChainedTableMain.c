#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table.h"
#include "Main.h"

int MyHashFunc(int k){
	return k % 10;
}


void tablemain(void){
	Table myTbl;
	Person * np;
	Person * sp;
	Person * rp;

	TBLInit(&myTbl, MyHashFunc);

	int menu, age, num;
	char name[10], add[10];

	while(1){
        printf("option: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert(age, name, add): ");
            scanf("%d %s %s", &age, &name, &add);
			np = MakePersonData(age, name, add);
			TBLInsert(&myTbl, GetSSN(np), np);
            PrintHash(&myTbl);
        }

        else if(menu==1){
			printf("del: ");
            scanf("%d", &num);
            rp = TBLDelete(&myTbl, num);
			if(rp != NULL)
				free(rp);
			PrintHash(&myTbl);
        }
		else if(menu==2){
			printf("find: ");
			scanf("%d", &num);
			sp = TBLSearch(&myTbl, num);
			if (sp != NULL)
				ShowPerInfo(sp);
		}
		else if(menu==3) break;
		
		printf("\n\n");        
    }
}