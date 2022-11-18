#include <stdio.h>
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int main(){
	
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    printf("Sorted array: \n");
    for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
    return 0;

}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int Lsize = m - l + 1;
    int Rsize = r - m;
    int L[Lsize], R[Rsize];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < Lsize; i++)
        L[i] = arr[l + i];
    for (j = 0; j < Rsize; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < Lsize && j < Rsize) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < Lsize) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < Rsize) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
