#include<iostream>
using namespace std;
int main()
{
	int number, reminder, reverse = 0;
	cout << "Enter the Number that you want to Reverse ";
	cin >> number;
	while (number > 0)
	{
    	reminder = number % 10;
    	reverse = reverse * 10 + reminder;
    	number = number / 10;
	}
	cout << "Reverse Number are " << reverse;
		
 	return 0;
}