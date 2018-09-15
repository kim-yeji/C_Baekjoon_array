#include<stdio.h>
char arr[80];
int sum;
int main() {
	int num;
	scanf("%d", &num);

	while (num--) {
		scanf("%s", arr);
		int cnt = 0;
		sum = 0;
		for (int i = 0; i < arr[i] != NULL; i++) {
			if (arr[i] == 'O') {
				cnt++;
				sum += cnt;
			}
			else {
				cnt = 0;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}

