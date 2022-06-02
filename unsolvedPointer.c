#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS 
//아직 이해하지 못한 포인터에 대한 예제
//이해하고 설명을 적을 예정

int main(void) {
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;

	printf("&arr : %p\n", &arr);
	printf("\n");
	printf("&ptr : %p\n", &ptr);
	printf("&ptr[0] : %p\n", &ptr[0]);
	printf("&ptr[1] : %p\n", &ptr[1]);
	printf("&ptr[2] : %p\n", &ptr[2]);
	/*printf("&ptr[3] : %p\n", &ptr[3]);
	printf("&ptr[4] : %p\n", &ptr[4]);
	printf("&ptr[5] : %p\n", &ptr[5]);*/

	printf("*ptr : %d\n", *ptr);
	printf("*ptr+1 : %d\n", *(ptr+1));
	printf("*ptr+2 : %d\n", *(ptr+2));

	printf("%d %d %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2));	// 이해하지 못함..
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);				      // 이해하지 못함..

	printf("%d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2));	//뭐야?
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);				//당연한거고..

	return 0;
}



