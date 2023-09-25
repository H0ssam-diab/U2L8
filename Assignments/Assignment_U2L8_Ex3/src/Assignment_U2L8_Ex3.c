/*
 ============================================================================
 Name        : Assignment_U2L8_Ex3.c
 Author      : Hossam Diab

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char arr[50];

	printf("Enter the string :  ");
	fflush(stdout);fflush(stdin);
	gets(arr);

	int length = strlen(arr);
	int i;
	char* ptr = &arr[length-1];
	printf("\nThe reverse of the string :  ");
	for(i=0 ; i<length ; i++, ptr--){
		printf("%c",*ptr);
	}











	return EXIT_SUCCESS;
}
