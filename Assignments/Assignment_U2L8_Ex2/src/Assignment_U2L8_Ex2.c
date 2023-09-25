/*
 ============================================================================
 Name        : Assignment_U2L8_Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char ch = 'A';
	char* ptr = &ch;
	int i ;
	for(i=0 ; i< 26;i++,(*ptr)++){
		printf("\t%c",*ptr);
	}

	return EXIT_SUCCESS;
}
