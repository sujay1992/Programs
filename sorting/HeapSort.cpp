#include<stdio.h>

extern void heapifyMax(int *,int,int);
extern void buildHeapMax(int *,int);
extern void swap(int&,int&);
void heapSort(int *arr, int size)
{
	buildHeapMax(arr,size);
	for(size--;size>0;size--)
	{
		swap(arr[0],arr[size]);
		heapifyMax(arr,size,0);
	}
}

void disp(int *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={4,1,3,9,7};
	heapSort(arr,5);
	disp(arr,5);
	return 0;
}