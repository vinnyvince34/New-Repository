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
	class Number
	{
	private:
		int cnNumber;
		int cnTens[8] = { 20, 30, 40, 50, 60, 70, 80, 90 };
		string sLessThanTwenty[20] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
		string sTens[8] = { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
		string sHundred = "Hundred";
		string sThousand = "Thousand";
	public:
		Number(int number)
		{
			cnNumber = number;
			if (number >= 0 && number < 20)
			{
				cout << sLessThanTwenty[number] << endl;
			}
			else if (number >= 20 && number < 100)
			{
				int temp, diff;
				for (int i = 0; i < 8; i++) {
					if (cnTens[i] - number < 10 && cnTens[i] - number >= 0) {
						temp = i - 1;
						diff = cnTens[i] - number;
					}

				}
				cout << sTens[temp] + " " + sLessThanTwenty[diff] << endl;
			}
		}
		int GetNumber()
		{
			return cnNumber;
		}
	};
	return;
}

void FunctionTwo()
{
	class DayOfYear
	{
	private:
		int cnDay;
	public:
		DayOfYear(int day)
		{
			if (day >= 1 || day < 32)
			{
				cout << "January" << day;
			}
			if (day >= 32 || day < 60)
			{
				cout << "Febuary" << day - 28;
			}
			if (day >= 60 || day < 90)
			{
				cout << "March" << day - 59;
			}
			if (day >= 90 || day < 120)
			{
				cout << "April" << day - 89;
			}
			if (day >= 120 || day < 151)
			{
				cout << "May" << day - 119;
			}
			if (day >= 151 || day < 181)
			{
				cout << "June" << day - 150;
			}
			if (day >= 181 || day < 212)
			{
				cout << "July" << day - 180;
			}
			if (day >= 212 || day < 243)
			{
				cout << "August" << day - 211;
			}
			if (day >= 243 || day < 273)
			{
				cout << "September" << day - 242;
			}
			if (day >= 273 || day < 304)
			{
				cout << "October" << day - 272;
			}
			if (day >= 304 || day < 334)
			{
				cout << "November" << day - 303;
			}
			if (day >= 334 || day < 357)
			{
				cout << "December" << day - 333;
			}
		}
	};

	DayOfYear dateOne(100);
	DayOfYear dateTwo(10);
	DayOfYear dateThree(300);

	return;
}

void FunctionThree()
{
	class DayOfYear
	{
	private:
		int cnDay;
		string csMonth;
	public:
		DayOfYear(int day, string month)
		{
			string NameMonth = month;
			int NumberOfDays = day;
			if (NameMonth == "January" || NameMonth == "january")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "Febuary" || NameMonth == "febuary")
			{
				if (NumberOfDays > 0 && NumberOfDays < 29)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "March" || NameMonth == "march")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "April" || NameMonth == "april")
			{
				if (NumberOfDays > 0 && NumberOfDays < 31)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "May" || NameMonth == "may")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "June" || NameMonth == "june")
			{
				if (NumberOfDays > 0 && NumberOfDays < 31)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "July" || NameMonth == "july")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "August" || NameMonth == "august")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "September" || NameMonth == "september")
			{
				if (NumberOfDays > 0 && NumberOfDays < 31)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "October" || NameMonth == "october")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "November" || NameMonth == "november")
			{
				if (NumberOfDays > 0 && NumberOfDays < 31)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else if (NameMonth == "December" || NameMonth == "december")
			{
				if (NumberOfDays > 0 && NumberOfDays < 32)
				{
					cout << NameMonth << " " << NumberOfDays << endl;
					cnDay = NumberOfDays;
				}
				else
				{
					cout << "Terminating program..." << endl;
					exit(0);
				}
			}
			else
			{
				cout << "Terminating program..." << endl;
				exit(0);
			}
		}

		DayOfYear()
		{
			csMonth = "";
			cnDay = 0;
		}

		int GetDay()
		{
			return cnDay;
		}

		string GetMonth()
		{
			return csMonth;
		}
		
		DayOfYear operator++()
		{
			DayOfYear date;
			date.cnDay = (this->GetDay() + 1);
			cout << "Tomorrow is: ";
			cout << date.cnDay << endl;
			return date;
		}

		DayOfYear operator--()
		{
			DayOfYear date;
			date.cnDay = (this->GetDay() - 1);
			cout << "Yesterdat is: ";
			cout << date.cnDay << endl;
			return date;
		}
	};
	DayOfYear DayOne(23, "May");
	cout << "Today is ";
	cout << DayOne.GetMonth() << " " << DayOne.GetDay() << endl;
	DayOne ++;
	DayOne --;
	return;

	DayOfYear DayTwo(6, "October");
	cout << "Today is ";
	cout << DayTwo.GetMonth() << " " << DayTwo.GetDay() << endl;
	DayTwo ++;
	DayTwo --;
	return;
}

void FunctionFour()
{
	class NumDays
	{
	private:
		int cnHour;
		float cfDay;
	public:
		NumDays()
		{
			cnHour = 0;
			cfDay = 0.0;
		}
		NumDays(int hour)
		{
			cnHour = hour;
			cfDay = hour / 8;
			cout << "Hours  " << hour << endl;
			cout << "Days: " << cfDay << endl;
		}
		void SetHour(int hour)
		{
			cnHour = hour;
		}
		void SetDay(float day)
		{
			cfDay = day;
		}
		int GetHour()
		{
			return cnHour;
		}
		float GetDay()
		{
			return cfDay;
		}
		NumDays& operator+(NumDays& d)
		{
			NumDays date;
			date.cnHour = this->GetDay() + d.GetDay();
			float day = date.cnHour / 8;
			cout << "The sum of the time is " << date.cnHour << endl;
			cout << day << " days" << endl;
			return date;
		}
		NumDays& operator-(NumDays& d)
		{
			NumDays date;
			date.cnHour = this->GetDay() - d.GetDay();
			float day = date.cnHour / 8;
			cout << "The difference of the time is " << date.cnHour << endl;
			cout << day << " days" << endl;
			return date;
		}
		NumDays operator++()
		{
			NumDays date;
			date.cnHour = this->GetDay() + 1;
			float day = date.cnHour / 8;
			cout << "Hour " << date.cnHour << endl;
			cout << day << " days" << endl;
			return date;
		}
		NumDays operator--()
		{
			NumDays date;
			date.cnHour = this->GetDay() - 1;
			float day = date.cnHour / 8;
			cout << "Hour " << date.cnHour << endl;
			cout << day << " days" << endl;
			return date;
		}
	};

	//Note: I'm not sure which part is wrong, could you please explain
	//		it to me on Monday?

	NumDays DayOne(8);
	NumDays DayTwo(24);
	DayOne + DayTwo;
	DayTwo - DayOne;
	DayOne++;
	DayTwo--;
	return;
}

void FunctionFive()
{
	class Month
	{
	private:
		string csName;
		int cnMonthNumber;
	public:
		Month()
		{
			csName = "January";
			cnMonthNumber = 1;
		}
		Month(string name)
		{
			csName = name;
			if (csName == "January")
			{
				cnMonthNumber = 1;
			}
			else if (csName == "Febuary")
			{
				cnMonthNumber = 2;
			}
			else if (csName == "March")
			{
				cnMonthNumber = 3;
			}
			else if (csName == "April")
			{
				cnMonthNumber = 4;
			}
			else if (csName == "May")
			{
				cnMonthNumber = 5;
			}
			else if (csName == "June")
			{
				cnMonthNumber = 6;
			}
			else if (csName == "July")
			{
				cnMonthNumber = 7;
			}
			else if (csName == "August")
			{
				cnMonthNumber = 8;
			}
			else if (csName == "September")
			{
				cnMonthNumber = 9;
			}
			else if (csName == "October")
			{
				cnMonthNumber = 10;
			}
			else if (csName == "November")
			{
				cnMonthNumber = 11;
			}
			else if (csName == "December")
			{
				cnMonthNumber = 12;
			}
			else
			{
				cerr << "Terminating program..." << endl;
				exit(0);
			}
		}
		Month(int number)
		{
			cnMonthNumber = number;
			if (cnMonthNumber == 1)
			{
				csName = "January";
			}
			else if (cnMonthNumber == 2)
			{
				csName = "Febuary";
			}
			else if (cnMonthNumber == 3)
			{
				csName = "March";
			}
			else if (cnMonthNumber == 4)
			{
				csName = "April";
			}
			else if (cnMonthNumber == 5)
			{
				csName = "May";
			}
			else if (cnMonthNumber == 6)
			{
				csName = "June";
			}
			else if (cnMonthNumber == 7)
			{
				csName = "July";
			}
			else if (cnMonthNumber == 8)
			{
				csName = "August";
			}
			else if (cnMonthNumber == 9)
			{
				csName = "September";
			}
			else if (cnMonthNumber == 10)
			{
				csName = "October";
			}
			else if (cnMonthNumber == 11)
			{
				csName = "November";
			}
			else if (cnMonthNumber == 12)
			{
				csName = "December";
			}
			else
			{
				cout << "Terminating program..." << endl;
				exit(0);
			}
		}
		void setMonthNumber(int number)
		{
			cnMonthNumber = number;
		}
		void setMonthName(string name)
		{
			csName = name;
		}
		int getNumber()
		{
			return cnMonthNumber;
		}
		string getName()
		{
			return csName;
		}
		Month operator++()
		{
			Month month;
			month.cnMonthNumber = this->cnMonthNumber + 1;
			if (month.cnMonthNumber > 12)
			{
				int nDifference = this->cnMonthNumber - 12;
				this->setMonthNumber(nDifference);
				int nChecker = this->getNumber;
				Month monthCheck(nChecker);
				cout << monthCheck.getName() << endl;
			}
			else
			{
				int nStore = this->cnMonthNumber;
				this->setMonthNumber(nStore);
				int nChecker = this->getNumber;
				Month monthCheck(nChecker);
				cout << monthCheck.getName() << endl;
			}
		}
		Month operator--()
		{
			Month month;
			month.cnMonthNumber = this->cnMonthNumber - 1;
			if (month.cnMonthNumber < 1)
			{
				int nDifference = this->cnMonthNumber + 12;
				this->setMonthNumber(nDifference);
				int nChecker = this->getNumber;
				Month monthCheck(nChecker);
				cout << monthCheck.getName() << endl;
			}
			else
			{
				int nStore = this->cnMonthNumber;
				this->setMonthNumber(nStore);
				int nChecker = this->getNumber;
				Month monthCheck(nChecker);
				cout << monthCheck.getName() << endl;
			}
		}
	};

	Month monthOne(5);
	Month monthTwo("October");
	monthOne++;
	monthTwo--;
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
	default:
		cout << "Terminating program..." << endl;
		exit(0);
		break;
	}
	system("PAUSE");
	return 0;
}