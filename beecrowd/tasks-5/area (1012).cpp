#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double rectangledTriangleArea(double base, double height);
double circleArea(double radius);
double trapeziumArea(double topBase, double bottomBase, double height);
double squareArea(double side);
double rectangleArea(double sideA, double sideB);

int main(int argc, char *argv[]) {
	double a,b,c;
	cin >> a >> b >> c;
	
	cout << fixed << setprecision(3)
		<< "TRIANGULO: " << rectangledTriangleArea(a, c) << endl
		<< "CIRCULO: " << circleArea(c) << endl
		<< "TRAPEZIO: " << trapeziumArea(a, b, c) << endl
		<< "QUADRADO: " << squareArea(b) << endl
		<< "RETANGULO: " << rectangleArea(a, b) << endl;
	
	return 0;
}

double rectangledTriangleArea(double base, double height){
	return (base * height) / 2;
}
	
double circleArea(double radius){
	const double PI = 3.14159;
	return PI * pow(radius, 2);
}

double trapeziumArea(double topBase, double bottomBase, double height){
	return height * (topBase + bottomBase) / 2;
}
	
double squareArea(double side){
	return side * side;
}

double rectangleArea(double sideA, double sideB){
	return sideA * sideB;
}
