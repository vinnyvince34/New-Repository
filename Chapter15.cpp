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
	class Employee
	{
	protected:
		string eName;
		int eNumber;
		int eDate;
	public:
		Employee(string name, int number, int date)
		{
			eName = name;
			eNumber = number;
			eDate = date;
		}
		Employee()
		{
			eName = "";
			eNumber = 0;
			eDate = 0;
		}
		void SetName(string name)
		{
			eName = name;
		}
		void SetNumber(int number)
		{
			eNumber = number;
		}
		void SetDate(int date)
		{
			eDate = date;
		}
		string GetName()
		{
			return eName;
		}
		int GetNumber()
		{
			return eNumber;
		}
		int GetDate()
		{
			return eDate;
		}
	};

	class ProductionWorker : public Employee
	{
	protected:
		int pShift;
		double pPayRate;
	public:
		ProductionWorker(int shift, double rate) : Employee()
		{
			pShift = shift;
			pPayRate = rate;
		}
		ProductionWorker() : Employee()
		{
			pShift = 0;
			pPayRate = 0;
		}
		void SetShift(int shift)
		{
			pShift = shift;
		}
		void SetRate(double rate)
		{
			pPayRate = rate;
		}
		int GetShift()
		{
			return pShift;
		}
		double GetRate()
		{
			return pPayRate;
		}
	};

	Employee employOne("Lala", 732356, 10);
	ProductionWorker production(1, 5.5);

	cout << employOne.GetName() << " " << employOne.GetDate() << " " << employOne.GetNumber() << endl;
	cout << production.GetRate() << " " << production.GetShift() << endl;
}

void FunctionTwo()
{
	class Employee
	{
	protected:
		string eName;
		int eNumber;
		int eDate;
	public:
		Employee(string name, int number, int date)
		{
			eName = name;
			eNumber = number;
			eDate = date;
		}
		Employee()
		{
			eName = "";
			eNumber = 0;
			eDate = 0;
		}
		void SetName(string name)
		{
			eName = name;
		}
		void SetNumber(int number)
		{
			eNumber = number;
		}
		void SetDate(int date)
		{
			eDate = date;
		}
		string GetName()
		{
			return eName;
		}
		int GetNumber()
		{
			return eNumber;
		}
		int GetDate()
		{
			return eDate;
		}
	};

	class ShiftSupervisor : public Employee
	{
	protected:
		double sAnnualSalary;
		double sBonus;
	public:
		ShiftSupervisor(double salary, double bonus) : Employee()
		{
			sAnnualSalary = salary;
			sBonus = bonus;
		}
		ShiftSupervisor()
		{
			sAnnualSalary = 0;
			sBonus = 0;
		}
		void SetSalary(double salary)
		{
			sAnnualSalary = salary;
		}
		void SetBonus(double bonus)
		{
			sBonus = bonus;
		}
		double GetSalary()
		{
			return sAnnualSalary;
		}
		double GetBonus()
		{
			return sBonus;
		}
	};
	Employee boss("Lele", 229402, 5);
	ShiftSupervisor bossOne(10000, 500);

	cout << boss.GetName() << " " << boss.GetDate() << " " << boss.GetNumber() << endl;
	cout << bossOne.GetSalary() << " " << bossOne.GetBonus();
}

void FunctionThree()
{
	class Employee
	{
	protected:
		string eName;
		int eNumber;
		int eDate;
	public:
		Employee(string name, int number, int date)
		{
			eName = name;
			eNumber = number;
			eDate = date;
		}
		Employee()
		{
			eName = "";
			eNumber = 0;
			eDate = 0;
		}
		void SetName(string name)
		{
			eName = name;
		}
		void SetNumber(int number)
		{
			eNumber = number;
		}
		void SetDate(int date)
		{
			eDate = date;
		}
		string GetName()
		{
			return eName;
		}
		int GetNumber()
		{
			return eNumber;
		}
		int GetDate()
		{
			return eDate;
		}
	};

	class ProductionWorker : public Employee
	{
	protected:
		int pShift;
		double pPayRate;
	public:
		ProductionWorker(int shift, double rate) : Employee()
		{
			pShift = shift;
			pPayRate = rate;
		}
		ProductionWorker() : Employee()
		{
			pShift = 0;
			pPayRate = 0;
		}
		void SetShift(int shift)
		{
			pShift = shift;
		}
		void SetRate(double rate)
		{
			pPayRate = rate;
		}
		int GetShift()
		{
			return pShift;
		}
		double GetRate()
		{
			return pPayRate;
		}
	};

	class TeamLeader : public ProductionWorker
	{
	protected:
		double tMonthlyBonus;
		int tTrainingTimeRequired;
		int tTrainingTimeAttended;
	public:
		TeamLeader(double bonus, int time_required, int time_attended) : ProductionWorker()
		{
			tMonthlyBonus = bonus;
			tTrainingTimeRequired = time_required;
			tTrainingTimeAttended = time_attended;
		}
		TeamLeader() : ProductionWorker()
		{
			tMonthlyBonus = 0;
			tTrainingTimeRequired = 0;
			tTrainingTimeAttended = 0;
		}
		void SetBonus(double bonus)
		{
			tMonthlyBonus = bonus;
		}
		void SetTRequired(int time)
		{
			tTrainingTimeRequired = time;
		}
		void SetTAttended(int time)
		{
			tTrainingTimeAttended = time;
		}
		double GetBonus()
		{
			return tMonthlyBonus;
		}
		int GetTRequired()
		{
			return tTrainingTimeRequired;
		}
		int GetTAttended()
		{
			return tTrainingTimeAttended;
		}
	};

	Employee employOne("Haha", 132335, 9);
	TeamLeader LeaderOne(232424, 20, 15);

	cout << LeaderOne.GetName() << " " << LeaderOne.GetDate() << " " << LeaderOne.GetNumber() << endl;
	cout << LeaderOne.GetBonus() << " " << LeaderOne.GetTRequired() << " " << LeaderOne.GetTAttended() << endl;
}

void FunctionFour()
{
	class MilTime
	{
	protected:
		int milHour;
		int milSecond;
	public:
		MilTime(int hour, int second)
		{
			if (hour > 2359)
			{
				exit(0);
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				exit(0);
			}
			else
			{
				milSecond = second;
			}
			string sHour = to_string(milHour);
			string sSecond = to_string(milSecond);
			string zero = "0";
			string sHourS;
			if (milHour >= 1000)
			{
				sHourS = sHour.substr(0, 1);
			}
			else
			{
				sHourS = zero + (sHour.substr(0, 1));
			}
			string sMinute = sHour.substr(2, 3);

			cout << "Hour: " << sHourS << endl;
			cout << "Minute: " << sMinute << endl;
			cout << "Second: " << milSecond;
		}
		void SetTime(int hour, int second)
		{
			if (hour > 2359)
			{
				exit(0);
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				exit(0);
			}
			else
			{
				milSecond = second;
			}
			string sHour = to_string(milHour);
			string sSecond = to_string(milSecond);
			string zero = "0";
			string sHourS;
			if (milHour >= 1000)
			{
				sHourS = sHour.substr(0, 1);
			}
			else
			{
				sHourS = zero + (sHour.substr(0, 1));
			}
			string sMinute = sHour.substr(2, 3);

			cout << "Hour: " << sHourS << endl;
			cout << "Minute: " << sMinute << endl;
			cout << "Second: " << milSecond;
		}
		int GetHour()
		{
			return milHour;
		}
		int GetSecond()
		{
			return milSecond;
		}
	};
	MilTime time(2000, 30);
	return;
}

void FunctionFive()
{
	class MilTime
	{
	protected:
		int milHour;
		int milSecond;
	public:
		MilTime(int hour, int second)
		{
			if (hour > 2359)
			{
				exit(0);
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				exit(0);
			}
			else
			{
				milSecond = second;
			}
			string sHour = to_string(milHour);
			string sSecond = to_string(milSecond);
			string zero = "0";
			string sHourS;
			if (milHour >= 1000)
			{
				sHourS = sHour.substr(0, 1);
			}
			else
			{
				sHourS = zero + (sHour.substr(0, 1));
			}
			string sMinute = sHour.substr(2, 3);

			cout << "Hour: " << sHourS << endl;
			cout << "Minute: " << sMinute << endl;
			cout << "Second: " << milSecond;
		}
		void SetTime(int hour, int second)
		{
			if (hour > 2359)
			{
				exit(0);
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				exit(0);
			}
			else
			{
				milSecond = second;
			}
			string sHour = to_string(milHour);
			string sSecond = to_string(milSecond);
			string zero = "0";
			string sHourS;
			if (milHour >= 1000)
			{
				sHourS = sHour.substr(0, 1);
			}
			else
			{
				sHourS = zero + (sHour.substr(0, 1));
			}
			string sMinute = sHour.substr(2, 3);

			cout << "Hour: " << sHourS << endl;
			cout << "Minute: " << sMinute << endl;
			cout << "Second: " << milSecond;
		}
		int GetHour()
		{
			return milHour;
		}
		int GetSecond()
		{
			return milSecond;
		}
	};

	class TimeClock : public MilTime
	{
	public:
		TimeClock operator-(TimeClock &time)
		{
			time.milHour = abs(this->GetHour() - time.GetHour());
			return *this;
		}
	};

	MilTime timeOne(2300, 10);
	MilTime timeTwo(1100, 20);
	int timeThree = timeOne.GetHour() - timeTwo.GetHour();

	cout << timeThree;

	return;
}

void FunctionSix()
{
	class PersonData
	{
	protected:
		string lastname;
		string firstname;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		void SetSurname(string name)
		{
			lastname = name;
		}
		void SetName(string name)
		{
			firstname = name;
		}
		void SetAddress(string add)
		{
			address = add;
		}
		void SetCity(string city)
		{
			this->city = city;
		}
		void SetState(string state)
		{
			this->state = state;
		}
		void SetZip(string zip)
		{
			this->zip = zip;
		}
		void SetPhone(string phone)
		{
			this->phone = phone;
		}
		string GetSurname()
		{
			return lastname;
		}
		string GetName()
		{
			return firstname;
		}
		string GetAddress()
		{
			return address;
		}
		string GetCity()
		{
			return city;
		}
		string GetState()
		{
			return state;
		}
		string GetZip()
		{
			return zip;
		}
		string GetPhone()
		{
			return phone;
		}
	};
	class CustomerData : public PersonData
	{
	protected:
		int customerNumber;
		bool mailingList;
	public:
		void SetNumber(int number)
		{
			customerNumber = number;
		}
		void SetMailingList(bool trial)
		{
			mailingList = trial;
		}
		int GetNumber()
		{
			return customerNumber;
		}
		bool GetMailing()
		{
			return mailingList;
		}
	};

	PersonData person;
}

void FunctionSeven()
{
	class PersonData
	{
	protected:
		string lastname;
		string firstname;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		void SetSurname(string name)
		{
			lastname = name;
		}
		void SetName(string name)
		{
			firstname = name;
		}
		void SetAddress(string add)
		{
			address = add;
		}
		void SetCity(string city)
		{
			this->city = city;
		}
		void SetState(string state)
		{
			this->state = state;
		}
		void SetZip(string zip)
		{
			this->zip = zip;
		}
		void SetPhone(string phone)
		{
			this->phone = phone;
		}
		string GetSurname()
		{
			return lastname;
		}
		string GetName()
		{
			return firstname;
		}
		string GetAddress()
		{
			return address;
		}
		string GetCity()
		{
			return city;
		}
		string GetState()
		{
			return state;
		}
		string GetZip()
		{
			return zip;
		}
		string GetPhone()
		{
			return phone;
		}
	};
	class CustomerData : public PersonData
	{
	protected:
		int customerNumber;
		bool mailingList;
	public:
		void SetNumber(int number)
		{
			customerNumber = number;
		}
		void SetMailingList(bool trial)
		{
			mailingList = trial;
		}
		int GetNumber()
		{
			return customerNumber;
		}
		bool GetMailing()
		{
			return mailingList;
		}
	};

	class PreferredCustomer : public CustomerData
	{
	protected:
		double purchaseAmount;
		double discountLevel;
	public:
		PreferredCustomer(double purchase, double discount)
		{
			if (purchase < 0)
			{
				exit(0);
			}
			else
			{
				purchaseAmount = purchase;
			}
			if (discount < 0)
			{
				exit(0);
			}
			else
			{
				discountLevel = discount;
			}
		}
		double discounts()
		{
			return purchaseAmount * (discountLevel / 100);
		}
	};
}
void FunctionEight()
{
	class BasicShapes
	{
	private:
		double area;
	public:
		double getArea()
		{
			return area;
		}
		virtual double calcArea() = 0;
	};

	class Circle : public BasicShapes
	{
	private:
		long int CenterX;
		long int CenterY;
		double Radius;
	public:
		Circle(int x, int y, double rad)
		{
			CenterX = x;
			CenterY = y;
			Radius = rad;
		}
		int GetX()
		{
			return CenterX;
		}
		int GetY()
		{
			return CenterY;
		}
		virtual double calcArea()
		{
			return 3.14159 * pow(Radius, 2.0);
		}
	};

	class Rectangle : public BasicShapes
	{
	private:
		long int width;
		long int length;
	public:
		Rectangle(int len, int wid)
		{
			width = wid;
			length = len;
		}
		int GetWidth()
		{
			return width;
		}
		int GetLength()
		{
			return length;
		}
		virtual double calcArea()
		{
			return width * length;
		}
	};
}

int main()
{
	int Choice;
	cout << "Input your choice from 1 to 8." << endl;
	cin >> Choice;
	switch (Choice)
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
	case 7:
		FunctionSeven();
		break;
	case 8:
		FunctionEight();
		break;
	default:
		exit(0);
		break;
	}
	system("PAUSE");
	return 0;
}
