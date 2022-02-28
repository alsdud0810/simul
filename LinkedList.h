#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#define TRUE	1
#define FALSE	0

typedef int LData1;

typedef struct _node1
{
	LData1 data;
	struct _node1 * next;
} Node1;

typedef struct _linkedList1
{
	Node1 * head;	// 더미 노드를 가리키는 멤버
	Node1 * cur;		// 참조 및 삭제를 돕는 멤버
	Node1 * before; 	// 삭제를 돕는 멤버
	int numOfData;	// 저장된 데이터의 수를 기록하기 위한 멤버 (선언과 동시에 1이 되면 안됨.)
	int (*comp)(LData1 d1, LData1 d2);	//정렬의 기준을 등록하기 위한 멤버 (설치를 위한 함수 포인터 변수)
} LinkedList1;


typedef LinkedList1 List1;

void ListInit1(List1 * plist);
void LInsert1(List1 * plist, LData1 data);

int LFirst1(List1 * plist, LData1 * pdata);
int LNext1(List1 * plist, LData1 * pdata);

LData1 LRemove1(List1 * plist);
int LCount1(List1 * plist);

void SetSortRule1(List1 * plist, int (*comp)(LData1 d1, LData1 d2));

#endif