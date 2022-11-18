#include<stdio.h>
#include"STD_Types.h"
#include"BIT_Math.h"
void main(void){
	printf("%d\n",sizeof (uint8));
	printf("%d\n",sizeof (uint16));
	printf("%d\n",sizeof (uint32));
	printf("%d\n",sizeof (sint8));
	printf("%d\n",sizeof (sint16));
	printf("%d\n",sizeof (sint32));
	printf("%d\n",sizeof (float32));
	printf("%d\n",sizeof (flaot64));
	printf("%d\n",sizeof (float128));
	
	printf("\n\n\n");
	printf("%d\n",SET_BIT(5 , 2));
	printf("%d\n",CLR_BIT(5 , 2));
	printf("%d\n",GET_BIT(5 , 2));
	printf("%d",TGL_BIT(5 , 2));
	
	
	// printf("%d",);
}