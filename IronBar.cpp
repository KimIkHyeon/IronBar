#include <iostream>

using namespace std;

char str[100000 + 10];//�踷���� �������� ��ġ�� ��Ÿ���� ��ȣ ǥ�� ���ڿ�

void InputData(){
	cin >> str;
}

int main() {
	int ans = 0;
	InputData();//�Է�
	
	//���⼭���� �ۼ�
	int open = 0;
	bool laser = 0;
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			laser = 1;
			open++;
		}
		else if (str[i] == ')') {
			open--;
			if (laser == 1) {
				ans += open;
				laser = 0;
			}
			else {
				ans++;
			}
		}
	}
	

	cout << ans << endl;//���
	return 0;
}
