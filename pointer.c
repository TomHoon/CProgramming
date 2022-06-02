#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS 
//int 크기만큼의 배열 포인터에 대한 이해

int main(void) {
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;
	printf("ptr의 포인터 시작은 : %p\n", ptr);
	
	printf("ptr[0]의 값은 : %d\n", ptr[0]); // 11로 나와야함
	printf("ptr[1]의 값은 : %d\n", ptr[1]); // 22로 나와야함
	printf("ptr[2]의 값은 : %d\n", ptr[2]); // 33로 나와야함
	
	printf("ptr[0]의 값은 : %p\n", &ptr[0]); // 포인터의 시작 주소
	printf("ptr[1]의 값은 : %p\n", &ptr[1]); // 포인터의 시작 주소 + 4(int 크기) 출력
	printf("ptr[2]의 값은 : %p\n", &ptr[2]); // 포인터의 시작 주소 + 8(int 크기) 출력

	return 0;
}


