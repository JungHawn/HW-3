#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x;// 더블형포인터 x 선언

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));// 주소를 저장하는 x의 사이즈 값 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));// 주소를 저장하는 x의 포인터 사이즈 값 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));// Int값을 저장하고 있는 x의 더블형포인터 사이즈 값 출력
}