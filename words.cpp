#include<stdio.h>
//���ڿ� ���� �Է� �Լ� gets
//����Ű�� �Է��� �������� ��� ���ڸ�
//�迭�� �����ϹǷΰ����� ������ ���ڿ��� �Է¹��� �� �ִ�

//fgets(s,100,stdin) s��� ���� 100�� ���� �����Ұſ���.stdin=�⺻�� Ű���� �Է�����
char arr[1000001] = "";
bool flag; //false
int main() {
	int cnt = 0;
	fgets(arr, 1000000, stdin);
	//���� ���� �����ִ°� �ܾ��� ��,������ ���� �ƴϸ� ��� ���� for��
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
	//���� �� ���� �������� if������ ���� �ܾ �����ش�.
	if (flag == 1) {
		flag = 0;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}

