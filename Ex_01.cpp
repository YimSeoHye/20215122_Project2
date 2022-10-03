#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	//p.115 1번
	string str1;
	string str2;
	cout << "첫 번째 문자열 : ";
	cin >> str1;
	cout << "두 번째 문자열 : ";
	cin >> str2;
	if (str1 == str2) {
		cout << "2개의 문자열은 같습니다." << endl;
	}
	else
		cout << "2개의 문자열은 다릅니다." << endl;

	cout << endl;

	//p.115 10번
	for (int a = 1; a < 100; a++) {		
		for (int b = 1; b < 100; b++) {
			for (int c = 1; c < 100; c++) {
				if ((a * a + b * b) == c * c)
					cout << a << " " << b << " " << c << endl;
			}
		}
	}

	cout << endl;

	//p.115 16번
	int early_money = 50;
	int goal_money = 250;
	int bets = 0;
	int win = 0;   //각 시뮬레이션에서 이긴 수
	int total = 0;
	int total_win = 0;  //1000번 중 이긴 횟수
	bool result;

	srand((unsigned int)time(NULL));

	cout << "초기금액 $" << early_money << endl;
	cout << "목표금액 $" << goal_money << endl;

	for (int game = 0; game < 1000; game++)
	{
		early_money = 50, bets = 0, win = 0; 
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				early_money++;
				win++;
			}
			else
				early_money--;

			if (early_money <= 0)
			{
				result = false;
				break;
			}
			if (early_money >= goal_money)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			total_win++; // 각 시뮬레이션당 승리 횟수 계산
		total += bets; // 각 시뮬레이션당 베팅 수 총합 계산
	}

	cout << "1000 중의 " << total_win << "번 승리" << endl;
	cout << fixed; // 소수점 아래 자리 고정
	cout.precision(6); // 소수점 아래 6자리까지 지정
	cout << "이긴 확률=" << total_win / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;

	return 0;
}