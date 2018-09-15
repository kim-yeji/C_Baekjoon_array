#include<stdio.h>
//문자열 전용 입력 함수 gets
//엔터키를 입력할 때까지의 모든 문자를
//배열에 저장하므로공백을 포함한 문자열을 입력받을 수 있다

//fgets(s,100,stdin) s라는 곳에 100개 글자 저장할거에요.stdin=기본적 키보드 입력으로
char arr[1000001] = "";
bool flag; //false
int main() {
	int cnt = 0;
	fgets(arr, 1000000, stdin);
	//내가 지금 보고있는게 단어의 끝,문장의 끝이 아니면 계속 도는 for문
	for (int i = 0; arr[i] != NULL && arr[i] != '\n'; i++) {
		if (arr[i] == ' ') {
			if (flag==1) {
				flag = 0;
				cnt++;
			}
		}
		else {
			flag = 1;
		}
	}
	//포문 다 돌고 마지막에 if문으로 들어가서 단어를 세어준다.
	if (flag == 1) {
		flag = 0;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}

