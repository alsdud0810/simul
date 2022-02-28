simul_exe : main.o AVLmain.o AVLRebalance.o Binarytree.o BST.o BSTmain.o ChainedTableMain.o DLinkedList.o DLinkedListMain.o LinkedList.o ListBaseQueue.o ListBaseQueueMain.o Person.o PriorityQueue.o PriorityQueueMain.o sorting.o sortingmain.o stack.o stackmain.o Table.o UsefulHeap.o
	gcc -o simul_exe main.o AVLmain.o AVLRebalance.o Binarytree.o BST.o BSTmain.o ChainedTableMain.o DLinkedList.o DLinkedListMain.o LinkedList.o ListBaseQueue.o ListBaseQueueMain.o Person.o PriorityQueue.o PriorityQueueMain.o sorting.o sortingmain.o stack.o stackmain.o Table.o UsefulHeap.o
main.o : main.c
	gcc -c main.c

AVLmain.o : AVLmain.c
	gcc -c AVLmain.c

AVLRebalance.o : AVLRebalance.c
	gcc -c AVLRebalance.c

Binarytree.o : Binarytree.c
	gcc -c Binarytree.c

BST.o : BST.c
	gcc -c BST.c

BSTmain.o : BSTmain.c
	gcc -c BSTmain.c

ChainedTableMain.o : ChainedTableMain.c
	gcc -c ChainedTableMain.c

DLinkedList.o : DLinkedList.c
	gcc -c DLinkedList.c

DLinkedListMain.o : DLinkedListMain.c
	gcc -c DLinkedListMain.c

LinkedList.o : LinkedList.c
	gcc -c LinkedList.c

ListBaseQueue.o : ListBaseQueue.c
	gcc -c ListBaseQueue.c

ListBaseQueueMain.o : ListBaseQueueMain.c
	gcc -c ListBaseQueueMain.c

Person.o : Person.c
	gcc -c Person.c

PriorityQueue.o : PriorityQueue.c
	gcc -c PriorityQueue.c

PriorityQueueMain.o : PriorityQueueMain.c
	gcc -c PriorityQueueMain.c

sorting.o : sorting.c
	gcc -c sorting.c

sortingmain.o : sortingmain.c
	gcc -c sortingmain.c

stack.o : stack.c
	gcc -c stack.c

stackmain.o : stackmain.c
	gcc -c stackmain.c

Table.o : Table.c
	gcc -c Table.c

UsefulHeap.o : UsefulHeap.c
	gcc -c UsefulHeap.c

clean:
	rm *.o simul_exe