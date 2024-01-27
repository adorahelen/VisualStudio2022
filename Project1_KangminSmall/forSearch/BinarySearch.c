#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int b, int c);

	int main(void)
	{
		int numX, key;

		puts("이진검색");
		printf("요소개수: ");
		scanf("%d", &numX);
		int* x = calloc(numX, sizeof(int));

		puts("오름차순으로 입력하세요."); // sorting  알고리즘 추후에 추가
		printf("x[0] : ");
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

		int first = 0; // 검색 범위 맨 앞의 인덱스
		int last = b - 1; // 검색 범위 맨 끝의 인덱스

		do {
			int center = (first + last) / 2;
			if (a[center] == c)
				return center; // 검색 범위가 한 가운데의 인덱스인 경우

			else if (a[center] < c) // 39 < key(120)
				first = center + 1; // 검색 범위 뒤쪽 절반으로

			else
				last = center - 1; // 검색 범위를 앞쪽 절반으로

		} while (first <= last); // 계속 비교  
		return -1; 
	} // 알고리즘 틀린거 같다 계속 실패 
	// 원인은 함수를 작성할때, do while 문 안에 center 대신 다른 것들을 넣었음