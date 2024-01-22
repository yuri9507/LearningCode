// Header file for input output functions
#include <stdio.h>

int main(void)
{
	int a = 0x11223344;
	char b;
	b = a;  
	/*
		this will cause cutoff, due to int 4 byte to char 1 byte.
	*/ 
	if (b == 0x44)
		printf("Little endian! \n");
	else
		printf("Big endian! \n");


	union u{
		int a_union;
		char b_union;
	}c;

	c.a_union = 0x11223344;
	if (c.b_union==0x44)
		printf(" for union: Little endian! \n");
	else
		printf("for union: Big endian!\n");
	
	return 0 ;	
}