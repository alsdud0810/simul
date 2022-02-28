#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
#include "Main.h"

void BSTmain(void)
{
	BTreeNode * bstRoot;
	BTreeNode * sNode;

	BSTMakeAndInit(&bstRoot);

	int menu, data;

	while(1){
        printf("\nmenu: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert: ");
            scanf("%d", &data);
            BSTInsert(&bstRoot, data);
			BSTShowAll(bstRoot); printf("\n");
            
        }

        else if(menu==1){
			printf("del: ");
            scanf("%d", &data);
            sNode = BSTRemove(&bstRoot, data);
			free(sNode);
			BSTShowAll(bstRoot); printf("\n");
        }
        else if (menu==2) break;
        printf("\n\n");

        
    }

}