// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int sum (int a, int b)
{
    return a+b;
}

int main(void)
{
    typedef struct student{
        char name[20];
        int age;
        float score;
    }student_t, *student_ptr;

    student_t stu = {"wit",20,99};
    student_t *p1 = &stu;
    student_ptr p2 = &stu;

    printf("name : %s\n", p1->name);
    printf("name : %s\n",p2->name);

    typedef int array_t[10];
    array_t array;
    array[9] = 100;
    printf("array[9] = %d\n",array[9]);

    typedef char * PCHAR;
    PCHAR str = "good";
    printf("str: %s\n",str);

    // function typedef
    typedef int (func_t)(int a, int b);
    func_t *fp = sum;  // fp is a function pointer
    printf("%d\n",fp(1,2));


	return 0 ;	
}