#include <stdio.h>

//���n��̨��ʱ������������
int frog_jump_step(int n) {
	//�����������
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	//�ݹ����
	return frog_jump_step(n - 1) + frog_jump_step(n - 2);
}

int main() {
	int n = 0;
	printf("������������Ҫ����̨������");
	scanf("%d", &n);
	int num = frog_jump_step(n);
	printf("һ����%d������\n", num);
	return 0;
}
