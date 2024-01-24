// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   union u {
        char sex;   // 1
        double num; // 8 
        int age;    // 4
        char a[11]; // 1 
   };

   union u stu;
    printf("&stu.sex = %p\n", &stu.sex);
    printf("&stu.num = %p\n", &stu.num);
    printf("&stu.age = %p\n", &stu.age);
    printf("&stu.a : = %p\n", stu.a); // 24 <- 8*3 > 16+1
    printf("stu size: %d\n",sizeof(union u)); // 8*2 > 8+1 

    /*
    struct student{
        char sex;
        short num;__attribute__((aligned(4),packed));
        double age;
    };
    */
    
    struct student{
        char sex;   // 1 
        short num;__attribute__((aligned(4),packed)); // 2
        double age; // 8
    }__attribute__((aligned(8),packed)); // 1+2+8 = 11 -> 8*2 = 16 > 11;
    

    printf("structure size = %d\n", sizeof(struct student));

    /*
    現在來計算結構體的大小：

    char 佔1位元組
    short 佔2位元組 (但因為使用了 packed，所以不考慮對齊)
    double 通常佔8位元組 (根據標準的對齊方式)
    加總起來為 1 + 2 + 8 = 11 位元組。但是由於 aligned(8) 的存在，結構體的對齊方式被設置為8位元組，因此總大小必須是8的倍數。所以，為了滿足對齊要求，結構體的大小被填充到16位元組。

    */
	return 0 ;	
}