#include <stdio.h>
void insertionsort(int*, int);
int main(){
	
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, size);
    printf("Sorted array: \n");
    for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
    return 0;

}

void insertionsort(int *arr, int size){
	int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}