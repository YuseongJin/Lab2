#include <stdio.h>//헤더파일 stdio.h 선언된 내용을 포함
int main()//메인함수
{
int i;//int형 i변수 선언
int *ptr;//포인터 변수 ptr 선언
int **dptr;//이중포인터 dptr 선언
i = 1234;//변수i에 1234 대입

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

printf("[checking values before ptr = &i] \n");//ptr = &i 이전
printf("value of i == %d\n", i);//i의 값
printf("address of i == %p\n", &i);//i의 주소
printf("value of ptr == %p\n", ptr);//ptr의 값
printf("address of ptr == %p\n", &ptr);//ptr의 주소 
ptr = &i; /* ptr is now holding the address of i *///포인터 변수 ptr에 i의 주소 저장 
printf("\n[checking values after ptr = &i] \n");//ptr = &i 이후
printf("value of i == %d\n", i);//i의 값
printf("address of i == %p\n", &i);//i의 주소
printf("value of ptr == %p\n", ptr);//ptr의 값
printf("address of ptr == %p\n", &ptr);//ptr의 주소 
printf("value of *ptr == %d\n", *ptr);//*ptr의 값
dptr = &ptr; /* dptr is now holding the address of ptr *///이중포인터 변수dptr에 ptr의 주소 저장
printf("\n[checking values after dptr = &ptr] \n");//dptr = &ptr 이후
printf("value of i == %d\n", i);//i의 값
printf("address of i == %p\n", &i);//i의 주소
printf("value of ptr == %p\n", ptr);//ptr의 값
printf("address of ptr == %p\n", &ptr);//ptr의 주소
printf("value of *ptr == %d\n", *ptr);//*ptr의 값
printf("value of dptr == %p\n", dptr);//dptr의 값
printf("address of ptr == %p\n", &dptr);//dptr의 주소
printf("value of *dptr == %p\n", *dptr);//*dptr의 값
printf("value of **dptr == %d\n", **dptr);//**dptr 의 값
*ptr = 7777; /* changing the value of *ptr *///ptr 포인터가 가리키고 있는 값에 7777 대입
printf("\n[after *ptr = 7777] \n");//*ptr = 7777 이후
printf("value of i == %d\n", i);//i의 값
printf("value of *ptr == %d\n", *ptr);//*ptr의 값
printf("value of **dptr == %d\n", **dptr);//**dptr의 값
**dptr = 8888; /* changing the value of **dptr *///dptr 포인터가 가리키고 있는 값에 7777 대입
printf("\n[after **dptr = 8888] \n");//**dptr = 8888 이후
printf("value of i == %d\n", i);//i의 값
printf("value of *ptr == %d\n", *ptr);//*ptr의 값
printf("value of **dptr == %d\n", **dptr);//**dptr의 값
return 0;//반환값 0
}