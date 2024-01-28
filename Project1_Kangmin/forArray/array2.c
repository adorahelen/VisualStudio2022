#include<stdio.h>
#include<stdlib.h>

int maxarray(const int a[], int n);

int main(void)
{
	int number;
	printf("사람 수 입력 :");
	scanf("%d", &number);
	int *height = calloc(number, sizeof(int));

	printf(" %d 명의 키를 입력하시오", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", height[i]);
	}
	printf("최대값은 %d 입니다.", maxarray(height, number));
	free(height);
	return 0;
}

int maxarray(const int a[], int n) {

	int max = a[0]; // 최대값을 첫번째 원소로 잡아논다.
	for (int i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}
