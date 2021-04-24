extern void heapifyMax(int *,int,int);

void buildHeapMax(int *arr, int size)
{
	int i;
	for(i=size/2-1;i>=0;i--)
	{
		heapifyMax(arr,size,i);
	}
}