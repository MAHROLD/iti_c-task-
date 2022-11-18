#include <stdio.h>
void swap(int*,int*);
void selectionsort(int*, int);
int main(){
	
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, size);
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
void selectionsort(int *arr, int size){
	int min,i,j;
	for (i=0;i<size-1;i++)
    {
		min=i;
        for (j=i+1;j<size;j++){
          if (arr[j]<arr[min])
		min=j;}
		if(min != i)
            swap(&arr[min], &arr[i]);
    }
}