// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Car
{
public:

	enum class PowerType
	{
		Electric,
		Gas,
	};

	void setName(std::string n) { name = n; };
	std::string getName() { return name; }
	void setPowerType(PowerType t) { type = t; }
	std::string getPassword() { return password; }

private:
	PowerType type { PowerType::Electric };
	std::string name = "Car";
	std::string password = "ojiojiojiojis"
};

class CarPark
{
public:
	void setCarName(std::string n) { car.setName(n); }
	std::string getCarName() { return car.getName(); }

private:
	Car car;

	std::string getCarPassword()
	{
		return car.getPassword();
	}
};

class CarFactory
{
public :
	void setCarPowerType(Car::PowerType t) { car.setPowerType(t); }

private:
	Car car;
};

class CarDatabase
{
public:
	void getCarPassword() { car.getPassword(); }

private:
	Car car;
};

int main()
{
	CarPark park;
	park.setCarName("Oji");

	CarFactory factory;
	factory.setCarPowerType(Car::PowerType::Gas);

	CarDatabase database;
	database.getCarPassword();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
