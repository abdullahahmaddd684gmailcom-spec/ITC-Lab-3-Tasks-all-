#include <iostream>
using namespace std;
int main()
{
	int age, creditHours, feeperCreditHour, totalFee, yearBirth, year25;
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter your credit hours:";
	cin >> creditHours;
	cout << "Enter fee per credit hour:";
	cin >> feeperCreditHour;
	totalFee = creditHours * feeperCreditHour;
	cout << "The Total Fees:" << "\nTotal fees after discount:" << totalFee - 2000;
	yearBirth = 2026 - age;
	year25 = yearBirth + 25;
	cout << "\nThe year you were born (assuming it's 2026):" << yearBirth << "\nThe year you will turn 25:" << year25;
	return 0;
	
	/* Experiment 1: When I run the program with value 19 15 8000 in one line or separate by tabs, the program compiles different to when i execute it in 
	separate lines. The mathematical operations are performed the same but the program skips the part where it asks me for credit hours and fee per credit hour.*/
	/* Experiment 2:When i put age as 19.8 the rest of the program runs with garbage value.The age is saved as as 19 and the year of birth and year of turning 25 are performrd
	the same.*/
