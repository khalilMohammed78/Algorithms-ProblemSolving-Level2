#include<iostream>
using namespace std;
void Print_Header_Table() {
	cout << "\n\n\n\t\tMultiplication Table From 1 To 10\n\n";
	cout << "\t";
	for (size_t i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n___________________________________________________________________________________\n";
}
string Print_ColumSperator(int i) {
	if (i < 10)
		return"   |";
	else
		return"  |";
}
void Print_Table_Multiplication() {
	Print_Header_Table();
	for (size_t i = 1; i <= 10; i++)
	{
		cout << i << Print_ColumSperator(i) << "\t";
		for (size_t j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main() {
	Print_Table_Multiplication();
}