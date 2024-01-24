// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a = 1;
    short b = 2;
    int c = 3;
    printf("&a = %p , the sizeof a is %d\n", &a, sizeof(a));
    printf("&b = %p, the sizeof b is %d\n", &b, sizeof(b));
    printf("&c = %p, the sizeof c is %d\n", &c, sizeof(c));

    struct student{
        char sex;
        int num;
        short age;
    };
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof short = %d\n", sizeof(short));

    struct student stu;
    printf("&stu.sex = %p\n", &stu.sex);
    printf("&stu.num = %p\n", &stu.num);
    printf("&stu.age = %p\n", &stu.age);
    printf("struct size: %d\n", sizeof(struct student)); // 12
    /*
    sizeof sex is 1
    sizeof age is 2
    sizeof num is 4
    sex : 0
    age : 2
    num : 4
    so total only need 8 byte.
    */

    struct student_diff{
        char sex;
        short age;
        int num;
    };
    
    struct student_diff stu_a;
    printf("&student_diff.sex = %p\n", &stu_a.sex);
    printf("&student_diff.age = %p\n", &stu_a.age);
    printf("&student_diff.num = %p\n", &stu_a.num);
    printf("struct size: %d\n", sizeof(struct student_diff)); // 8 
    /*
    sizeof sex is 1
    sizeof age is 2
    sizeof num is 4
    sex : 0
    age : 2
    num : 4
    so total only need 8 byte.
    */


	return 0 ;	
}