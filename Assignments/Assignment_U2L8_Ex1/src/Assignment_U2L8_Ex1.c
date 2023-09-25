/*
 ============================================================================
 Name        : Assignment_U2L8_Ex1.c
 Author      : Hossam Diab
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m = 29;
	int* ab = &m;

	printf("Address of m :  0x%p\n\rValue of m :  %d",&m,m);


printf("\nNow ab is assigned with the address of m.");

printf("\nAddress of pointer ab :  0x%p\n\rContent of pointer ab :  %d",ab,*ab);

	 m= 34;

	printf("\nThe value of m assigned to 34 now. ");
	printf("\nAddress of pointer ab :  0x%p\n\rContent of pointer ab :  %d",ab,*ab);

	*ab = 7;
	printf("\nThe pointer variable ab is assigned with the value 7 now. ");
	printf("\nAddress of m :  0x%p\n\rValue of m :  %d",&m,m);




	return 0;
}
