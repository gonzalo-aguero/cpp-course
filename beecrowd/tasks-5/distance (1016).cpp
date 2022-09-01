#include <iostream>
using namespace std;

/**
 * Necessary time in minutes to get the distance.
 **/
int necessaryTime(int distance);

int main(int argc, char *argv[]) {
	int distance;
	cin >> distance;
	cout << necessaryTime(distance) << " minutos" << endl;
	return 0;
}

int necessaryTime(int distance){
	return distance * 2;
}
