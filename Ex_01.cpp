#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	//p.115 1��
	string str1;
	string str2;
	cout << "ù ��° ���ڿ� : ";
	cin >> str1;
	cout << "�� ��° ���ڿ� : ";
	cin >> str2;
	if (str1 == str2) {
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	}
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;

	cout << endl;

	//p.115 10��
	for (int a = 1; a < 100; a++) {		
		for (int b = 1; b < 100; b++) {
			for (int c = 1; c < 100; c++) {
				if ((a * a + b * b) == c * c)
					cout << a << " " << b << " " << c << endl;
			}
		}
	}

	cout << endl;

	//p.115 16��
	int early_money = 50;
	int goal_money = 250;
	int bets = 0;
	int win = 0;   //�� �ùķ��̼ǿ��� �̱� ��
	int total = 0;
	int total_win = 0;  //1000�� �� �̱� Ƚ��
	bool result;

	srand((unsigned int)time(NULL));

	cout << "�ʱ�ݾ� $" << early_money << endl;
	cout << "��ǥ�ݾ� $" << goal_money << endl;

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
			total_win++; // �� �ùķ��̼Ǵ� �¸� Ƚ�� ���
		total += bets; // �� �ùķ��̼Ǵ� ���� �� ���� ���
	}

	cout << "1000 ���� " << total_win << "�� �¸�" << endl;
	cout << fixed; // �Ҽ��� �Ʒ� �ڸ� ����
	cout.precision(6); // �Ҽ��� �Ʒ� 6�ڸ����� ����
	cout << "�̱� Ȯ��=" << total_win / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
}