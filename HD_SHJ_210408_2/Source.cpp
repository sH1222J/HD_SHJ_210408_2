/*
특별문제
for문 이용
}
1번문제
*
**
***
****
*****
2번문제
		*
	   **
	  ***
	 ****
	*****
3번문제
  *
  **
  *
  ***
  *
  ****
  *
  *****

*/
#include<stdio.h>
void main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}