#include <stdio.h>

long long fibonacci(int n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n, i;

	printf("������Ҫ���ɵ�쳲��������е�������");
	scanf("%d", &n);

	printf("쳲��������е�ǰ %d ���ǣ�\n", n);

	for (i = 0; i < n; i++) {
		printf("%lld ", fibonacci(i));
	}

	return 0;
}
//��������ʾ���ֱ���ʾ�����ʹ��ѭ���͵ݹ�����쳲��������С�ѭ���������Ӹ�Ч���ݹ鷽���ڴ������ʱ���ܻᵼ���������⣬���ݹ鷽��ͨ����������⡣����Ը�����Ҫѡ������һ�ַ�����





