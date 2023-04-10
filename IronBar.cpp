#include <iostream>

using namespace std;

char str[100000 + 10];//쇠막대기와 레이저의 배치를 나타내는 괄호 표현 문자열

void InputData(){
	cin >> str;
}

int main() {
	int ans = 0;
	InputData();//입력
	
	//여기서부터 작성
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
	

	cout << ans << endl;//출력
	return 0;
}
