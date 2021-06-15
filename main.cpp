#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int number;
	
	cout<< "Enter a number to check if it is divisible by 5 or not: ";
	cin>> number;
	
	if (number % 5 ==0 )
	{
		cout<< "\nThe given number is divisble by 5!";
	}
	else
	{
		cout<< "\nThe given number is NOT divisible by 5.";
	}
	return 0;
}
