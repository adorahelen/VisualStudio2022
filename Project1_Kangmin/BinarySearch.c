#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int binarySearch(int a[], int b, int c);

	int main(void)
	{
		int numX, int key;

		printf("�����˻�");
		printf("��Ұ���: ");
		scanf("%d", &numX);
		int* x = calloc(numX, sizeof(int));

		printf("������������ �Է��ϼ���.\n"); // sorting  �˰��� ���Ŀ� �߰�
		printf("x[0]: ");
		scanf("%d", &x[0]);
		// sorting �˰��� �ƴϱ� ������ �ΰ������� ����
		for (int i = 1; i < numX; i++) {
			do {
				int i = printf("x[%d]: ", i);
				scanf("%d", &x[% d]);
			} while (x[i] < x[i - 1]);
		}

		printf("�˻���");
	}


}