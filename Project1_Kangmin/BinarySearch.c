#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int binarySearch(int a[], int b, int c);

	int main(void)
	{
		int numX, int key;

		printf("이진검색");
		printf("요소개수: ");
		scanf("%d", &numX);
		int* x = calloc(numX, sizeof(int));

		printf("오름차순으로 입력하세요.\n"); // sorting  알고리즘 추후에 추가
		printf("x[0]: ");
		scanf("%d", &x[0]);
		// sorting 알고리즘 아니기 때문에 부가조건이 많음
		for (int i = 1; i < numX; i++) {
			do {
				int i = printf("x[%d]: ", i);
				scanf("%d", &x[% d]);
			} while (x[i] < x[i - 1]);
		}

		printf("검색값");
	}


}