/*
By mordechai rothkoff
exercise CPP: Car
*/

#include <iostream>
#include "Car.h"
using namespace std;

void main()
{
	char make[50];
	char model[50];
	int year;
	int engineVolume;
	char color[10];

	try
	{
		cout << "Please enter the company name, the model, the year, the engine volume and the color\n";
		cin >> make;
		cin >> model;
		cin >> year;
		cin >> engineVolume;
		cin >> color;
		Car aCar1(make, model, year, engineVolume, color);

		cout << "Please enter the company name, the model, the year, the engine volume and the color\n";
		cin >> make;
		cin >> model;
		cin >> year;
		cin >> engineVolume;
		cin >> color;
		Car aCar2(make, model, year, engineVolume, color);

		const Car *olderCar = &older(aCar1, aCar2);
		cout << "The older car is:\n";
		olderCar->printInfo();

		const Car *biggerCar = &bigger(aCar1, aCar2);
		cout << "The bigger car is:\n";
		biggerCar->printInfo();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}	
}