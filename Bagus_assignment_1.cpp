// Win32Project1.cpp : Defines the entry point for the console application.
//
/*Vincent Alexander Seliang
*CS02
*2001585562*/

#include <iostream>
#include <iterator>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstddef>
#include <cstring>
#include <ctime>
#include <locale>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;


void FunctionOne()
{
	struct MovieData
	{
	public:
		string ssTitle;
		string ssDirector;
		int snYearReleased;
		int snDuration;
	};

	MovieData Movie[2];

	cout << "Input the movie's title, director, released year, and duration (in minute), respectively" << endl;
	for (int i = 0; i < 2; i++)
	{
		getline(cin, Movie[i].ssTitle);
		cin.ignore();
		getline(cin, Movie[i].ssDirector);
		cin.ignore();
		cin >> Movie[i].snYearReleased;
		cin >> Movie[i].snDuration;

		cout << "Movie " << i << endl;
		cout << "Title: " << Movie[i].ssTitle << endl;
		cout << "Director: " << Movie[i].ssDirector << endl;
		cout << "Year Released: " << Movie[i].snYearReleased << endl;
		cout << "Duration (minutes): " << Movie[i].snDuration << endl;
	}

	return;
}

void FunctionTwo()
{
	struct MovieData
	{
		string ssTitle;
		string ssDirector;
		int snYearReleased;
		int snDuration;
		int snCost;
		int snRevenue;
	};

	MovieData Movie[2];

	cout << "Input the movie's title, director, released year, and duration (in minute), respectively" << endl;
	for (int i = 0; i < 2; i++)
	{
		getline(cin, Movie[i].ssTitle);
		cin.ignore();
		getline(cin, Movie[i].ssDirector);
		cin.ignore();
		cin >> Movie[i].snYearReleased;
		cin >> Movie[i].snDuration;
		cin >> Movie[i].snCost;
		cin >> Movie[i].snRevenue;

		cout << "Movie " << i << endl;
		cout << "Title: " << Movie[i].ssTitle << endl;
		cout << "Director: " << Movie[i].ssDirector << endl;
		cout << "Year Released: " << Movie[i].snYearReleased << endl;
		cout << "Duration (minutes): " << Movie[i].snDuration << endl;
		cout << "Profit: $" << (Movie[i].snRevenue - Movie[i].snCost) << endl;
	}

	return;
}

void FunctionThree()
{
	struct Company
	{
		int snFirstQuarter;
		int snSecondQuarter;
		int snThirdQuarter;
		int snFourthQuarter;
	};

	Company TheCompany;

	cout << "Input 4 quarters of the sales." << endl;
	cin >> TheCompany.snFirstQuarter >> TheCompany.snSecondQuarter >> TheCompany.snThirdQuarter >> TheCompany.snFourthQuarter;
	if (TheCompany.snFirstQuarter < 0)
	{
		cout << "Terminating program..." << endl;
		return;
	}
	if (TheCompany.snSecondQuarter < 0)
	{
		cout << "Terminating program..." << endl;
		return;
	}
	if (TheCompany.snThirdQuarter < 0)
	{
		cout << "Terminating program..." << endl;
		return;
	}
	if (TheCompany.snFourthQuarter < 0)
	{
		cout << "Terminating program..." << endl;
		return;
	}

	int nSum = TheCompany.snFirstQuarter + TheCompany.snSecondQuarter + TheCompany.snThirdQuarter + TheCompany.snFourthQuarter;
	int nAverage = nSum / 4;

	cout << "The total sales is $" << nSum << endl;
	cout << "The average sales is $" << nAverage << endl;
	return;
}

void FunctionFour()
{
	struct Weather
	{
		int snTotalRainfall;
		int snMaxTemp;
		int snMinTemp;
		int snAverage;
	};

	Weather TheWeather[12];

	cout << "Enter the weather's data from month 1 to 12." << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << "Month " << i << endl;
		cout << "Rain fall:" << endl;
		cin >> TheWeather[i].snTotalRainfall;
		if (TheWeather[i].snTotalRainfall < 0)
		{
			abs(TheWeather[i].snTotalRainfall);
		}
		cout << "Month's maximum temperature:" << endl;
		cin >> TheWeather[i].snMaxTemp;
		if (TheWeather[i].snMaxTemp > 140)
		{
			cout << "Temperature is too high, terminating program..." << endl;
			return;
		}
		cout << "Month's minimum temperature:" << endl;
		cin >> TheWeather[i].snMinTemp;
		if (TheWeather[i].snMinTemp > -100)
		{
			cout << "Temperature is too low, terminating program..." << endl;
			return;
		}
		cout << "Average temperature:" << endl;
		int nAverage = (TheWeather[i].snMaxTemp + TheWeather[i].snMinTemp) / 2;
	}
	return;
}

void FunctionFive()
{
	struct Player
	{
		string ssPlayerName;
		int snPlayerNumber;
		int snScore;
	};

	Player players[12];

	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the player's name" << endl;
		getline(cin, players[i].ssPlayerName);
		cin.ignore();
		cout << "Enter the player's number" << endl;
		cin >> players[i].snPlayerNumber;
		if (players[i].snPlayerNumber < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the player's score" << endl;
		cin >> players[i].snScore;
		if (players[i].snScore < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
	}

	int nAccumulator = 0;

	for (int x = 0; x < 12; x++)
	{
		nAccumulator += players[x].snScore;
	}

	cout << "The total score is " << nAccumulator << endl;

    int temp = 0;
    int nCounter = 0;
    for(int x = 0; x < 5; x++)
    {
        if(players[x].snScore > temp)
        {
             temp = players[x].snScore;\
             nCounter++;
        }
    }
	
	cout << players[nCounter].ssPlayerName << ", number " << players[nCounter].snPlayerNumber << " has the highest score." << endl;
	return;
}

void FunctionSix()
{
	struct Account
	{
		string ssName;
		string ssCity;
		string ssTelephone;
		int snBalance;
		int snYear;
	};

	Account people[10];
	string sEmpty = "";
	int i;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter the person's name" << endl;
		getline(cin, people[i].ssName);
		cin.ignore();
		if (people[i].ssName.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's city" << endl;
		getline(cin, people[i].ssCity);
		cin.ignore();
		if (people[i].ssCity.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's phone number" << endl;
		getline(cin, people[i].ssTelephone);
		cin.ignore();
		if (people[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's balance" << endl;
		cin >> people[i].snBalance;
		if (people[i].snBalance < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's year of payment" << endl;
		cin >> people[i].snYear;
	}

	int nIndex;

	cout << "Input the index number" << endl;
	cin >> nIndex;

	if (nIndex < i)
	{
		cout << "Name: " << people[nIndex].ssName << endl;
		cout << "City: " << people[nIndex].ssCity << endl;
		cout << "Phone number: " << people[nIndex].ssTelephone << endl;
		cout << "Balance: " << people[nIndex].snBalance << endl;
		cout << "Year of payment: " << people[nIndex].snYear << endl;
	}
	else
	{
		cout << "Index does not exist..." << endl;
		return;
	}
	return;
}

void FunctionSeven()
{
	struct Account
	{
		string ssName;
		string ssCity;
		string ssTelephone;
		int snBalance;
		int snYear;
	};

	Account people[10];
	string sEmpty = "";

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the person's name" << endl;
		getline(cin, people[i].ssName);
		cin.ignore();
		if (people[i].ssName.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's city" << endl;
		getline(cin, people[i].ssCity);
		cin.ignore();
		if (people[i].ssCity.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's phone number" << endl;
		getline(cin, people[i].ssTelephone);
		cin.ignore();
		if (people[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's balance" << endl;
		cin >> people[i].snBalance;
		if (people[i].snBalance < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's year of payment" << endl;
		cin >> people[i].snYear;
	}

	string sName;

	cout << "Input the user's name" << endl;
	getline(cin, sName);

	for (int x = 0; x < 10; x++)
	{
		if (sName.compare(people[x].ssName) == 0)
		{
			cout << "Name: " << people[x].ssName << endl;
			cout << "City: " << people[x].ssCity << endl;
			cout << "Phone number: " << people[x].ssTelephone << endl;
			cout << "Balance: " << people[x].snBalance << endl;
			cout << "Year of payment: " << people[x].snYear << endl;
		}
		else
		{
			cout << "User does not exist..." << endl;
			return;
		}
	}
	return;
}

void FunctionEight()
{
	struct Bureau
	{
		string ssName;
		string ssTelephone;
		string ssTopic;
		int snFee;
	};

	Bureau Speaker[10];
	string sEmpty = "";
	int i;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter the person's name" << endl;
		getline(cin, Speaker[i].ssName);
		cin.ignore();
		if (Speaker[i].ssName.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's phone number" << endl;
		getline(cin, Speaker[i].ssTelephone);
		cin.ignore();
		if (Speaker[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's topic" << endl;
		getline(cin, Speaker[i].ssTopic);
		cin.ignore();
		if (Speaker[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's Fee" << endl;
		cin >> Speaker[i].snFee;
		if (Speaker[i].snFee < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
	}

	int nIndex;

	cout << "Input the index number" << endl;
	cin >> nIndex;

	if (nIndex < i)
	{
		cout << "Name: " << Speaker[i].ssName << endl;
		cout << "Phone number: " << Speaker[i].ssTelephone << endl;
		cout << "Topic: " << Speaker[i].ssTopic << endl;
		cout << "Fee: " << Speaker[i].snFee << endl;
	}
	else
	{
		cout << "Index does not exist..." << endl;
		return;
	}
	return;
}

void FunctionNine()
{
	struct Bureau
	{
		string ssName;
		string ssTelephone;
		string ssTopic;
		int snFee;
	};

	Bureau Speaker[10];
	string sEmpty = "";
	int i;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter the person's name" << endl;
		getline(cin, Speaker[i].ssName);
		cin.ignore();
		if (Speaker[i].ssName.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's phone number" << endl;
		getline(cin, Speaker[i].ssTelephone);
		cin.ignore();
		if (Speaker[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's topic" << endl;
		getline(cin, Speaker[i].ssTopic);
		cin.ignore();
		if (Speaker[i].ssTelephone.compare(sEmpty) == 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
		cout << "Enter the person's Fee" << endl;
		cin >> Speaker[i].snFee;
		if (Speaker[i].snFee < 0)
		{
			cout << "Terminating program..." << endl;
			return;
		}
	}

	string sTopic;

	cout << "Input the topic" << endl;
	getline(cin, sTopic);
	cin.ignore();

	for (int x = 0; x < 10; x++)
	{
		if (sTopic.compare(Speaker[x].ssTopic) == 0)
		{
			cout << "Name: " << Speaker[x].ssName << endl;
			cout << "Phone number: " << Speaker[x].ssTelephone << endl;
			cout << "Topic: " << Speaker[x].ssTopic << endl;
			cout << "Fee: " << Speaker[x].snFee << endl;
		}
		else
		{
			cout << "Index does not exist..." << endl;
			return;
		}
	}
	return;
}

void FunctionTen()
{
	enum Months
	{
		JANUARY,
		FEBUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};

	struct Weather
	{
		int snTotalRainfall;
		int snMaxTemp;
		int snMinTemp;
		int snAverage;
	};

	Months month;
	Weather TheWeather[12];

	cout << "Enter the weather's data from January to December." << endl;
	for (month = JANUARY; month < DECEMBER; month = static_cast<Months>(month + 1))
	{
		cout << "Month " << (month + 1) << endl;
		cout << "Rain fall:" << endl;
		cin >> TheWeather[month].snTotalRainfall;
		if (TheWeather[month].snTotalRainfall < 0)
		{
			abs(TheWeather[month].snTotalRainfall);
		}
		cout << "Month's maximum temperature:" << endl;
		cin >> TheWeather[month].snMaxTemp;
		if (TheWeather[month].snMaxTemp > 140)
		{
			cout << "Temperature is too high, terminating program..." << endl;
			return;
		}
		cout << "Month's minimum temperature:" << endl;
		cin >> TheWeather[month].snMinTemp;
		if (TheWeather[month].snMinTemp > -100)
		{
			cout << "Temperature is too low, terminating program..." << endl;
			return;
		}
		cout << "Average temperature:" << endl;
		int nAverage = (TheWeather[month].snMaxTemp + TheWeather[month].snMinTemp) / 2;
	}
	return;
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
	case 9:
		FunctionNine();
		break;
	case 10:
		FunctionTen();
		break;
	default:
		cout << "Function deos not exist, terminating program..." << endl;
		break;
	}
	return 0;
}
