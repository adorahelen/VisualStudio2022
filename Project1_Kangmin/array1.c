// 1.동적 객체 생성하기 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* x = calloc(1, sizeof(int)); // malloc 은 초기화가 없는데 calloc은 0으로 초기화 해줌 
	if (x == NULL) {
		printf("메모리 할당에 실패했습니다.");
	}
	else {
		*x = 57;
		printf("*x =%d", *x);

		free(x);
	} // 굳이 if 문과 else문을 괄호로 감싼 이유는 무엇일까?

	return 0;
}