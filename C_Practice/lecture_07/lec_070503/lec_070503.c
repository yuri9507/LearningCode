// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



int main(void)
{
    char b = 10;
    char c = 20;

    char const * p1 = &b; 
    // p1 can be modified but *p1 cant; means you can change address but value cant change;
    p1 = &c;
    // *p1 = 20 x

    char * const p2 = &b;
    // p2 cant be modified but *p2 can, means you can modify the p2 value but , address cant change;
    *p2 = 20;
    // p2 = &c x

    // 但不論是哪一個 都: p1 = &b, p2 = &b 在一開始
    // char * const 以及 char const * 只是代表他們對於const 誰的差異
    // char const * p1 代表 *p1 不可改 -> 值不可改 但地址可以改
    // char * const p2 代表 p2 不可改 -> 地址不可改 但是值可以改



	return 0 ;	
}