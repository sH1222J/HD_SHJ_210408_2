/*
Ư������
for�� �̿�
}
1������
*
**
***
****
*****
2������
		*
	   **
	  ***
	 ****
	*****
3������
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