#include "Heap.h"
#include "ListBaseQueue.h"

void BubbleSort(int arr[], int n);
void SelectSort(int arr[], int n);
void InsertSort(int arr[], int n);
void HeapSort(int arr[], int n, PriorityComp pc);
int PriComp(int n1, int n2);

void MergeSort(int arr[], int left, int right);
void QuickSort(int arr[], int left, int right);
void RadixSort(int arr[], int num, int maxLen);
