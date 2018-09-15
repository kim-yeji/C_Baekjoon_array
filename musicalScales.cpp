#include<stdio.h>

int main() {
	int ms[8] = { 0, };
	int as = 0, des = 0, mix = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &ms[i]);
		if (i + 1 == ms[i]) as++;
		else if (8 - i == ms[i]) des++;
		else mix++;

	}
	if(as ==8) printf("ascending");
	else if(des ==8)  printf("descending");
	else  printf("mixed");
	
	return 0;
}