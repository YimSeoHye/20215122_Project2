#include<iostream>
using namespace std;

int main() {
	//p.353 1��
	int num;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;
	int* array_num = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> array_num[i];
	}
	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++) {
		cout << array_num[i] << ",";
	}
	delete[] array_num;
	
	cout << endl;
	//p.353 2��
	int n;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�?  ";
	cin >> n;
	string* names = new string[n];
	for (int i = 0; i < n; i++) {
		cout << "�̸� �Է� # " << i + 1 << ":  ";
		cin >> names[i];
	}
	cout << endl << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < n; i++) {
		cout <<"�̸� #"<< i + 1 <<":  " << names[i] << endl;
	}
	delete[] names;
	return 0;
}