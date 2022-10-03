#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

double calc_volume(double radius) {
	double vol = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return vol;
}

bool pw_check(string pw) {
	for (auto& c : pw) {
		if (47 < c < 58 && 64 < c < 91 && 96 < c < 123) {
			return true;
		}
		else
			return false;
	}
}
int main() {
	//p.160 2번
	double r;
	cout << "반지름을 입력하시오 :";
	cin >> r;
	cout << "구의 부피는 " << calc_volume(r) << endl;
	
	cout << endl;
	//p.162 9번
	srand((unsigned int)time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = 0;
	sum = dice1 + dice2;
	cout << "사용자의 주사위   " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11) {
		cout << "사용자가 이겼습니다." << endl;
	}
	else if (sum == 2 || sum == 3 || sum == 12) {
		cout << "사용자가 졌습니다." << endl;
	}
	else
		cout << "조건과 맞지 않습니다." << endl;
		
	cout << endl;
	//p.164 13번
	string password;
	cout << "암호를 입력하시오 : ";
	cin >> password;
	int Capital = 0;
	int lower = 0;
	int num = 0;
	for (int i = 0; i < password.length();i++) {
		if (47 < password[i] < 58) 
			num = 1;
		else if (64 < password[i] < 91)
			Capital = 1;
		else if (96 < password[i] < 123)
			lower = 1;
	}
	if (num == 1 && Capital ==1 && lower == 1)
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다. 더 강력한 암호를 입력하세요." << endl;

	return 0;
}