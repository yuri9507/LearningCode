// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	signed int a = -1;
    int b = 0xffffffff;
    // %d is for signed number
    // %u is for unsigned number
    printf("a= %d \n",a); // -1
    printf("a= %u \n",a); // 4294....
    printf("b= %d \n",b); // -1
    printf("b= %u \n",b); // 4294..
    
    // Type casing 
    // int <-->float
    int a_number = (int)3.14;
    printf("a_number = %d\n", a_number);
    float b_number = (float)3;
    printf("b_number= %f\n", b_number);
    printf("\n");

    // char --> int
    char c1 = 1;
    char c2 = -2;
    int d;
    d = (int)c1;
    printf("d = %d\n", d);  // 1
    printf("d = %x\n", d);  // 1 
    d = (int)c2;
    printf("d = %d\n", d);  // -2
    printf("d = %x\n", d);  // fffffffe
    printf("\n");

    d = 0x11223344;
    c1 = (char)d;
    printf("c1 = %x\n", c1);
    printf("c1 = %u\n", c1);
	return 0 ;	
}