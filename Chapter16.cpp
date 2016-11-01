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
	class InvalidDay
	{};

	class InvalidMonth
	{};

	class Date
	{
	private:
		int cnMonth;
		int cnDay;
		int cnYear;
	public:
		Date(int month, int day, int year)
		{
			if (month > 12 || month < 1)
			{
				throw  InvalidMonth();
			}
			else
			{
				cnMonth = month;
			}
			if (day > 31 || day < 1)
			{
				throw InvalidDay();
			}
			else
			{
				cnDay = day;
			}
			cnYear = year;
		}
		Date()
		{
			cnMonth = 0;
			cnDay = 0;
			cnYear = 0;
		}
		void SetMonth(int month)
		{
			if (month > 12 || month < 1)
			{
				throw  InvalidMonth();
			}
			else
			{
				this->cnMonth = month;
			}
		}
		void SetDay(int day)
		{
			if (day > 31 || day < 1)
			{
				throw InvalidDay();
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

	try
	{
		Date date(33, 11, 1997);
	}
	catch (InvalidDay())
	{
		cerr << "Invalid day" << endl;
		exit(0);
	}
	catch (InvalidMonth())
	{
		cerr << "Invalid month" << endl;
		exit(0);
	}
	catch (...)
	{
		cerr << "Invalid error" << endl;
		exit(0);
	}

	return;
}

void FunctionTwo()
{
	class BadHour
	{};

	class BadSeconds
	{};

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
				throw BadHour();
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				throw BadSeconds();
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
				throw BadHour();
			}
			else
			{
				milHour = hour;
			}
			if (second < 0 || second > 59)
			{
				throw BadSeconds();
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
	
	try
	{
		MilTime time(2400, 40);
	}
	catch (BadHour())
	{
		cerr << "Invalid hour" << endl;
		exit(0);
	}
	catch (BadSeconds())
	{
		cerr << "Invalid second" << endl;
		exit(0);
	}
	catch (...)
	{
		cerr << "Invalid error" << endl;
		exit(0);
	}

	return;
}

template<typename temp>
temp abs(temp number)
{
	if (number < 0)
	{
		cout << number *= -1;
		return number *= -1;
	}
	else
	{
		cout << number *= 1;
		return number *= 1;
	}
}

void FunctionThree()
{
	cout << "Please input an integer" << endl;
	int num;
	cin >> num;
	abs(num);
}


template<typename temp>
temp total(temp x, temp y, temp z)
{
	return x + y + z;
}


void FunctionFour()
{
	float a, b, c;
	cout << "Input 3 numbers" << endl;
	cin >> a >> b >> c;
	total(a, b, c);
}

template<typename temp>
temp Max(temp x, temp y)
{
	return x > y ? x : y;
}

template<typename temp>
temp Min(temp x, temp y)
{
	return x < y ? x : y;
}

void FunctionFive()
{
	cout << "Input 2 numbers" << endl;
	int NumOne, NumTwo;
	cin >> NumOne >> NumTwo;
	Max(NumOne, NumTwo);
	Min(NumOne, NumTwo);
}

void FunctionSix()
{
	class InvalidScore
	{};

	class TestScore
	{
	private:
		int nScore;
	public:
		TestScore(int score)
		{
			if (score > 100 || score < 0)
			{
				throw InvalidScore();
			}
			else
			{
				nScore = score;
			}
		}
	};

	try
	{
		TestScore score(110);
	}
	catch (InvalidScore())
	{
		cerr << "Invalid score" << endl;
		exit(0);
	}
	catch (...)
	{
		cerr << "Invalid error" << endl;
		exit(0);
	}
}

template<class temp>
class SimpleVector
{
protected:
	vector<temp> elements;
public:
	void push(temp x)
	{
		elements.push_back(x);
	}
	void pop()
	{
		elements.pop_back();
	}
};

void FunctionSeven()
{
	SimpleVector<int> nArray;
	nArray.push(10);
	nArray.push(11);
	nArray.pop();
}


template<class temp>
class SimpleVectorTwo
{
protected:
	vector<temp> elements;
public:
	void push(temp x)
	{
		elements.push_back(x);
	}
	void pop()
	{
		elements.pop_back();
	}
};

template<class temp>
class SortVector : public SimpleVectorTwo<temp>
{
public:

	void SortAscend()
	{
		elements.sort();
	}
};

void FunctionEight()
{
	SortVector<int> nArray;
	nArray.push(10);
	nArray.push(11);
	nArray.push(12);
}

int main()
{
	int nChoices;
	cout << "Please choose between 1 to 24 to see the function." << endl;
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
	case 7:
		FunctionSeven();
		break;
	case 8:
		FunctionEight();
		break;
	default:
		exit(0);
	}
	system("PAUSE");
	return 0;
}
