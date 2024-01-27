#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int b, int c);

	int main(void)
	{
		int numX, key;

		puts("�����˻�");
		printf("��Ұ���: ");
		scanf("%d", &numX);
		int* x = calloc(numX, sizeof(int));

		puts("������������ �Է��ϼ���."); // sorting  �˰��� ���Ŀ� �߰�
		printf("x[0] : ");
		scanf("%d", &x[0]);

		// sorting �˰��� �ƴϱ� ������ �ΰ������� ����
		for (int i = 1; i < numX; i++) { // ó���� �Է��� ��� ������ŭ �ݺ�
			do {
				printf("x[%d] : ", i);
				scanf("%d", &x[i]);
			} while (x[i] < x[i - 1]); // �������� ������ �ؾ� �ϱ⿡, ������ �ٽ� �Է�
		}
		printf("�˻���: ");
		scanf("%d", &key);
		int idx = binarySearch(x, numX, key);
		if (idx == -1)
			printf("�˻��� �����߽��ϴ�.");
		else
			printf("%d�� x[%d]�� �ֽ��ϴ�.", key, idx);
		free(x);

		return 0;
	}

	int binarySearch(int a[], int b, int c) { // �����迭/ ������/ Ű��

		int first = 0; // �˻� ���� �� ���� �ε���
		int last = b - 1; // �˻� ���� �� ���� �ε���

		do {
			int center = (first + last) / 2;
			if (a[center] == c)
				return center; // �˻� ������ �� ����� �ε����� ���

			else if (a[center] < c) // 39 < key(120)
				first = center + 1; // �˻� ���� ���� ��������

			else
				last = center - 1; // �˻� ������ ���� ��������

		} while (first <= last); // ��� ��  
		return -1; 
	} // �˰��� Ʋ���� ���� ��� ���� 
	// ������ �Լ��� �ۼ��Ҷ�, do while �� �ȿ� center ��� �ٸ� �͵��� �־���