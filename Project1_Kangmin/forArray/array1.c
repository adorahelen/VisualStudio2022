// 1.���� ��ü �����ϱ� 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* x = calloc(1, sizeof(int)); // malloc �� �ʱ�ȭ�� ���µ� calloc�� 0���� �ʱ�ȭ ���� 
	if (x == NULL) {
		printf("�޸� �Ҵ翡 �����߽��ϴ�.");
	}
	else {
		*x = 57;
		printf("*x =%d", *x);

		free(x);
	} // ���� if ���� else���� ��ȣ�� ���� ������ �����ϱ�?

	return 0;
}