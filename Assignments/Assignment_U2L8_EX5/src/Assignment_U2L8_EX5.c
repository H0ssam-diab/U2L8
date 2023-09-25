/*
 ============================================================================
 Name        : Assignment_U2L8_EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SEemployee {
	char name[50];
	int ID ;
};

struct SEemployee data1 = {"Alex",1002};
struct SEemployee data2 = {"Rick",1056};



int main(void) {


	struct SEemployee* arr[2] = {&data1,&data2};
	struct SEemployee* (*ptr)[2] = &arr ;

printf("Name : %s \nID : %d",(**(*ptr)).name,(**(*ptr)).ID);
/*printf("Name : %s \nID : %d",**(ptr+1)->name,**(ptr+1)->ID);*/


	return EXIT_SUCCESS;
}
