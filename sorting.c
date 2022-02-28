#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

#define BUCKET_NUM		10

//bubble
void BubbleSort(int arr[], int n)
{
	int i, j;
	int temp;

	for(i=0; i<n-1; i++)
	{
		for(j=0; j<(n-i)-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//select
void SelectSort(int arr[], int n)
{
	int i, j;
	int maxIdx;
	int temp;

	for(i=0; i<n-1; i++)
	{
		maxIdx = i;

		for(j=i+1; j<n; j++)
		{
			if(arr[j] < arr[maxIdx])
				maxIdx = j;
		}

		temp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = temp;
	}
}

//insert
void InsertSort(int arr[], int n)
{
	int i, j;
	int insData;

	for(i=1; i<n; i++)
	{
		insData = arr[i];

		for(j=i-1; j>=0 ; j--)
		{
			if(arr[j] > insData) 
				arr[j+1] = arr[j];
			else
				break;
		}

		arr[j+1] = insData;
	}
}

//heap
int PriComp(int n1, int n2)
{
	return n2-n1;
//	return n1-n2;
}

void HeapSort(int arr[], int n, PriorityComp pc)
{
	Heap heap;
	int i;

	HeapInit(&heap, pc);

	for(i=0; i<n; i++)
		HInsert(&heap, arr[i]);

	for(i=0; i<n; i++)
		arr[i] = HDelete(&heap);
}


//merge
void MergeTwoArea(int arr[], int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = mid+1;
	int i;

	int * sortArr = (int*)malloc(sizeof(int)*(right+1));
	int sIdx = left;

	while(fIdx<=mid && rIdx<=right)
	{
		if(arr[fIdx] <= arr[rIdx])
			sortArr[sIdx] = arr[fIdx++];
		else
			sortArr[sIdx] = arr[rIdx++];

		sIdx++;
	}

	if(fIdx > mid)
	{
		for(i=rIdx; i<=right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}
	else
	{
		for(i=fIdx; i<=mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	for(i=left; i<=right; i++)
		arr[i] = sortArr[i];
	
	free(sortArr);
}

void MergeSort(int arr[], int left, int right)
{
	int mid;

	if(left < right)
	{
		
		mid = (left+right) / 2;

		
		MergeSort(arr, left, mid);
		MergeSort(arr, mid+1, right);

		
		MergeTwoArea(arr, left, mid, right);
	}
}

//quick
void Swap(int arr[], int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}	


int Partition(int arr[], int left, int right)
{
	int pivot = arr[left];
	int low = left+1;
	int high = right;

	while(low <= high)    
	{	
		
		while(pivot >= arr[low] && low <= right)
			low++;

		while(pivot <= arr[high] && high >= (left+1))
			high--;

		if(low <= high)    
			Swap(arr, low, high); 
	}

	Swap(arr, left, high);
	return high;
}

void QuickSort(int arr[], int left, int right)
{
	if(left <= right)
	{
		int pivot = Partition(arr, left, right);    
		QuickSort(arr, left, pivot-1);    
		QuickSort(arr, pivot+1, right);    
	}
}

//radix
void RadixSort(int arr[], int num, int maxLen)  
{
	Queue buckets[BUCKET_NUM];
	int bi;
	int pos;
	int di;
	int divfac = 1;
	int radix;

	for(bi=0; bi<BUCKET_NUM; bi++)
		QueueInit(&buckets[bi]);

	for(pos=0; pos<maxLen; pos++)
	{
		for(di=0; di<num; di++)
		{
			radix = (arr[di] / divfac) % 10;

			Enqueue(&buckets[radix], arr[di]);
		}

		for(bi=0, di=0; bi<BUCKET_NUM; bi++)
		{
			while(!QIsEmpty(&buckets[bi]))
				arr[di++] = Dequeue(&buckets[bi]);
		}

		divfac *= 10;
	}	
}