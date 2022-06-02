#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS 
//char 포인터에 대한 이해

int main(void) {
	char st1[] = "My String";       //배열로 한 단어씩 저장됨
	char *st2 = "Your String";      //문자열을 가리키는 포인터임
                                  //
	printf("%s\n%s\n\n", st1, st2);

	st2 = "Whose String";
	
	st1[1] = 'X';
	st2[1] = 'X'; //변경 불가! 

	printf("%s\n%s\n", st1, st2);
  
	return 0;
}
