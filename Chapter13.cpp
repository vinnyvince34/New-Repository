/*Vincent Alexander Seliang
*CS02
*2001585562*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstddef>
#include <cstring>
#include <chrono>
#include <locale>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <cctype>

using namespace std;

void FunctionOne()
{
	class Date
	{
	private:
		int cnMonth;
		int cnDay;
		int cnYear;
	public:
		void GetMonth(int month)
		{
			if (month < 12 || month > 1)
			{
				cerr << "Terminating program..." << endl;
				return;
			}
			else
			{
				this->cnMonth = month;
			}
		}
		void GetDay(int day)
		{
			if (day < 31 || day > 1)
			{
				cerr << "Terminating program..." << endl;
				return;
			}
			else
			{
				this->cnDay = day;
			}
		}
		void GetYear(int year)
		{
			this->cnYear = year;
		}
		int ShowMonth()
		{
			return cnMonth;
		}
		int ShowDay()
		{
			return cnDay;
		}
		int ShowYear()
		{
			return cnYear;
		}
	};

	int day;
	int month;
	int year;
	Date date;

	cout << "Input the month, day, and year, respectively:" << endl;
	cin >> day >> month >> year;

	date.GetDay(day);
	date.GetMonth(month);
	date.GetYear(year);

	string sMonth = "";
	switch (day)
	{
	case 1:
		sMonth = "January";
		break;
	case 2:
		sMonth = "Febuary";
		break;
	case 3:
		sMonth = "March";
		break;
	case 4:
		sMonth = "April";
		break;
	case 5:
		sMonth = "May";
		break;
	case 6:
		sMonth = "June";
		break;
	case 7:
		sMonth = "July";
		break;
	case 8:
		sMonth = "August";
		break;
	case 9:
		sMonth = "September";
		break;
	case 10:
		sMonth = "October";
		break;
	case 11:
		sMonth = "November";
		break;
	case 12:
		sMonth = "December";
		break;
	default:
		cerr << "Terminating program..." << endl;
		break;
	}

	cout << date.ShowMonth() << "/" << date.ShowDay() << "/" << date.ShowYear() << endl;
	cout << sMonth << " " << date.ShowDay() << " " << date.ShowYear() << endl;
	cout << date.ShowDay() << " " << sMonth << " " << date.ShowYear() << endl;
	return;
}

void FunctionTwo()
{
	class Employee
	{
	private:
		string csName;
		int cnID;
		string csDepartment;
		string csPosition;
	public:
		Employee(string name, int id, string department, string position)
		{
			csName = name;
			cnID = id;
			csDepartment = department;
			csPosition = position;
		}
		Employee(string name, int id)
		{
			csName = name;
			cnID = id;
			csDepartment = "";
			csPosition = "";
		}
		Employee()
		{
			csName = "";
			cnID = 0;
			csDepartment = "";
			csPosition = "";
		}
		void GetData()
		{
			cout << "Name: " << this->csName;
			cout << "ID: " << this->cnID;
			cout << "Department: " << this->csDepartment;
			cout << "Position: " << this->csPosition;
			return;
		}
	};

	Employee employeeOne("Susan Meyers", 47899, "Accounting", "Vice president");
	Employee employeeTwo("Mark Jones", 39119, "IT", "Programmer");
	Employee employeeThree("Joy Rogers", 81774, "Manufacturing", "Engineer");

	employeeOne.GetData();
	employeeTwo.GetData();
	employeeThree.GetData();
	return;
}

void FunctionThree()
{
	class Car
	{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int year)
		{
			yearModel = year;
			make = "";
			speed = 0;
		}
		void Accesor()
		{
			cout << "Year model: " << this->yearModel << endl;
			cout << "Make: " << this->make << endl;
			cout << "Speed: " << this->speed << endl;
			return;
		}
		int Accelerator()
		{
			return speed + 5;
		}
		int Break()
		{
			return speed - 5;
		}
	};

	Car car(2010);
	for (int i = 0; i < 5; i++)
	{
		car.Accelerator();
	}

	car.Accesor();

	for (int i = 0; i < 5; i++)
	{
		car.Break();
	}

	car.Accesor();

	return;
}

void FunctionFour()
{
	class Personal
	{
	private:
		string csName;
		string csAddress;
		int cnAge;
		string csPhone;
	public:
		Personal(string name, string address, int age, string phone)
		{
			csName = name;
			csAddress = address;
			cnAge = age;
			csPhone = phone;
		}
		void GetData()
		{
			cout << "Name: " << this->csName << endl;
			cout << "Address: " << this->csAddress << endl;
			cout << "Age: " << this->cnAge << endl;
			cout << "Phone" << this->csPhone << endl;
			return;
		}
		void SetName(string name)
		{
			this->csName = name;
			return;
		}
		void SetAddress(string address)
		{
			this->csAddress = address;
			return;
		}
		void SetAge(int age)
		{
			this->cnAge = age;
			return;
		}
		void SetPhone(string phone)
		{
			this->csPhone = phone;
			return;
		}
	};

	Personal personOne("Vincent", "Kelapa Gading", 19, "4519597");
	Personal personTwo("Ryan", "Florida", 17, "55512090");
	Personal personThree("Junior", "Kelapa Gading", 9, "Null");

	personOne.GetData();
	personTwo.GetData();
	personThree.GetData();
}

void FunctionFive()
{
	class RetailItem
	{
	private:
		string csDecription;
		int cnUnitOnHand;
		float cfPrice;
	public:
		RetailItem(string description, int unit, float price)
		{
			csDecription = description;
			cnUnitOnHand = unit;
			cfPrice = price;
		}
		void Accessor()
		{
			cout << "Description: " << this->csDecription << endl;
			cout << "Unit on hand: " << this->cnUnitOnHand << endl;
			cout << "Price: $" << this->cfPrice << endl;
		}
	};

	RetailItem itemOne("Jacket", 12, 59.95);
	RetailItem itemTwo("Designer jeans", 40, 34.95);
	RetailItem itemThree("Shirt", 20, 24.95);

	itemOne.Accessor();
	itemTwo.Accessor();
	itemThree.Accessor();
	return;
}

void FunctionSix()
{
	class Inventory
	{
	private:
		int cnItemNumber;
		int cnQuantity;
		double cdCost;
		double cdTotalCost;
	public:
		Inventory()
		{
			cnItemNumber = 0;
			cnQuantity = 0;
			cdCost = 0.0;
			cdTotalCost = 0.0;
		}
		Inventory(int number, int quantity, double cost)
		{
			if (number < 0)
			{
				abs(number);
			}
			if (quantity < 0)
			{
				abs(quantity);
			}
			if (cost < 0)
			{
				abs(cost);
			}
			cnItemNumber = number;
			cnQuantity = quantity;
			cdCost = cost;
			cdTotalCost = quantity * cost;
		}
		void setItemNumber(int number)
		{
			if (number < 0)
			{
				abs(number);
			}
			cnItemNumber = number;
			return;
		}
		void setQuantity(int quantity)
		{
			if (quantity < 0)
			{
				abs(quantity);
			}
			cnQuantity = quantity;
			return;
		}
		void setCost(double cost)
		{
			if (cost < 0)
			{
				abs(cost);
			}
			cdCost = cost;
			return;
		}
		void setTotalCost()
		{
			cdTotalCost = (this->cdCost) * (this->cnQuantity);
			return;
		}
		int GetItemNumber()
		{
			return cnItemNumber;
		}
		int GetQuantity()
		{
			return cnQuantity;
		}
		double GetCost()
		{
			return cdCost;
		}
		double getTotalCost()
		{
			return cdTotalCost;
		}
	};

	Inventory item(69420, 10, 59.95);
	cout << "Item number: " << item.GetItemNumber() << endl;
	cout << "Quantity: " << item.GetQuantity() << endl;
	cout << "Cost: $" << item.GetCost() << endl;
	cout << "Total cost : $" << item.getTotalCost() << endl;

	return;
}

int main()
{
	int nChoices;
	cout << "Please choose between 1 to 6 to see the function." << endl;
	cin >> nChoices;
	switch (nChoices)
	{
	case 1:
		FunctionOne();
		break;
	case 2:
		FunctionTwo();
		break;
	case 3:
		FunctionThree();
		break;
	case 4:
		FunctionFour();
		break;
	case 5:
		FunctionFive();
		break;
	case 6:
		FunctionSix();
		break;
	default:
		cout << "Terminating program..." << endl;
		exit(0);
		break;
	}
	cin.get();
	return 0;
}
