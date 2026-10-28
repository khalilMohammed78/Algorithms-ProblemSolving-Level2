#include<iostream>

using namespace std;
int ReadPositiveNumber(string Message)
{
	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
bool CheckIsThatAPerfectNumber(int number) {
	int sum = 0;
	for (size_t i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	return number == sum;
}
void PrintResult(int number){
	
	if (CheckIsThatAPerfectNumber(number))
		cout << number << " is a perfect number" << endl;
	else
		cout << number << " is not a perfect number" << endl;
}
int main() {
	PrintResult(ReadPositiveNumber("Enter the positve number"));
}