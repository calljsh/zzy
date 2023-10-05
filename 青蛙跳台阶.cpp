#include <stdio.h>

//求第n级台阶时青蛙跳法个数
int frog_jump_step(int n) {
	//特殊情况处理
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	//递归调用
	return frog_jump_step(n - 1) + frog_jump_step(n - 2);
}

int main() {
	int n = 0;
	printf("请输入青蛙所要跳的台阶数：");
	scanf("%d", &n);
	int num = frog_jump_step(n);
	printf("一共有%d种跳法\n", num);
	return 0;
}
