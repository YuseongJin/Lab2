#include <stdio.h>//헤더파일 stdio.h 선언된 내용을 포함
int main()//main 함수
{
char charType;//char형 변수 charType 선언
int integerType;//int형 변수 integerType 선언
float floatType;//float형 변수 floatType 선언
double doubleType;//double형 변수 doubleType 선언
printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력
printf("Size of char: %ld byte\n",sizeof(charType));//변수 charType의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(integerType));//변수 integerType의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(floatType));//변수 floatType의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType));//변수 doubleType의 크기 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//char형 크기 출력
printf("Size of int: %ld bytes\n",sizeof(int));//int형 크기 출력
printf("Size of float: %ld bytes\n",sizeof(float));//float형 크기 출력
printf("Size of double: %ld bytes\n",sizeof(double));//double형 크기 출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));//char형 포인터 크기 출력
printf("Size of int*: %ld bytes\n",sizeof(int*));//int형 포인터 크기 출력
printf("Size of float*: %ld bytes\n",sizeof(float*));//float형 포인터 크기 출력
printf("Size of double*: %ld bytes\n",sizeof(double*));//double형 포인터 크기 출력
return 0;//반환값 0
}