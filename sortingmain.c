#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "sorting.h"
#include "Main.h"

#define MAX 50000

clock_t start, end;
int data_num;
int list[MAX];
int data[MAX];


void CopyArr(void)
{
    for(int i=0; i<data_num; i++)
        list[i]=data[i];
}


void sortingmain()
{
    printf("The number of data: ");
    scanf("%d", &data_num);
    srand(time(NULL));
    
    
   for (int i=0; i<data_num;i++)
   {
       data[i]=rand();
   }

    //bubble
    CopyArr();
    start=clock();
    BubbleSort(list, data_num);
    end=clock();
    printf("\nbubble sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    //selection
    CopyArr();
    start=clock();
    SelectSort(list, data_num);
    end=clock();
    printf("\nselection sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    //insertion
    CopyArr();
    start=clock();
    InsertSort(list, data_num);
    end=clock();
    printf("\nInsertion sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    //heap
    CopyArr();
    start=clock();
    HeapSort(list, data_num, PriComp);
    end=clock();
    printf("\nheap sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    //merge
    CopyArr();
    start=clock();
    MergeSort(list,0, data_num);
    end=clock();
    printf("\nmerge sort time: %lf\n",(double)(end-start)/CLOCKS_PER_SEC);


    //quick

    CopyArr();
    start=clock();
    QuickSort(list,0, data_num);
    end=clock();
    printf("\nQuick sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);

    //radix
    CopyArr();
    start=clock();
    RadixSort(list, data_num, 5);
    end=clock();
    printf("\nradix sort time: %lf\n", (double)(end-start)/CLOCKS_PER_SEC);
}