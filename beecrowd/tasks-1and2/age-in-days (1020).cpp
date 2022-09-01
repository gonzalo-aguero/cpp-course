#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int ageInDays;
	
	cin >> ageInDays; // I will use the number 400 as example input for explain it.

	
	
	int yearsInt = ageInDays / 365; // 400/365 = 1 full year
	float yearsF = ((float) ageInDays / 365);// 400/365 = 1.0958... years

	/**
	 * ((float) 400 / 365) = 1.0958... 
	 * Then to get the value after the point:
	 * 1.0958 - 1 = 0.0958 years (the number 1, corresponds to the number of full years).
	 **/
	float yearsDecimals = yearsF - yearsInt;
	
	
	
	/**
	 * (0.0958 * 365) = 35 days, So:
	 * 35 days / 30 daysPerMonth = 1.166... (1 full month).
	 **/
	int monthsInt = (yearsDecimals * 365) / 30; // 1 full month.
	float monthsF = ((float) yearsDecimals * 365) / 30; // 1.166... months
	
	/**
	 * 1.166... months - 1 fullMonth = 0.166...
	 **/
	float monthsDecimals = monthsF - monthsInt;
	
	
	
	/**
	 * 0.166 months * 30 daysPerMonth = 5 days.
	 * I replaced daysInt by daysF since in situations where the resulting number of days was for 
	 * example "4.99999", when converting it to an integer, instead of rounding it to 5,
	 * the program only returned the value 4... Something totally wrong :(
	 **/
	float daysF = (float) monthsDecimals * 30;
	
	
	
	cout << yearsInt << " ano(s)" << endl; 
	cout << monthsInt<< " mes(es)" << endl; 
	cout << fixed << setprecision(0) << daysF << " dia(s)" << endl; 
	
	return 0;
}
