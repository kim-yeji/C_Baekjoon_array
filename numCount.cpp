#include<stdio.h>
int arr[10];

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int mul = a * b * c;
	while (mul) { //mul이 다 나눠져서 0이 될 때까지
		arr[mul % 10]++; //4가 나오면 4에cnt++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}