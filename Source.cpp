#include <iostream>
#include <string>
using namespace std;

int func(int num);
char func2(int num, int num2);
int sizeString(int num);
void showBinary(int num);

int main() {
	setlocale(LC_ALL, "ru");

	//Task 1
	cout << "Task 1: " << endl;
	unsigned int n;
	cout << "Enter the number: ";
	cin >> n;
	int a = 10 << 2;
	n--;
	unsigned int res = 2 << n;
	cout << "2^ " << n + 1 << " = " << res << endl;

	//Task 2
	cout << "Task 2: " << endl;
	cout << "Enter the number: ";
	int code;
	cin >> code;
	cout << "The number of 1 in binary representation: " << func(code) << endl;;

	//Task 3
	cout << "Task 3: " << endl;
	cout << "Enter the number: ";
	unsigned int code1;	
	cin >> code1;		
	unsigned int index;
	do {
		cout << "Enter the index from 0 to " << sizeString(code1) << ": ";
		cin >> index;
	}
	while (index > sizeString(code1));	
	showBinary(code1);	
	cout << "The number N at the index position: " << func2(code1,index) << endl;
	
	return 0;
}
//Task 3
int sizeString(int num) {
	string number;
	int count = NULL, num1;
	while (num > 0) {
		num1 = num % 2;
		number += to_string(num1);
		num = num / 2;
	}
	for (int i = 0; i < number.size(); i++) {
		if (number[i] == '1' || number[i] == '0') {
			count++;
		}
	}
	return count;
}
char func2(int num, int num2) {	
	string number;
	int count = NULL, num1;
	while (num > 0) {
		num1 = num % 2;
		number += to_string(num1);
		num = num / 2;
	}
	for (int i = 0; i < number.size(); i++) {
		if (number[i] == '1' || number[i] == '0') {
			count++;
		}
	}
	char indexNumber[1] = { number[num2] };	
	return indexNumber[0];
}
void showBinary(int num) {
	string number;
	int num1;
	int count = NULL;
	while (num > 0) {
		num1 = num % 2;
		number += to_string(num1);
		num = num / 2;
	}
	cout << "Binary representation: ";
	for (int i = number.size(); i >= 0; i--) {
		cout << number[i];
	}	
	cout << endl;
}
//Task 2
int func(int num) {
	string number;
	int num1;
	int count = NULL;
	while (num > 0){
		num1 = num % 2;
		number += to_string(num1);
		num = num / 2;
	}
	cout << "Binary representation: " ;
	for (int i = number.size(); i >= 0; i--) {
		cout << number[i];
	}
	cout << "\n" << "Number size: " << number.size() << endl;
	for (int i = 0; i < number.size(); i++) {
		if (number[i] == '1') {
			count++;
		}
	}
	
	return count;
}