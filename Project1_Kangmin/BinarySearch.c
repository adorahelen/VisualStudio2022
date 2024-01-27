#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int b, int c);

	int main(void)
	{
		int numX, key;

		printf("이진검색");
		printf("요소개수: ");
		scanf("%d", &numX);
		int* x = calloc(numX, sizeof(int));

		printf("오름차순으로 입력하세요.\n"); // sorting  알고리즘 추후에 추가
		printf("x[0]: ");
		scanf("%d", &x[0]);

		// sorting 알고리즘 아니기 때문에 부가조건이 많음
		for (int i = 1; i < numX; i++) { // 처음에 입력한 요소 개수만큼 반복
			do {
				printf("x[%d] : ", i);
				scanf("%d", &x[i]);
			} while (x[i] < x[i - 1]); // 오름차순 정렬을 해야 하기에, 작으면 다시 입력
		}
		printf("검색값: ");
		scanf("%d", &key);
		int idx = binarySearch(x, numX, key);
		if (idx == -1)
			printf("검색에 실패했습니다.");
		else
			printf("%d는 x[%d]에 있습니다.", key, idx);
		free(x);

		return 0;
	}

	int binarySearch(int a[], int b, int c) { // 동적배열/ 사이즈/ 키값

		int first = 0;
		int last = b - 1;

		do {
			int center = (first + last) / 2;
			if (a[first] == c)
				return center; // 한가운데 인덱스

			else if (a[center] < c)
				first = center + 1;

			else
				last = first - 1;
		} while (first <= last);
		return -1;
	} // 알고리즘 틀린거 같다 계속 실패 