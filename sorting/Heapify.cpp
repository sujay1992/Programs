extern void swap(int&,int&);

void heapifyMax(int *arr, int size, int i)
{
	int left=i*2+1;
	if(left>=size) return;
	int right=left+1,max=left;
	if(right<size && arr[right]>arr[max]) max=right;
	if(arr[i]<arr[max])
	{
		/*arr[i]^=arr[max];
		arr[max]^=arr[i];
		arr[i]^=arr[max];*/
		swap(arr[i],arr[max]);
		heapifyMax(arr,size,max);
	}
}