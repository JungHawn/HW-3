#include <stdio.h>

struct student{
    char lastName[13];  /* 13 bytes */   
    int studentId;      /* 4 bytes */
    short grade;        /* 2 bytes */
};// typedef 생략하고 student1 구조체 선언

int main()
{
    struct student pst;// typedef가 없으므로 student1 앞에 struct를 써서 구조체라고 명시해야함, pst 값 구조체에 대입

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 사이즈 값 출력 padding이 발생해 ((13+3)16+4+(2+2)4=24bytes) 출력
    printf("size of int = %ld\n", sizeof(int));// int studentId의 사이즈 값 출력
    printf("size of short = %ld\n", sizeof(short)); // short grade의 사이즈 값 출력

    return 0;
}