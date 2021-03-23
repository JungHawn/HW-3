#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];// list[5] 배열 선언
    int *plist[5] =  {NULL,};// plist를 NULL로 초기화

    plist[0] = (int*)malloc(sizeof(int));// malloc으로 Int 사이즈 만큼의 메모리를 heap영역에서 받아 주소 할당

    list[0] = 1;// list[0]에 1을 할당
    list[1] = 100;// list[1]에 100을 할당

    *plist[0] = 200;// plist[0]이 가리키는 곳에 200 할당

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("value of list[0] = %d\n", list[0]);// list[0] 값 출력
    printf("address of list[0] = %p\n", &list[0]);// list[0]의 주소 출력
    printf("value of list = %p\n", list);// list 값 출력
    printf("address of list (&list)= %p\n", &list);// list의 주소 값 출력

    printf("--------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);// list[1] 값 출력
    printf("address of list[1] = %p\n", &list[1]);// list[1] 주소 출력
    printf("value of *(list+1) = %d\n", *(list+1));// list+1 에 대한 값 출력
    printf("address of list+1 = %p\n", list+1);// list+1 주소값 출력 (list[0]주소 +1(4byte) 주소 값)

    printf("--------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);// plist[0] 값 출력
    printf("&plist[0] = %p\n", &plist[0]);// plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); // plist의 주소 출력
    printf("plist = %p\n", plist);  // plist의 주소값 출력
    printf("plist[0] = %p\n", plist[0]);  // plist[0] 값 출력
    printf("plist[1] = %p\n", plist[1]);  // 첫 번째 list[0]의 값만 할당되어있고 나머지는 NULL임
    printf("plist[2] = %p\n", plist[2]);  // 첫 번째 list[0]의 값만 할당되어있고 나머지는 NULL임
    printf("plist[3] = %p\n", plist[3]);  // 첫 번째 list[0]의 값만 할당되어있고 나머지는 NULL임
    printf("plist[4] = %p\n", plist[4]);  // 첫 번째 list[0]의 값만 할당되어있고 나머지는 NULL임

    free(plist[0]);// 메모리 해제
    
}