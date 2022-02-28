#include <stdio.h>
#include "Binarytree.h"
#include "BST.h"
#include "Main.h"

void AVLmain(void){
	BTreeNode * avlRoot;

	BSTMakeAndInit(&avlRoot);

	int menu, data;

	while(1){
        printf("\nmenu: ");
        scanf("%d", &menu);

        if (menu==0){
            printf("insert: ");
            scanf("%d", &data);
			AVLBSTInsert(&avlRoot, data);
			printf("root node: %d \n", GetData(avlRoot));
			BSTShowAll(avlRoot); printf("\n");
            
        }

        else if(menu==1){
			printf("del: ");
            scanf("%d", &data);
            BSTRemove(&avlRoot, data);
			printf("root node: %d \n", GetData(avlRoot));
			BSTShowAll(avlRoot); printf("\n");
        }
        else if (menu==2) break;
        printf("\n\n");

        
    }

}