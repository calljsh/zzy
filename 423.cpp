# include<stdio.h>

void zzy(int *a, int *b) {
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;

}

int main() {

	int a = 24;
	int b = 224;
	zzy(&a, &b);
	printf("%d %d", a, b);






	return 0;
}