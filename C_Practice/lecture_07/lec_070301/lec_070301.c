// Header file for input output functions
#include <stdio.h>
#include "data_type.h"
//#include <stdlib.h>
#include <stdint.h>

int main(void)
{
    u32 s;
    printf("size: %d\n",sizeof(s));
    // unsigned int = 4;
    // unsigned long = 4;

    __int16 sint16;
    int16_t s1;
    printf("sint16 size: %d\n",sizeof(sint16));
    printf("s1 size: %d\n",sizeof(s1));

    //using about size_t
    int My_array[100];
    size_t sizeofarray = sizeof(My_array);
    printf("size of my array %d\n",sizeofarray);


	return 0 ;	
}