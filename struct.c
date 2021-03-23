#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};// typedef 생략하고 student1 구조체 선언

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;// typedef 사용하고 student2 구조체 선언

int main()
{
    printf("[----- [youjunghawn] [2018038096] -----]\n");

    struct student1 st1 = {'A', 100, 'A'};// typedef가 없으므로 student1 앞에 struct를 써서 구조체라고 명시해야함, st1 값 구조체에 대입

    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName의 값 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId의 값 출력
    printf("st1.grade = %c\n", st1.grade); // st1.grade의 값 출력

    student2 st2 = {'B', 200, 'B'}; // typedef가 있으므로 struct라는 키워드 생략가능, st2 값 구조체에 대입 

    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName의 값 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2.studentId의 값 출력
    printf("st2.grade = %c\n", st2.grade); // st2.grade의 값 출력

    student2 st3; // student2에 st3 선언

    st3 = st2; // st2 값 st3에 대입, 구조 치환 

    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName의 값 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3.studentId의 값 출력 
    printf("st3.grade = %c\n", st3.grade); // st3.grade의 값 출력 

    // /*equality test*/
    // if(st3 == st2)
    //     printf("equal\n");
    // else
    //     printf("not equal\n");
        
    return 0;
}