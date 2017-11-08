#include <iostream>
using namespace std;

class  Car
{
public:
	/*
	constructor
	input: gets car's info, checks the validation.
	*/
	 Car(char* make, char* model, int year, int engineVolume, char* color);
	 Car(Car &c);
	~ Car();

	/*
	print the car info
	*/
	void printInfo() const;
	
	/*
	compare two cars according the year
	input: two cars
	return the older car
	*/
	friend const Car &older(const Car &lhs, const Car &rhs);

	/*
	compare two cars according the m_engine volume
	input: two cars
	return the bigger car
	*/
	friend const Car& bigger(const Car &lhs, const Car &rhs);

private:
	char m_make[10];
	char m_model[10];
	int m_year;
	int m_engineVolume;
	char m_color[10];
};
