#include <stdio.h>
#include <stdlib.h>
int search(const int a[], int n, int key); // 검색 함수 


int main(void)
{
	int nx, ky;
	puts(" 선형 검색 "); // put은 자동으로 \n
	printf(" 요소 개수 :");

	scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int)); // malloc 은 초기화x, calloc은 0으로
	for (int i = 0; i < nx; i++) {

		printf("x[%d]: ", i);
		scanf("%d", &x[i]); // %d 사이에 공백을 넣으면 문제가 발생하는 이유 조사하기 
	}
	printf(" 검색값 : ");
	scanf("%d", &ky);

	int index = search(x, nx, ky); // x는 배열, nx는 크기, 
	if (index == -1)
		puts("검색에 실패하였습니다.");
	else
		printf("%d는 x[%d]에 있습니다.", ky, index);

	free(x);

	return 0;

}

int search(const int a[], int n, int key) // 검색 함수 
{
	int i = 0;
	while (1) {
		if (i == n)
			return -1; // 검색 실패 

		if (a[i] == key)
			return i;
		i++;
	}
}