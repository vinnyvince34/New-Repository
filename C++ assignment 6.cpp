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

int FunctionOne ()
{
    int nInputOne;
    int nInputTwo;
    cout << "Input 2 numbers: " << endl;
    cin >> nInputOne;
    cin >> nInputTwo;
    int nValues[2] = {nInputOne, nInputTwo};
    int nSize = 10;
    int nTotal = nValues[0] + nValues[1];
    cout << "The total is " << nTotal << endl;
    return 0;
}

float FunctionTwo ()
{
    float fSales = 8600000;
    float fPercentage = 0.58;
    float fTotalSalesByEast = fSales * fPercentage;
    cout << "The company generates $" << fSales << endl;
    cout << "The East division produces $" << fTotalSalesByEast;
    return 0.0;
}

float FunctionThree ()
{
    float fPurchase = 95;
    float fStateTax = 0.04;
    float fNationalTax = 0.02;
    float fTotal = fPurchase + (fPurchase * fStateTax) + (fPurchase * fNationalTax);
    cout << "The total purchase including tax is $ " << fTotal;
    return 0.0;
}

float FunctionFour ()
{
    float fPurchase = 88.67;
    float fTax = 0.0675;
    float fTaxed = fPurchase * fTax;
    float fTip = 0.20;
    float fTipped =  fPurchase * fTip;
    float fTotal = fPurchase + fTaxed + fTipped;
    cout << "The bill says $ " << setprecision(4) << fPurchase << endl;
    cout << "The total tax is $ " << setprecision(3) << fTaxed << endl;
    cout << "The amount of tip is $ " << setprecision(4) << fTipped << endl;
    cout << "The total amount is $ "  << setprecision(5) << fTotal << endl;
    return 0.0;
}

float FunctionFive ()
{
    int nArray[] = {28, 32, 37, 24, 33};
    int nArraySize = sizeof(nArray) / sizeof(nArray[0]);
    int nTemp;
    for (int i = 0; i < nArraySize; i++)
    {
        nTemp += nArray[i];
    }
    float nSum = nTemp / nArraySize;
    cout << "The sum is " << nSum;
    return 0.0;
}

int FunctionSix ()
{
    int nPayAmount = 2200.00;
    int nPayPeriod = 26;
    int nAnnualPay = nPayAmount * nPayPeriod;
    cout << "The total payment is $ " << nAnnualPay;
    return 0.0;
}

float FunctionSeven ()
{
    float nRise = 1.5;
    cout << "The sea level rised by " << nRise * 5 << " five years later.";
    cout << "The sea level rised by " << nRise * 7 << " seven years later.";
    cout << "The sea level rised by " << nRise * 10 << " ten years later.";
    return 0.0;
}

float FunctionEight ()
{
    float fItemList [] = {15.95, 24.95, 6.95, 12.95, 3.95};
    int fItemListSize = sizeof(fItemList)/sizeof(fItemList[0]);
    float fAccumulator = 0;
    float fTax = 0.07;
    for(int i = 0; i < fItemListSize; i++)
    {
        cout << "Item's price number " << i << " : $ " << fItemList[i] << endl;
    }
    for(int y = 0; y <=fItemListSize; y++)
    {
        fAccumulator += fItemList[y];
    }
    cout << "The subtotal is $ "  << setprecision(4) << fAccumulator << endl;
    float fTaxed = fAccumulator * fTax;
    cout << "The tax amount is $ " << setprecision(3) << fTaxed << endl;
    float fTotal = fAccumulator + fTaxed;
    cout << "The grand total is $ " << setprecision(4) << fTotal << endl;
    return 0.0;
}

int FunctionNine ()
{
    cout << "The size of a int data type is " << sizeof(int) << " byte" << endl;
    cout << "The size of a char data type is " << sizeof(char) << " byte" << endl;
    cout << "The size of a double data type is " << sizeof(double) << " byte" << endl;
    cout << "The size of a bool data type is " << sizeof(bool) << " byte" << endl;
    return 0;
}

int FunctionTen ()
{
    int nFuelGallon = 15;
    int nDistance = 375;
    int nMilesPerHour = nDistance / nFuelGallon;
    cout << nMilesPerHour << "gallons per mile" << endl;
    return 0;
}

int FunctionEleven ()
{
    int nFuelGallon = 20;
    float nDistanceTown = 23.5;
    float nDistanceHighway = 28.9;
    float nTotalFuel = (nFuelGallon * nDistanceTown) + (nFuelGallon * nDistanceHighway);
    cout << nTotalFuel << " gallons" << endl;
    return 0;
}

int FunctionTwelve ()
{
    int nFeet = 391876;
    int nFeetPerAcre = 43560;
    int nAcre = nFeet / nFeetPerAcre;
    cout << nAcre << " acres" << endl;
    return 0;
}

float FunctionThirteen ()
{
    float fCost = 14.95;
    float fProfitPercentage = 0.35;
    float fSellingPrice = fCost * fProfitPercentage;
    cout << "The selling price is $ " << fSellingPrice << endl;
    return 0;
}

void FunctionFourteen ()
{
    string sName = "Vincent Alexander Seliang";
    string sAddress = "Kelapa Gading";
    string sPhoneNumber = "081934108488";
    string sMajor = "CS";
    cout << "Name: " << sName << endl << "Address: " << sAddress << endl << "Phone Number: " << sPhoneNumber << endl << "Major: " << sMajor << endl;
}

void FunctionFifteen ()
{
    int nDot = 1;
    int nIndent = 6;
    int nLevel = 5;
    
    for (int i = 0; i <= nLevel; i++)
    {
        for(int y = 5; y >= i; y--)
        {
            cout << setw(nIndent - i);
        }
        for (int x = 0; x <= nDot; x++)
        {
            cout << "*";
        }
            cout << endl;
            nDot += 2;
    }
    return;
}

void FunctionSixteen ()
{
    int nDot = 0;
    int nIndent = 6;
    int nLevel = 5;
    
    for (int i = 0; i <= nLevel; i++)
    {
        for(int y = 5; y >= i; y--)
        {
            cout << setw(nIndent - i);
        }
        for (int x = 0; x <= nDot; x++)
        {
            cout << "*";
        }
            cout << endl;
            nDot += 2;
    }
    
    int nDotOne = 10;
    int nIndentOne = 1;
    int nLevelOne = 5;
    
    for (int i = 0; i <= nLevelOne; i++)
    {
        for(int y = 5; y >= i; y--)
        {
            cout << setw(nIndentOne + i);
        }
        for (int x = 0; x <= nDotOne; x++)
        {
            cout << "*";
        }
            cout << endl;
            nDotOne -= 2;
    }
    return;
}

int FunctionSeventeen ()
{
    int nPricePerStock = 35;
    int nStocks = 750;
    float nPercentage = 0.02;
    float nStocksWorth = nPricePerStock * nStocks;
    float nStockCommission = nStocksWorth * nPercentage;
    float nTotal = nStocksWorth * nStockCommission;
    cout << "The stock's worth is $ " << nStocksWorth << endl;
    cout << "The commission is $ " << nStockCommission << endl;
    cout << "The grand total is $ " << nTotal << endl;
    return 0;
}

int FunctionEighteen ()
{
    int nSurveyedPeopleOne = 16500;
    float nPercentageOne = 0.15;
    int nSurveyedPeopleTwo = nSurveyedPeopleOne * nPercentageOne;
    float nPercentageTwo = 0.58;
    int nSurveyedPeopleThree = nSurveyedPeopleTwo * nPercentageTwo;
    cout << "Approximately about " << nSurveyedPeopleTwo << " people bought one or more cans." << endl;
    cout << "Approximately about " << nSurveyedPeopleThree << " people prefer the citrus flavor." << endl;
    return 0;
}

int main ()
{
    int nChoice;
    cout << "Please input the number 1 to 18 to see the function's result." << endl;
    cin >> nChoice;
    switch (nChoice)
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
        default:
            cout << "That function does not exist. \nExiting program...";
            break;
    }
    return 0;
}
