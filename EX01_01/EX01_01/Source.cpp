#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void ex01();
void ex02();
void ex03();
int doubleMyInteger(int& number);
int addMyTwoRandomIntegers(int& randomIntegerNumberOne, int&randomIntegerNumberTwo);
int addOneToAddOneToMe(int& addOneToMe);
void ex04();
void outputArrayValues(int arrayValues[]);
void calculateQuadraticEquation(int arrayValues[]);

int main() {
	ex01();
	ex02();
	ex03();
	ex04();
}

void ex01(){
	bool hasPassedTest = true;
	srand(time(NULL));
	int x = rand(), y = rand();
	if (x > y)
		cout << x << " is greater than " << y << endl;
	else if (x == y)
		cout << x << " is equal to " << y << endl;
	else
		cout << x << " is less than " << y << endl;
	int numberOfShares;
	cout << "What is your number of shares?" << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << numberOfShares << " is less than 100." << endl;
	else
		cout << numberOfShares << " is not less than 100." << endl;
	double boxWidth, bookWidth;
	cout << "What is the box width?" << endl;
	cin >> boxWidth;
	cout << "What is the book width?" << endl;
	cin >> bookWidth;
	if (fmod((boxWidth / bookWidth),1) == 0)
		cout << "The box width is evenly divisible by the book width." << endl;
	else
		cout << "The box width is not evenly divisible by the book width." << endl;
	int shelfLife, outsideTemperature;
	cout << "What is the shelf life of a box of chocolates." << endl;
	cin >> shelfLife;
	cout << "What is the outside temperature?" << endl;
	cin >> outsideTemperature;
	if (outsideTemperature > 90)
		shelfLife -= 4;
	cout << "The shelf life of a box of chocolates is " << shelfLife << endl;
}
void ex02() {
	double length, height;
	cout << "What is the length of the triangle?" << endl;
	cin >> length;
	cout << "What is the height of the triangle?" << endl;
	cin >> height;
	cout << "The hypotenuse of the triangle is " << sqrt(pow(length, 2) + pow(height, 2)) << endl;
	char yesOrNo;
	cout << "Enter /'y/' or /'n/'" << endl;
	cin >> yesOrNo;
	if (yesOrNo == 'y')
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	char tab = 9;
	cout << "Enter your mailing address with no spaces." << endl;
	string mailingAddress;
	cin >> mailingAddress;
	string emptyString = "";
}
void ex03() {
	int number;
	do {
		cout << "Please give a number between 1 and 10." << endl;
		cin >> number;
	} while ((number < 1) || (number > 10));
	int runningTotal = 0;
	for (int count = 1; count <= number; count++)
		runningTotal += pow(number, 3);
	int astericksCount = 0;
	do {
		cout << "*";
		astericksCount++;
	} while (astericksCount < number);
	cout << endl;
	for (int count = 0; count <= 40; count++) {
		if ((count % 2) == 0)
			cout << count << ", " << endl;
	}
	doubleMyInteger(number);
	int randomIntegerNumberOne = rand(), randomIntegerNumberTwo = rand();
	addMyTwoRandomIntegers(randomIntegerNumberOne, randomIntegerNumberTwo);
	int addOneToMe;
	addOneToAddOneToMe(addOneToMe);
}
int doubleMyInteger(int& number) {
	return (number * 2);
}
int addMyTwoRandomIntegers(int& randomIntegerNumberOne, int&randomIntegerNumberTwo) {
	return (randomIntegerNumberOne + randomIntegerNumberTwo);
}
int addOneToAddOneToMe(int& addOneToMe) {
	return (addOneToMe++);
}
void ex04() {
	int arrayValues[5];
	cout << "Enter three numbers with a space between each of them." << endl;
	for (int count = 0; count < 3; count++) {
		cin >> arrayValues[count];
	}
	int runningTotalSum = 0, runningTotalProduct = 1;
	for (int count = 0; count < 3; count++) {
		runningTotalSum += arrayValues[count];
		runningTotalProduct *= arrayValues[count];
	}
	cout << "Sum of the values: " << runningTotalSum << endl
		<< "Product of the values: " << runningTotalProduct << endl;
	outputArrayValues(arrayValues);
	calculateQuadraticEquation(arrayValues);
}
void outputArrayValues(int arrayValues[]) {
	arrayValues[3] = 0, arrayValues[4] = 0;
	for (int count = 0; count <= sizeof(arrayValues); count++) {
		cout << arrayValues[count] << endl;
	}
}
void calculateQuadraticEquation(int arrayValues[]) {
	int x, a[3] = { arrayValues[0], arrayValues[1], arrayValues[2] };
	cout << "Please input another number." << endl;
	cin >> x;
	cout << (a[2] * pow(x, 2)) + (a[1] * x) + (a[0]) << endl;
}