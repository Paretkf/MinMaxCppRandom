#include<iostream>
#include <time.h>
using namespace std;
void main () {
	int inputNumber = 0;
	int num2 = 0;
	int num3 = 100;
	int randomNumber = 0;
	cout << ">> Program Find Minimum and Maximum Number << \n\n";
	cout << "Enter number of data : ";
	cin >> data;
	srand(time(NULL));
	for(int a = 1; a<=data; a++) {
		cout << "Enter integer value" << a << " : ";
		
		randomNumber = (rand())%1000;
		cout << randomNumber << endl;
		
		if (a == 1) {
			num2 = randomNumber;
		}
		if(randomNumber > num2) {
			num2 = randomNumber;
		}
		else if(randomNumber < num3) {
			num3 = randomNumber;
		}		
	}
	cout << "MAX = " << num2 << endl;
	cout << "MIN = " << num3 << endl;
}