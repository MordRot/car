#include "Car.h"

const int CUR_YAER = 2017;

Car::Car(char* make, char* model, int year, int engineVolume, char* color)
{
	if (strlen(make) <= 9)
	{
		strncpy_s(m_make, make, 9);
	}
	else
	{
		throw "The company name is too long";
	}
	
	if (strlen(model) <= 9)
	{
		strncpy_s(m_model, model, 9);
	}
	else
	{
		throw "The model is too long";
	}
	
	if (year > 1930 && year <= CUR_YAER)
	{
		m_year = year;
	}
	else
	{
		throw "The year is invalid";
	}

	m_engineVolume = engineVolume;

	if (strlen(model) <= 9)
	{
		strncpy_s(m_color, color, 9);
	}
	else
	{
		throw "The model is too long";
	}
}

Car::~Car()
{
}

void Car::printInfo()
{
	cout << "The company is: " << m_make << ".\n The model is: " << m_model
		<< ".\n The year is: " << m_year << ".\n The engine Volume is: " << m_engineVolume
		<< ".\n The color is: " << m_color << "\n\n";
}

const Car& older(const Car &lhs, const Car &rhs)
{
	const Car* max;
	if (lhs.m_year > rhs.m_year)
	{
		max = &lhs;
	}
	else
	{
		max = &rhs;
	}
	return *max;
}

const Car& bigger(const Car &lhs, const Car &rhs)
{
	const Car* max;
	if (lhs.m_engineVolume > rhs.m_engineVolume)
	{
		max = &lhs;
	}
	else
	{
		max = &rhs;
	}
	return *max;
}