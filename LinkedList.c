#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void ListInit1(List1 * plist)
{
	plist->head = (Node1*)malloc(sizeof(Node1)); // 더미 노드의 생성
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

void FInsert1(List1 * plist, LData1 data)
{
	Node1 * newNode = (Node1*)malloc(sizeof(Node1));	// 새 노드 생성
	newNode->data = data;							// 새 노드에 데이터 저장

	newNode->next = plist->head->next;				// 새 노드가 다른 노드를 가리키게 함
	plist->head->next = newNode;					// 더미 노드가 새 노드를 가리키게 함

	(plist->numOfData)++;							// 저장된 노드의 수를 하나 증가시킴
}

void SInsert1(List1 * plist, LData1 data)
{
	Node1 * newNode = (Node1*)malloc(sizeof(Node1));
	Node1 * pred = plist->head;
	newNode->data = data;

	while(pred->next != NULL &&
		plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numOfData)++;
}


void LInsert1(List1 * plist, LData1 data)
{
	if(plist->comp == NULL)		// 정렬 기준이 마련되지 않았다면,
		FInsert1(plist, data);	// 머리에 노드를 추가
	else						// 정렬 기준이 마련되었다면,
		SInsert1(plist, data);	// 정렬 기준에 근거하여 노드를 추가
}

int LFirst1(List1 * plist, LData1 * pdata)
{
	if(plist->head->next == NULL)
		return FALSE;

	plist->before = plist->head;
	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext1(List1 * plist, LData1 * pdata)
{
	if(plist->cur->next == NULL)
		return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

LData1 LRemove1(List1 * plist)
{
	Node1 * rpos = plist->cur;
	LData1 rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount1(List1 * plist)
{
	return plist->numOfData;
}

void SetSortRule1(List1 * plist, int (*comp)(LData1 d1, LData1 d2))
{
	plist->comp = comp;
}