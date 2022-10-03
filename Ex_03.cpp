#include<iostream>
using namespace std;

int main() {
	//p.353 1번
	int num;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;
	int* array_num = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "정수를 입력하시오 : ";
		cin >> array_num[i];
	}
	cout << "입력된 정수는: ";
	for (int i = 0; i < num; i++) {
		cout << array_num[i] << ",";
	}
	delete[] array_num;
	
	cout << endl;
	//p.353 2번
	int n;
	cout << "얼마나 많은 이름을 입력 하시겠습니까?  ";
	cin >> n;
	string* names = new string[n];
	for (int i = 0; i < n; i++) {
		cout << "이름 입력 # " << i + 1 << ":  ";
		cin >> names[i];
	}
	cout << endl << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < n; i++) {
		cout <<"이름 #"<< i + 1 <<":  " << names[i] << endl;
	}
	delete[] names;
	return 0;
}