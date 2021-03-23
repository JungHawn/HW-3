#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];// list[5] 배열 선언
    int *plist[5];// plist를 NULL로 초기화

    list[0] = 10;// list[0]에 10 할당
    list[1] = 11;// list[1]에 11 할당

    plist[0] = (int*)malloc(sizeof(int));// malloc으로 Int 사이즈 만큼의 메모리를 heap영역에서 받아 주소 할당

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("list[0] \t = %d\n", list[0]);// list[0]의 값 출력
    printf("address of list \t = %p\n", list);// list의 주소 값 출력
    printf("address of list[0] \t = %p\n", &list[0]);// list[0]의 주소 값 출력
    printf("address of list + 0 \t = %p\n", list+0);// list+0의 주소 값(+1 증가하면 주소가 int size인 4bytes만큼 증가한다)
    printf("address of list + 1 \t = %p\n", list+1);// list+1은 list+0에서 + 4bytes한 주소 값 출력
    printf("address of list + 2 \t = %p\n", list+2);// list+2은 list+0에서 + 8bytes한 주소 값 출력
    printf("address of list + 3 \t = %p\n", list+3);// list+5은 list+0에서 + 12bytes한 주소 값 출력
    printf("address of list + 4 \t = %p\n", list+4);// list+4은 list+0에서 + 16bytes한 주소 값 출력
    printf("address of list[4] \t = %p\n", &list[4]);// list[4]의 주소 값 출력

    free(plist[0]);// 메모리 해제
    
}