# include<stdio.h>
# include<string.h>
# include<windows.h>

int main() {
	char arr[] = "abcdefg";
	char arr2[] = "       ";
	int a = 0;
	int b = 0;

	printf("%s\n", arr);

	for (a = 0, b = strlen(arr2) - 1; a < b; a++, b--) {
		arr[a] = arr2[a];
		arr[b] = arr2[b];

		printf("%s\n", arr);

		Sleep(500);
	}


	char arr4[] = "abcdefg";
	char arr3[] = "   d   ";
	int c = 3;
	int d = 3;
	for (c = 3, d = 3; c >= 0; d++, c-- )

	{
		if (c == 3 && d == 3)
			continue;

		arr3[c] = arr4[c];
		arr3[d] = arr4[d];
		printf("%s\n", arr3);
		Sleep(500);
	}

	return 0;
}