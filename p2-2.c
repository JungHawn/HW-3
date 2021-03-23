#include <stdio.h>

void print1 (int *ptr,int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // one[] 배열 선언

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("one = %p\n", one); // 배열 이름은 주소이므로 one 배열의 주소값 출력
    printf("&one = %p\n", &one); // one 배열의 주소값 출력
    printf("&one[0] = %p\n", &one[0]); // one[0] 주소값 출력
    printf("\n");

    print1(&one[0], 5);

    return 0;
}

void print1 (int *ptr, int rows)
{
    int i;// int형 i 선언
    printf("Address \t Contents\n");
    for(i=0; i<rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // one배열의 값 출력, int형 배열이므로 4byte씩 증가한다.
    printf("\n");
}