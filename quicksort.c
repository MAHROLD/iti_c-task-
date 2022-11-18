#include <stdio.h>
void swap(int*,int*);
void quicksort(int*,int,int);
int partition(int *, int, int);
int main(){
	
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int size = sizeof(arr)/sizeof(arr[0]);
   quicksort(arr,0,size-1);
    printf("Sorted array: \n");
    for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
    return 0;
	
	
	
	return 0;
}
void swap(int *x,int *y){
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start- 1);
    for (int j = start; j <= end-1;j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

void quicksort(int arr[], int start, int end)
{
    if (start < end) {
        int pi = partition(arr, start, end);
        quicksort(arr, start, pi - 1);
        quicksort(arr, pi + 1, end);
    }
}