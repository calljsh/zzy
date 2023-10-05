# include<stdio.h>

int main() {
	int n ;
	printf("请输入数字N：");
	scanf ("%d", &n);
	int a = 1;
	int c = 0;
	int b = 1;
	for (a = 1; a <= n; a++)
	 {
		b = a * b;
//		c = c + b;
//		可以算出一个数字阶层和

	}

	printf("N阶层为%d\n", b);
//	printf("N之前数字的阶层和为%d", c);





	return 0;
}

