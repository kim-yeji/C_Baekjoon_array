#include<stdio.h>
int arr[10];

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int mul = a * b * c;
	while (mul) { //mul�� �� �������� 0�� �� ������
		arr[mul % 10]++; //4�� ������ 4��cnt++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}