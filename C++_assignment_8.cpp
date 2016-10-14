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
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <cctype>

using namespace std;

void FunctionOne ()
{
    int nNumberOne;
    int nNumberTwo;
    
    cout << "Please input 2 integers:" << endl;
    cin >> nNumberOne;
    cin >> nNumberTwo;
    
    if (nNumberOne > nNumberTwo)
    {
        cout << nNumberOne << " is larger than " << nNumberTwo << endl;
    }
    else
    {
        cout << nNumberTwo << " is larger than " << nNumberOne << endl;
    }
    
    return;
}

void FunctionTwo ()
{
    int nNumber;
    cout << "Please input number between 1 to 10:" << endl;
    cin >> nNumber;
    
    if(nNumber < 1 || nNumber > 10)
    {
        cout << "Invalid data, terminating program...";
        return;
    }
    
    switch (nNumber)
    {
        case 1:
            cout << "I" << endl;
            break;
        case 2:
            cout << "II" << endl;
            break;
        case 3:
            cout << "III" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V" << endl;
            break;
        case 6:
            cout << "VI" << endl;
            break;
        case 7:
            cout << "VII" << endl;
            break;
        case 8:
            cout << "VIII" << endl;
            break;
        case 9:
            cout << "IX" << endl;
            break;
        case 10:
            cout << "X" << endl;
            break;
        default:
            cout << "Invalid data, terminating program..." << endl;
            break;
    }
    
    return;
}

void FunctionThree ()
{
    int nDate;
    int nMonth;
    int nYear;
    
    cout << "Please input the date, month (1 to 12), and the year (last 2 digits), respectively:" << endl;
    cin >> nDate >> nMonth >> nYear;
    int nProduct = nDate * nMonth;
    
    if(nProduct == nYear)
    {
        cout << "Today is a magical day!" << endl;
    }
    else
    {
        cout << "Try your luck next time..." << endl;
    }
    return;
}

void FunctionFour ()
{
    int nLengthOne;
    int nWidthOne;
    int nLengthTwo;
    int nWidthTwo;
    
    cout << "Please input the length and the width for the first rectangle." << endl;
    cin >> nLengthOne >> nWidthOne;
    int nAreaOne = nLengthOne * nWidthOne;
    cout << "Please input the length and the width for the second rectangle." << endl;
    cin >> nLengthTwo >> nWidthTwo;
    int nAreaTwo = nLengthTwo * nWidthTwo;
    
    if(nAreaOne > nAreaTwo)
    {
        cout << "The first rectangle is larger than the second rectangle." << endl;
    }
    else if (nAreaOne < nAreaTwo)
    {
        cout << "The second rectangle is larger than the first rectangle." << endl;
    }
    else
    {
        cout << "Both of the rectangles are equal." << endl;
    }
    
    return;
}

void FunctionFive ()
{
    const int CnConstant = 703;
    const int CnBMIMax = 25;
    const int CnBMIMin = 18.5;
    int nMass;
    int nHeight;
    
    cout << "Input your weight in kilograms and it will be converted into pounds:" << endl;
    cin >> nMass;
    cout << "Input your height in centimeters and it will be converted into inches:" << endl;
    cin >> nHeight;
    
    float fConvertMass = nMass * 2.2;
    float fConvertHeight = nHeight * 0.4;
    float fSquareHeight = pow (fConvertHeight, 2.0);
    float fBMI = fConvertMass * (CnConstant / fSquareHeight);
    
    if (fBMI > CnBMIMax)
    {
        cout << "You are overweight." << endl;
    }
    else if (fBMI < CnBMIMin)
    {
        cout << "You are underweight." << endl;
    }
    else
    {
        cout << "You are ideal." << endl;
    }
    
    return;
}

void FunctionSix ()
{
    const float CfGravity = 9.81;
    int nMass;
    
    cout << "Please input the mass of the object in kilograms:" << endl;
    cin >> nMass;
    
    float nWeight = nMass * CfGravity;
    
    if(nWeight > 1000)
    {
        cout << "The item is too heavy." << endl;
    }
    else if (nWeight < 10)
    {
        cout << "The item is too light." << endl;
    }
    else
    {
        cout << "The item is fine.";
    }
    
    return;
}

void FunctionSeven ()
{
    int nSeconds;
    
    cout << "Please input the seconds:" << endl;
    cin >> nSeconds;
    if(nSeconds < 0)
    {
        abs (nSeconds);
    }
    
    float nMinutes = nSeconds / 60;
    float nHours = nSeconds / 3600;
    float nDays = nSeconds / 86400;
    
    if(nSeconds >= 60)
    {
        if(nMinutes == 1)
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nMinutes << " minute" << endl;
        }
        else
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nMinutes << " minutes" << endl;   
        }
    }
    else if(nSeconds >= 3600)
    {
        if(nHours == 1)
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nHours << " hour" << endl;
        }
        else
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nHours << " hours" << endl;    
        }
    }
    else if(nSeconds >= 86400)
    {
        if(nDays == 1)
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nDays << " day" << endl;
        }
        else
        {
            cout << "There are " << nSeconds << " seconds in " << setprecision(4) << nDays << " days" << endl;   
        }
    }
    
    return;
}

void FunctionEight ()
{
    string sColorOne;
    string sColorTwo;
    
    cout << "Please input the name of one of the three primary colors (red, blue, yellow)." << endl;
    getline(cin, sColorOne);
    getline(cin, sColorTwo);
    //putchar (tolower(sColorOne));
    //putchar (tolower(sColorTwo));
    
    if(sColorOne == "red" && sColorTwo == "blue")
    {
        system("COLOR O5");
        cout << "Purple" << endl;
    }
    else if(sColorOne == "red" && sColorTwo == "yellow")
    {
        system("COLOR OC");
        cout << "Orange" << endl;
    }
    else if(sColorOne == "blue" && sColorTwo == "yellow")
    {
        system("COLOR O2");
        cout << "Green" << endl;
    }
    else
    {
        cout << "Invalid primary color." << endl;
    }
    
    return;
}

void FunctionNine ()
{
    const int nPenny = 1;
    const int nNickel = 5;
    const int nDime = 10;
    const int nQuarter = 25;
    int nPennyAmount;
    int nNickelAmount;
    int nDimeAmount;
    int nQuarterAmount;
    
    cout << "Please input the amount of pennys, nickles, dimes, and quarters, respectively, to sum up into 1 dollar" << endl;
    cin >> nPennyAmount >> nNickelAmount >> nDimeAmount >> nQuarterAmount;
    
    int nDollar = (nPenny * nPennyAmount) + (nNickel * nNickelAmount) + (nDime + nDimeAmount) + (nQuarter + nQuarterAmount);
    
    if(nDollar == 100)
    {
        cout << "Congratulations!" << endl;
    }
    else
    {
        cout << "Try again..." << endl;
    }
    
    return;
}

void FunctionTen ()
{
    int nMonth;
    int nYear;
    
    cout << "Input the month (1 to 12) and the year, respectively." << endl;
    cin >> nMonth >> nYear;
    
    if(nYear % 100 == 0 && nYear % 400 == 0)
    {
        cout << "It is a leap year!" << endl;
    }
    else if(nYear % 100 != 0 && nYear % 4 == 0)
    {
        cout << "It is a leap year!" << endl;
    }
    else
    {
        cout << "It is not a leap year!" << endl;
    }
    
    return;
}

void FunctionEleven ()
{
    int nRandomValueOne = rand() % 998 + 1;
    int nRandomValueTwo = rand() % 998 + 1;
    int nSum = nRandomValueOne + nRandomValueTwo;
    int nResult;
    
    cout << " " << nRandomValueOne << endl << "+" << nRandomValueTwo << endl << "------" << endl;
    cin >> nResult;
    
    if (nResult != nSum)
    {
        cout << "The answer is wrong." << endl << "The result is $" << nSum << endl;
    }
    else
    {
        cout << "The answer is correct!" << endl;
    }
    
    return;
}

void FunctionTwelve ()
{
    const int nPrice = 99;
    int nPurchase;
    
    cout << "Input the number of purchase:" << endl;
    cin >> nPurchase;
    if(nPurchase < 0)
    {
        abs (nPurchase);
    }
    
    float fReducedPrice;
    
    if(nPurchase >= 10 || nPurchase <= 19)
    {
        fReducedPrice = (nPrice * nPurchase) - ((nPrice * nPurchase) * 0.2);
        cout << "Your total purchase is " << fReducedPrice << " with a discount of 20% off!" << endl;
    }
    else if(nPurchase >= 20 || nPurchase <= 49)
    {
        fReducedPrice = (nPrice * nPurchase) - ((nPrice * nPurchase) * 0.3);
        cout << "Your total purchase is " << fReducedPrice << " with a discount of 30% off!" << endl;
    }
    else if(nPurchase >= 50 || nPurchase <= 99)
    {
        fReducedPrice = (nPrice * nPurchase) - ((nPrice * nPurchase) * 0.4);
        cout << "Your total purchase is " << fReducedPrice << " with a discount of 40% off!" << endl;
    }
    else
    {
        fReducedPrice = (nPrice * nPurchase) - ((nPrice * nPurchase) * 0.5);
        cout << "Your total purchase is " << fReducedPrice << " with a discount of 50% off!" << endl;
    }
    
    return;
}

void FunctionThirteen ()
{
    int nPurchase;
    
    cout << "Input the amount of books purchased:" << endl;
    cin >> nPurchase;
    
    if(nPurchase < 0)
    {
        abs (nPurchase);
    }
    
    if (nPurchase == 0)
    {
        cout << "The customer earns 0 points" << endl;
    }
    else if (nPurchase == 1)
    {
        cout << "The customer earns 5 points" << endl;
    }
    else if (nPurchase == 2)
    {
        cout << "The customer earns 15 points" << endl;
    }
    else if (nPurchase == 3)
    {
        cout << "The customer earns 30 points" << endl;
    }
    else if (nPurchase == 4)
    {
        cout << "The customer earns 60 points" << endl;
    }
    
    return;
}

void FunctionFourteen ()
{
    int nBalance;
    int nChecks;
    float fCharge;
    const int nFeeOne = 10;
    
    cout << "Input the amount of balance and number of checks, respectively." << endl;
    cin >> nBalance >> nChecks;
    
    if(nBalance < 0)
    {
        cout << "Account is being overdrawn!" << endl;
        return;
    }
    
    if(nChecks < 0)
    {
        abs (nChecks);
    }
    
    if(nChecks < 20)
    {
        if(nBalance < 400)
        {
            fCharge += 15;
        }
        fCharge += nFeeOne;
        fCharge += 0.1;
        cout << "The total charge of the month is $" << fCharge << endl;
    }
    else if(nChecks >= 20 || nChecks <= 39)
    {
        if(nBalance < 400)
        {
            fCharge += 15;
        }
        fCharge += nFeeOne;
        fCharge += 0.08;
        cout << "The total charge of the month is $" << fCharge << endl;
    }
    else if(nChecks >= 40 || nChecks <= 59)
    {
        if(nBalance < 400)
        {
            fCharge += 15;
        }
        fCharge += nFeeOne;
        fCharge += 0.06;
        cout << "The total charge of the month is $" << fCharge << endl;
    }
    else
    {
        if(nBalance < 400)
        {
            fCharge += 15;
        }
        fCharge += nFeeOne;
        fCharge += 0.04;
        cout << "The total charge of the month is $" << fCharge << endl;
    }
    
    return;
}

void FunctionFifteen ()
{
    int nMass;
    int nDistance;
    float fPrice;
    
    cout << "Input the weight of the item and the distance (miles), respectively." << endl;
    cin >> nMass >> nDistance;
    
    if(nMass < 0 || nMass > 20)
    {
        cout << "Unacceptable weight, terminating program..." << endl;
        return;
    }
    
    if(nDistance < 10 || nDistance > 3000)
    {
        cout << "Unacceptable distance, terminating program..." << endl;
        return;
    }
    
    if(nMass <= 2)
    {
        fPrice = nDistance * 1.1;
    }
    else if(nMass > 2 || nMass < 6)
    {
        fPrice = nDistance * 2.2;
    }
    else if(nMass > 6 || nMass < 10)
    {
        fPrice = nDistance * 3.7;
    }
    else
    {
        fPrice = nDistance * 4.8;
    }
    cout << "The cost for delivering the item is $" << fPrice << endl;
    
    return;
}

void FunctionSixteen ()
{
    class Racer
    {
        public:
            string ssRacer;
            int snTime = 0;
    };
    
    Racer RacersName[3];
    
    cout << "Input 3 names of the racers:" << endl;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, RacersName[i].ssRacer);
    }
    cout << "Input 3 time required by each racers to finish the track:" << endl;
    for (int x = 0; x < 3; x++)
    {
        cin >> RacersName[x].snTime;
    }
    
    vector<int> vnRacer(RacersName, RacersName + (sizeof RacersName / sizeof RacersName[0]));
    sort (RacersName, RacersName + (sizeof RacersName / sizeof RacersName[0]));

    Racer NewRacerArray[3];
    copy (vnRacer.begin(), vnRacer.end(), NewRacerArray);
    
    for(int a = 0; a < 3; a++)
    {
        cout << a << ". " << NewRacerArray[a].ssRacer << " " << NewRacerArray[a].snTime << endl;
    }
    
    return;
}

void FunctionSeventeen ()
{
    class Vault
    {
        public:
            string ssName;
            int snYear;
            int snHeight;
    };
    
    Vault VaultersName[3];
    
    cout << "Input 3 names of the vaulters:" << endl;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, VaultersName[i].ssName);
    }
    cout << "Input 3 height of vault:" << endl;
    for (int x = 0; x < 3; x++)
    {
        cin >> VaultersName[x].snHeight;
        if(VaultersName[x].snHeight < 2 || VaultersName[x].snHeight > 5)
        {
            cout << "Terminating program..." << endl;
            return;
        }
    }
    cout << "Input 3 years:" << endl;
    for (int y = 0; y < 3; y++)
    {
        cin >> VaultersName[y].snYear;
    }
    
    vector<int> vnVaulters(VaultersName, VaultersName + (sizeof VaultersName / sizeof VaultersName[0]));
    sort (VaultersName, VaultersName + (sizeof VaultersName / sizeof VaultersName[0]));

    Vault NewVaultersArray[3];
    copy (vnVaulters.begin(), vnVaulters.end(), NewVaultersArray);
    
    for(int a = 0; a < 3; a++)
    {
        cout << a << ". " << NewVaultersArray[a].ssName << " " << NewVaultersArray[a].snYear << endl;
    }
    
    return;
}

void FunctionEighteen ()
{
    int nCalories;
    int nFat;
    
    cout << "Input the amount of calories and fat in a food, respectively:" << endl;
    cin >> nCalories >> nFat;
    
    if(nCalories < 0 || nFat < 0)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    int nFatCalories = nFat * 9;
    
    if(nFatCalories > nCalories)
    {
        cout << "Terminating program..." << endl;
        return;        
    }
    
    int nPercentage = (nFatCalories / nCalories) * 100;
    
    if(nPercentage < 30)
    {
        cout << "It has low calories" << endl;
    }
    else
    {
        cout << "It has high calories" << endl;
    }
    
    return;
}

void FunctionNineteen ()
{
    float fWavelength;
    
    cout << "Please input the object's wavelength:" << endl;
    cin >> fWavelength;
    
    if(fWavelength >= 0.01)
    {
        cout << "Radio waves" << endl;
    }
    else if(fWavelength < 0.01 || fWavelength >= 0.001)
    {
        cout << "Microwaves" << endl;
    }
    else if(fWavelength < 0.001 || fWavelength >= 0.0000007)
    {
        cout << "Infrared" << endl;
    }
    else if(fWavelength < 0.0000007 || fWavelength >= 0.0000004)
    {
        cout << "Visible light" << endl;
    }
    else if(fWavelength < 0.0000004 || fWavelength >= 0.00000008)
    {
        cout << "Ultraviolet" << endl;
    }
    else if(fWavelength < 0.00000008 || fWavelength >= 0.0000000001)
    {
        cout << "X-Ray" << endl;
    }
    else if(fWavelength < 0.0000000001)
    {
        cout << "Gamma ray" << endl;
    }
    else
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    return;
}

void FunctionTwenty ()
{
    int nMedium;
    int nDistance;
    
    cout << "What medium does the sound pass through? (input 1 - 3)" << endl;
    cout << "1. Air" << setw(7) << "2. Water" << setw(7) << "3. Steel" << endl;
    cin >> nMedium;
    
    if(nMedium < 0 || nMedium > 3)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    cout << "How thick is the medium, in feet?" << endl;
    cin >> nDistance;
    
    if(nDistance < 0)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    if(nMedium == 1)
    {
        cout << "It takes " << setprecision(4) << nDistance / 1100 << " seconds to pass through the medium." << endl;
    }
    else if(nMedium == 2)
    {
        cout << "It takes " << setprecision(4) << nDistance / 4900 << " seconds to pass through the medium." << endl;
    }
    else
    {
        cout << "It takes " << setprecision(4) << nDistance / 16400 << " seconds to pass through the medium." << endl;
    }
    
    return;
}

void FunctionTwentyone ()
{
    int nMedium;
    int nDistance;
    
    cout << "What gas does the sound pass through? (input 1 -4)" << endl;
    cout << "1. CO2" << setw(7) << "2. Air" << setw(7) << "3. He" << setw(7) << "4. H2" << endl;
    cin >> nMedium;
    
    if(nMedium < 0 || nMedium > 4)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    cout << "How thick is the medium, in meters?" << endl;
    cin >> nDistance;
    
    if(nDistance < 0)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    if(nMedium == 1)
    {
        float fTime = nDistance / 258;
        cout << "It takes " << setprecision(4) << fTime << " seconds to pass through the medium." << endl;
    }
    else if(nMedium == 2)
    {
        float fTime = nDistance / 331.5;
        cout << "It takes " << setprecision(4) << fTime << " seconds to pass through the medium." << endl;
    }
    else if (nMedium == 4)
    {
        float fTime = nDistance / 972;
        cout << "It takes " << setprecision(4) << fTime << " seconds to pass through the medium." << endl;
    }
    else
    {
        float fTime = nDistance / 1270;
        cout << "It takes " << setprecision(4) << fTime << " seconds to pass through the medium." << endl;
    }
    
    return;
}

void FunctionTwentytwo ()
{
    const int CnFreezeCOOH = -173;
    const int CnBoilCOOH = 172;
    const int CnFreezeHg = -38;
    const int CnBoilHg = 676;
    const int CnFreezeO2 = -362;
    const int CnBoilO2 = -306;
    const int CnFreezeH2O = 32;
    const int CnBoilH2O = 212;
    int nTemperature;
    
    cout << "Please input the temperature (Farenhiet):" << endl;
    cin >> nTemperature;
    
    if(nTemperature < CnFreezeCOOH)
    {
        cout << "Alcohol freezes." << endl;
    }
    if(nTemperature < CnFreezeHg)
    {
        cout << "Mercury freezes." << endl;
    }
    if(nTemperature < CnFreezeO2)
    {
        cout << "Oxygen freezes." << endl;
    }
    if(nTemperature < CnFreezeH2O)
    {
        cout << "Water freezes." << endl;
    }
    if(nTemperature > CnBoilCOOH)
    {
        cout << "Alcohol boils." << endl;
    }
    if(nTemperature > CnBoilHg)
    {
        cout << "Mercury boils." << endl;
    }
    if(nTemperature > CnBoilO2)
    {
        cout << "Oxygen boils." << endl;
    }
    if(nTemperature > CnBoilH2O)
    {
        cout << "Water boils." << endl;
    }
    
    return;
}

void FunctionTwentythree ()
{
    int nChoice;
    
    cout << "Geometry calculator" << endl;
    cout << "   " << "1. Circle's area" << endl;
    cout << "   " << "2. Rectangle's area" << endl;
    cout << "   " << "3. Triangle's area" << endl;
    cout << "   " << "4. Quit" << endl;
    
    cin >> nChoice;
    
    if(nChoice == 1)
    {
        const int PI = 3.14159;
        int nRadius;
        cout << "Input the radius:" << endl;
        cin >> nRadius;
        if (nRadius < 0)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        float fSquaredRadius = pow (nRadius, 2.0);
        float fArea = PI * fSquaredRadius;
        cout << fArea << endl;
    }
    if(nChoice == 2)
    {
        int nLength;
        int nWidth;
        cout << "Input the length and the width, respectively:" << endl;
        cin >> nLength >> nWidth;
        if (nLength < 0 || nWidth < 0)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        int nArea = nLength * nWidth;
        cout << nArea << endl;
    }
    if(nChoice == 3)
    {
        int nBase;
        int nHeight;
        cout << "Input the base and the heigth, respectively:" << endl;
        cin >> nBase >> nHeight;
        if (nBase < 0 || nHeight < 0)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        float fArea = (nBase * nHeight) / 3;
        cout << fArea << endl;
    }
    
    if(nChoice <= 0 || nChoice > 3)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    return;
}

void FunctionTwentyfour()
{
    float fHours;
    float fMinute;
    float fStartingTime;
    float fSpent;
    
    cout << "Input the starting time:" << endl;
    cin >> fStartingTime;
    fMinute = modf(fStartingTime, &fHours);
    printf("%f = %f + %f \n", fStartingTime, fHours, fMinute);
    cout << "Input the time spent:" << endl;
    cin >> fSpent;
    
    if(fMinute < 0 || fMinute > 59)
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    if(fHours >= 0 || fHours <= 6)
    {
        cout << "You have to pay $" << fSpent * 0.05 << endl;
    }
    else if(fHours >= 7 || fHours <= 19)
    {
        cout << "You have to pay $" << fSpent * 0.45 << endl;
    }
    else if(fHours >= 20 || fHours <= 23)
    {
        cout << "You have to pay $" << fSpent * 0.20 << endl;
    }
    else
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    return;
}

void FunctionTwentyfive ()
{
    int nTimeSpent;
    int nChoice;
    float fCost = 0;
    
    cout << "Which package do you use?" << endl;
    cout << "input 1 to 3, which represents A to C" << endl;
    cin >> nChoice;
    cout << "How long did you use the service, in minutes?" << endl;
    cin >> nTimeSpent;
    
    if(nChoice == 1)
    {
        fCost += 39.99;
        if(nTimeSpent > 450)
        {
            fCost = fCost * ((nTimeSpent - 450) * 0.45);
        }
        cout << "You have to pay $" << fCost << endl;
    }
    else if(nChoice == 2)
    {
        fCost += 59.99;
        if(nTimeSpent > 900)
        {
            fCost = fCost * ((nTimeSpent - 900) * 0.40);
        }
        cout << "You have to pay $" << fCost << endl;
    }
    else if(nChoice == 3)
    {
        fCost += 69.99;
        cout << "You have to pay $" << fCost << endl;
    }
    else
    {
        cout << "Terminating program..." << endl;
        return;
    }
    
    return;
}

void FunctionTwentysix ()
{
    int nTimeSpent;
    int nChoice;
    int nTimeSample = 2000;
    float fCost = 0;
    
    cout << "Which package do you use?" << endl;
    cout << "input 1 to 3, which represents A to C" << endl;
    cin >> nChoice;
    cout << "How long did you use the service, in minutes?" << endl;
    cin >> nTimeSpent;
    
    if(nChoice == 1)
    {
        fCost += 39.99;
        if(nTimeSpent > 450)
        {
            fCost = fCost * ((nTimeSpent - 450) * 0.45);
        }
        cout << "You have to pay $" << fCost << endl;
        float nASample = 39.99 + ((nTimeSample - 450) * 0.40);
        float nBSample = 59.99 + ((nTimeSample - 900) * 0.40);
        float nDifference = nBSample - nASample;
        cout << "If you bought the package B, you could have save up to $" << nDifference << " compare to package A." << endl;
        cout << "Note: tested when using the service for 2000 minutes." << endl;
    }
    else if(nChoice == 2)
    {
        fCost += 59.99;
        if(nTimeSpent > 900)
        {
            fCost = fCost * ((nTimeSpent - 900) * 0.40);
        }
        cout << "You have to pay $" << fCost << endl;
        float nBSample = 59.99 + ((nTimeSample - 450) * 0.40);
        float nDifference = nBSample - 69.99;
        cout << "If you bought the package C, you could have save up to $" << nDifference << " compare to package B." << endl;
        cout << "Note: tested when using the service for 2000 minutes." << endl;
    }
    else if(nChoice == 3)
    {
        fCost += 69.99;
        cout << "You have to pay $" << fCost << endl;
    }
    else
    {
        cout << "Terminating program..." << endl;
        return;
    }
}

void FunctionTwentyseven ()
{
    string sMonth;
    int nMinuteSpent;
    int nHourSpent;
    
    string January = "January";
    string Febuary = "Febuary";
    string March = "March";
    string April = "April";
    string May = "May";
    string June = "June";
    string July = "July";
    string August = "August";
    string September = "September";
    string October = "October";
    string November = "November";
    string December = "December";
    
    cout << "Input the month in words (first letter must be capitalized)." << endl;
    getline(cin, sMonth);
    cout << "Input the minutes spent." << endl;
    cin >> nMinuteSpent;
    nHourSpent = nMinuteSpent / 60;
    
    if(!sMonth.compare(January))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(Febuary))
    {
        if(nHourSpent > 672)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(March))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(April))
    {
        if(nHourSpent > 720)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(May))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(June))
    {
        if(nHourSpent > 720)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(July))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(August))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(September))
    {
        if(nHourSpent > 720)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(October))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(November))
    {
        if(nHourSpent > 720)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    if(!sMonth.compare(December))
    {
        if(nHourSpent > 744)
        {
            cout << "Terminating program..." << endl;
            return;
        }
        else
        {
            cout << "You are fine" << endl;
        }
    }
    
    return;
}

int main ()
{
    srand(time(NULL));
    int nChoices;
    cout << "Please choose between 1 to 24 to see the function." << endl;
    cin >> nChoices;
    switch(nChoices)
    {
        case 1:
            FunctionOne ();
            break;
        case 2:
            FunctionTwo ();
            break;
        case 3:
            FunctionThree ();
            break;
        case 4:
            FunctionFour ();
            break;
        case 5:
            FunctionFive ();
            break;
        case 6:
            FunctionSix ();
            break;
        case 7:
            FunctionSeven ();
            break;
        case 8:
            FunctionEight ();
            break;
        case 9:
            FunctionNine ();
            break;
        case 10:
            FunctionTen ();
            break;
        case 11:
            FunctionEleven ();
            break;
        case 12:
            FunctionTwelve ();
            break;
        case 13:
            FunctionThirteen ();
            break;
        case 14:
            FunctionFourteen ();
            break;
        case 15:
            FunctionFifteen ();
            break;
        case 16:
            FunctionSixteen ();
            break;
        case 17:
            FunctionSeventeen ();
            break;
        case 18:
            FunctionEighteen ();
            break;
        case 19:
            FunctionNineteen ();
            break;
        case 20:
            FunctionTwenty ();
            break;
        case 21:
            FunctionTwentyone ();
            break;
        case 22:
            FunctionTwentytwo ();
            break;
        case 23:
            FunctionTwentythree ();
            break;
        case 24:
            FunctionTwentyfour ();
            break;
        case 25:
            FunctionTwentyfive ();
            break;
        case 26:
            FunctionTwentysix ();
            break;
        case 27:
            FunctionTwentyseven ();
            break;          
        default:
            cout << "Invalid value, terminating program..." << endl;
            break;
    }
    return 0;
}