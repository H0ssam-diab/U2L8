/*
 ============================================================================
 Name        : Assignment_U2L8_Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_size 15


int main(void) {

	int arr[max_size];
	int* ptr = arr;
	int size,i=0  ;
	printf("Enter the size of array (Max=15) :  ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	printf("\nEnter the %d elements of array ",size );
	for(i=0 ; i < size ; i++){

		printf("\nElement #%d :  ",i+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&arr[i]);

	}
	ptr = ptr+size-1;

	for(i=size-1 ; i>=0 ; i--,ptr--){

	printf("\nElement #%d : %d ",i+1,*ptr);


		}







	return 0;
}
