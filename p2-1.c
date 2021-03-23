#include <stdio.h>

#define MAX_SIZE 100// 최대 사이즈 100으로 정의

float sum(float list [], int);// float형 sum(float list [], int) 선언
float input[MAX_SIZE], answer;// float형 input[MAX_SIZE], answer 선언
int i;// int형 변수 i 선언
void main(void)
{
    printf("[----- [youjunghawn] [2018038096] -----]\n");
    
    for(i=0; i<MAX_SIZE; i++)  
        input[i] =i;
    
  // for chacking call by reference
    printf("address of input = %p\n", input);// input 주소값 출력

    answer = sum(input, MAX_SIZE);
    printf("The sum is : %f\n", answer);  // answer 값 출력
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); // list의 값 출력, sum이 call 되었을때 이므로 input의 주소값이 들어있음
    printf("address of list = %p\n\n", &list); // list 주소값 출력

    int i;// int형 변수 i 선언
    float tempsum = 0;// float형 변수 tempsum을 0 대입
    for(i=0; i<n; i++)
        tempsum += list[i];
    
    return tempsum;
}