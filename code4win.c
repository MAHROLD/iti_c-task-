#include<stdio.h>

int main(){



// int i,j,arr[2][3];
// for(i= 0;i<2;i++)
    // {
        // for(j=0;j<3;j++)
        // {
            // scanf("%d",(*(arr+i)+j));
        // }
    // }
	// for(i = 0; i < 2; i++)
    // {
        // for(j=0;j<3;j++)
        // {
            // printf("%d",*(*(arr+i)+j));
        // }
		// printf("\n");
    // }




//C program to search element in array using pointers

// int size,i,elem,found=0;
// printf("enter the elem to search\n");
// scanf("%d",&elem);
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// int *ptr=arr;
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }

// for(i=0;i<size;i++,ptr++){
	// if(*ptr==elem){
		// found=1;
	
	// }
// }
// if(found==1){
// printf("%d exists",elem);
// }else{
// printf("%d doesnt exists",elem);
// }







//C program to reverse an array using pointers
// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// int *ptr=arr;
// int *ptr2=&arr[size-1];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(;ptr<ptr2;ptr++,ptr2--){
	// *ptr^=*ptr2;
    // *ptr2^=*ptr;
    // *ptr^=*ptr2;
// }
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[i]);
// }






//C program to swap two arrays using pointers

// int i;
// int arr[5]={1,2,3,4,5},arr2[5]={6,7,8,9,0};
// int *ptr=arr,*ptr2=arr2,temp;
// for(i=0;i<5;i++,ptr++,ptr2++){
	// temp=*ptr;
	// *ptr=*ptr2;
	// *ptr2=temp;
// }
// ptr=arr;
// ptr2=arr2;
// for(i=0;i<5;i++,ptr++){
	// printf(" array 1 elment num %d: %d\n",i,*ptr);
// }
// printf("\n");
// for(i=0;i<5;i++,ptr2++){
	// printf(" array 2 elment num %d: %d\n",i,*ptr2);
// }







// int i;
// int arr[5],arr2[5];
// int *ptr=arr,*ptr2=arr2;
// for(i=0;i<5;i++,ptr++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",ptr);
	
// }
// ptr=arr;
// for(i=0;i<5;i++,ptr++,ptr2++){
	// *ptr2=*ptr;
// }
// ptr=arr;
// ptr2=arr2;
// for(i=0;i<5;i++,ptr++){
	// printf(" array 1 elment num %d: %d\n",i,*ptr);
// }
// printf("\n");
// for(i=0;i<5;i++,ptr2++){
	// printf(" array 2 elment num %d: %d\n",i,*ptr2);
// }







// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// int *ptr=arr;
// for(i=0;i<size;i++,ptr++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",ptr);
	
// }

// for(i=0;i<size;i++,ptr++){
	// printf("elment num %d: %d\n",i,*ptr);
// }





// int num1=2,num2=3;
// int *ptr=&num1,*ptr2=&num2;
// *ptr=*ptr^*ptr2;
// *ptr2=*ptr^*ptr2;
// *ptr=*ptr^*ptr2;

// printf("after swap num1= %d   num2= %d",num1,num2);






///C program to add two numbers using pointers

// int *ptr=&num1,*ptr2=&num2;
// sum=*ptr+*ptr2;
// printf("sum = %d",sum);


// char c = 'c';
// int integer = 1;
// float flaot = 10.4;
// long long biginteger = 999999999;
// printf("char = %c,add = %u\n", c, &c);
// printf("integer = %d,add = %u\n", integer, &integer);
// printf("float = %f,add = %u\n",flaot, &flaot);
// printf("long num = %lld, add = %u", biginteger, &biginteger);






//C program to sort array in ascending or descending order

// int size,i,j,temp;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }

// for(i=0;i<size;i++)
    // {
        // for(j=i+1;j<size;j++)
        // {
            // if(arr[i]>arr[j])
            // {
                // temp=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
            // }
        // }
    // }
   // for(i=0;i<size;i++)
    // {
        // printf("%d, ", arr[i]);
    // }














//C program to search element in an array

// int size,i,search,seindex;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// printf("enter the element to be searched\n");
// scanf("%d",&search);
// for(i=0;i<size;i++){
	// if(search=arr[i]){seindex=i;}
// }
// printf("the serach num was found at pos : %d",seindex);





//C program to put even and odd elements of array in two separate array


// int i;

// int arr[5]={0},even[5]={0},odd[5]={5};
// for(i=0;i<5;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<5;i++){
	// if((arr[i]%2)==0){
		// even[i]=arr[i];
	// }else{odd[i]=arr[i];}
// }
// printf("even array");
// for(i=0;i<5;i++){
	// if(even[i]!=0){
	// printf("%d, ",even[i]);
	// }
// }
// printf("\nodd array");
// for(i=0;i<5;i++){
	// if(odd[i]!=0){
	// printf("%d, ",odd[i]);

// }}






//C program to find reverse of array

// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[size-i-1]);
// }






// int i;
// int arr[4]={1,2,3,4};
// int arr2[4]={5,6,7,8};
// int arr3[8]={0};
// for(i=0;i<8;i++){
	// if(i<4){
		// arr3[i]=arr[i];
	// }
	// else{arr3[i]=arr2[i-4];
	// }
// }
// for(i=0;i<8;i++){
	// printf("%d,",arr3[i]);
// }










//Q14


// int size,i,dup=0,j,x;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];

// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }

// for(i=0;i<size;i++){
	// for(j=i+1;j<size;j++){
		// if(arr[j]==arr[i]){
			 // for(x=j;x<size-1;x++)
                // {
                    // arr[x]=arr[x+1];
                // }
                // size--;
				// j--;
		// }
	// }
// }
// for(i=0; i<size; i++)
    // {
        // printf("%d, ", arr[i]);
    // }



















//q13

//C program count total duplicate elements in array
// int size,i,dup=0,j;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];

// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }

// for(i=0;i<size;i++){
	// for(j=i+1;j<size;j++){
		// if(arr[j]==arr[i]){
			// dup++;
			// break;
		// }
	// }
// }
// printf("the duplicate count = %d",dup);














//q12

// int size,i,j;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// int freq[size];

// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	
	// scanf("%d",&arr[i]);
	
	
// }
// for(i=0;i<size;i++){
	// freq[i]=0;
	
	
// }

// for(i=0;i<size;i++){
	// freq[arr[i]-1]++;
// }


// for(i=0;i<size;i++){
	// if(freq[i]==1){
		// printf("%d, ",arr[i]);
	// }
// }













//q11


//C program to count frequency of each element in an array
// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// int freq[size];

// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	
	// scanf("%d",&arr[i]);
	
	
// }
// for(i=0;i<size;i++){
	// freq[i]=0;
	
	
// }

// for(i=0;i<size;i++){
	// freq[arr[i]]++;
// }


// for(i=0;i<size;i++){
	// printf("freq of elment num %d = %d\n",i,freq[i]);
// }










//q10

//C program to delete element from an array
// int size,i,newelm,pos;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size],arr2[size];
// printf("enter pos ofnum to be deleted\n");
// scanf("%d",&pos);
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=pos-1;i<size;i++){
	// arr[i]=arr[i+1];
	
// }
// size--;

// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[i]);
// }













//q9

//C program to insert an element in array
// int size,i,newelm,pos;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size],arr2[size];
// printf("enter num to be inserted and the pos\n");
// scanf("%d%d",&newelm,&pos);
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// pos-=1;
// arr[pos]=newelm;
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[i]);
// }


















//q8


//C program to copy all elements of one array to another
// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size],arr2[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
	// arr2[i]=arr[i];
// }
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[i]);
// }
// printf("array 2\n");
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr2[i]);
// }








//q7

//C program to count negative elements in array
// int size,i,negc=0;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
	// if(arr[i]<0){
	// negc++;
// }
// }
// printf("negative count = %d  ",negc);













//q6


//C program to count even and odd elements in array
// int size,i,evenc=0,oddc=0;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];

// for(i=0;i<size;i++){
	
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
// if(arr[i]%2==0){
	// evenc++;
// }
// else{oddc++;}
// }

// printf("oddcount = %d\neven count = %d",oddc,evenc);







//q5



// int size,i,sum=0;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];

// for(i=0;i<size;i++){
	
	// scanf("%d",&arr[i]);
	
// }
// int max=arr[0],secmax=arr[0];
// for(i=0;i<size;i++){
// if(max<arr[i]){
	// max=arr[i];
// }

// }
// for(i=0;i<size;i++){
	// if(secmax<arr[i]&& max> arr[i]){
	// secmax = arr[i];
// }
// }

// printf("second max = %d",secmax);








//q4


//C program to find maximum and minimum element in array
// int size,i,sum=0;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];

// for(i=0;i<size;i++){
	
	// scanf("%d",&arr[i]);
	
// }
// int max=arr[0],min=arr[0];
// for(i=0;i<size;i++){
// if(max<arr[i]){
	// max=arr[i];
// }
// if(min>arr[i]){
	// min = arr[i];
// }
// }

// printf("min = %d\nmax = %d",min,max);






//q3


//C program to find sum of array elements
// int size,i,sum=0;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
// sum+=arr[i];
// }
// printf("sum of array = %d",sum);





//q2


//C program to print all negative elements in array
// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
	// if(arr[i]<0){
	// printf("negative numbers are: %d  ",arr[i]);
// }
// }







//q1

// int size,i;
// printf("enter the size of array\n");
// scanf("%d",&size);
// int arr[size];
// for(i=0;i<size;i++){
	// printf("enter elment num %d: ",i);
	// scanf("%d",&arr[i]);
	
// }
// for(i=0;i<size;i++){
	// printf("elment num %d: %d\n",i,arr[i]);
// }

return 0; 
}
