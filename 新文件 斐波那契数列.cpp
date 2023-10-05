#include <stdio.h>

long long fibonacci(int n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n, i;

	printf("请输入要生成的斐波那契数列的项数：");
	scanf("%d", &n);

	printf("斐波那契数列的前 %d 项是：\n", n);

	for (i = 0; i < n; i++) {
		printf("%lld ", fibonacci(i));
	}

	return 0;
}
//以上两个示例分别演示了如何使用循环和递归生成斐波那契数列。循环方法更加高效，递归方法在处理大数时可能会导致性能问题，但递归方法通常更容易理解。你可以根据需要选择其中一种方法。





