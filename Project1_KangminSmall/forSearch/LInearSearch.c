#include <stdio.h>
#include <stdlib.h>
int search(const int a[], int n, int key); // �˻� �Լ� 


int main(void)
{
	int nx, ky;
	puts(" ���� �˻� "); // put�� �ڵ����� \n
	printf(" ��� ���� :");

	scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int)); // malloc �� �ʱ�ȭx, calloc�� 0����
	for (int i = 0; i < nx; i++) {

		printf("x[%d]: ", i);
		scanf("%d", &x[i]); // %d ���̿� ������ ������ ������ �߻��ϴ� ���� �����ϱ� 
	}
	printf(" �˻��� : ");
	scanf("%d", &ky);

	int index = search(x, nx, ky); // x�� �迭, nx�� ũ��, 
	if (index == -1)
		puts("�˻��� �����Ͽ����ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.", ky, index);

	free(x);

	return 0;

}

int search(const int a[], int n, int key) // �˻� �Լ� 
{
	int i = 0;
	while (1) {
		if (i == n)
			return -1; // �˻� ���� 

		if (a[i] == key)
			return i;
		i++;
	}
}