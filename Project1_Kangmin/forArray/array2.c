#include<stdio.h>
#include<stdlib.h>

int maxarray(const int a[], int n);

int main(void)
{
	int number;
	printf("��� �� �Է� :");
	scanf("%d", &number);
	int *height = calloc(number, sizeof(int));

	printf(" %d ���� Ű�� �Է��Ͻÿ�", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", height[i]);
	}
	printf("�ִ밪�� %d �Դϴ�.", maxarray(height, number));
	free(height);
	return 0;
}

int maxarray(const int a[], int n) {

	int max = a[0]; // �ִ밪�� ù��° ���ҷ� ��Ƴ��.
	for (int i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}
