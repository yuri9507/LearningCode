// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // structure with structure
    struct student{
        char sex; // 1
        double num;  // 8
    };
    struct person{
        char age; // 1
        struct student stu; // 16 (8*2)
    };

    struct person her;
    printf("&her.age = %p\n", &her.age);
    printf("&her.stu.sex = %p\n", &her.stu.sex);
    printf("&her.stu.num = %p\n", &her.stu.num);
    printf("person size: = %d\n", sizeof(struct person)); // 24 <- 8*3 > 16+1
    printf("stu size: %d\n",sizeof(her.stu)); // 8*2 > 8+1 

    

	return 0 ;	
}