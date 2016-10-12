/*Vincent Alexander Seliang
 *CS02
 *2001585562*/

#include <iostream>
#include <fstream>
#include <istream>
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
#include <cctype>

using namespace std;

float FunctionOne ()
{
    float fGallonUsed;
    float fMiles;
    cout << "The amount of fuel used" << endl;
    cin >> fGallonUsed;
    cout << "Miles driven" << endl;
    cin >> fMiles;
    float fMilesPerGallon = fMiles / fGallonUsed;
    cout << fMilesPerGallon << " miles per gallon" << endl;
    return 0.0;
}

int FunctionTwo ()
{
    int nClassA = 15;
    int nClassB = 12;
    int nClassC = 9;
    int nAAmount;
    int nBAmount;
    int nCAmount;
    cout << "How many would you like to purchase class A's ticket?" << endl;
    cin >> nAAmount;
    cout << "How many would you like to purchase class B's ticket?" << endl;
    cin >> nBAmount;
    cout << "How many would you like to purchase class C's ticket?" << endl;
    cin >> nCAmount;
    int nTotal = (nClassA * nAAmount) + (nClassB * nBAmount) + (nClassC * nCAmount);
    cout << "The total is $" << nTotal << endl;
    return 0;
}

float FunctionThree ()
{
    float nScoreOne;
    float nScoreTwo;
    float nScoreThree;
    float nScoreFour;
    float nScoreFive;
    cout << "Please input 5 scores:" << endl;
    cin >> nScoreOne >> nScoreTwo >> nScoreThree >> nScoreFour >> nScoreFive;
    float nScore [] = {nScoreOne, nScoreTwo, nScoreThree, nScoreFour, nScoreFive};
    int nArraySize = sizeof(nScore) / sizeof(nScore[0]);
    float nAccumulator = 0;
    for (int i = 0; i < nArraySize; i++)
    {
        nAccumulator += nScore[i];
    }
    float nAverage = nAccumulator / nArraySize;
    cout << "The average score is" << nAverage << endl;
    return 0.0;
}

void FunctionFour ()
{
    float nRainFallOne;
    float nRainFallTwo;
    float nRainFallThree;
    string sMonthOne;
    string sMonthTwo;
    string sMonthThree;
    cout << "Please input 3 months' name: " << endl;
    getline (cin, sMonthOne);
    getline (cin, sMonthTwo);
    getline (cin, sMonthThree);
    string sMonth[] = {sMonthOne, sMonthTwo, sMonthThree};
    cout << "Please input 3 height of rain fall in each month:" << endl;
    cin >> nRainFallOne >> nRainFallTwo >> nRainFallThree;
    float nRainFall [] = {nRainFallOne, nRainFallTwo, nRainFallThree};
    int nRainFallSize = sizeof(nRainFall) / sizeof(nRainFall[0]);
    for (int i = 0; i < nRainFallSize; i++)
    {
        cout << "The average rainfall for " << sMonth[i] << " is " << nRainFall[i] << endl;
    }
    return;
}

float FunctionFive ()
{
    int nBoys;
    int nGirls;
    cout << "How many boys are in your class?" << endl;
    cin >> nBoys;
    cout << "How many girls are in your class?" << endl;
    cin >> nGirls;
    int nTotal = nBoys + nGirls;
    int nPercent = 100;
    float fBoys = (nBoys / nTotal) * nPercent;
    float fGirls = (nGirls / nTotal) * nPercent;
    cout << "Boys cover " << fBoys << "% of the class." << endl;
    cout << "Girls cover " << fGirls << "% of the class." << endl;
    return 0.0;
}

float FunctionSix ()
{
    const float fSugar = 0.03125;
    const float fButter = 0.02083;
    const float fFlour = 0.05728;
    int nNumberOfCookies;
    cout << "How many cookies would you like to make?" << endl;
    cin >> nNumberOfCookies;
    float fSugarUsed = fSugar * nNumberOfCookies;
    float fButterUsed = fButter * nNumberOfCookies;
    float fFlourUsed = fFlour * nNumberOfCookies;
    cout << fSugarUsed << " cups of sugar will be use." << endl;
    cout << fButterUsed << " butters will be use." << endl;
    cout << fFlourUsed << " cups of flour will be used" << endl;
    return 0.0;
}

float FunctionSeven ()
{
    string sTitle;
    int nAdultPrice = 10;
    int nChildPrice = 6;
    int nAdultVisit;
    int nChildVisit;
    float fPercentage = 0.2;
    cout << "Please state the title of the movie." << endl;
    getline (cin, sTitle);
    cout << "How many adults watched the movie?" << endl;
    cin >> nAdultVisit;
    cout << "How many child watched the movie?" << endl;
    cin >> nChildVisit;
    int nGross = (nAdultPrice * nAdultVisit) + (nChildPrice * nChildVisit);
    float fCommission = nGross * fPercentage;
    float fProfit = nGross - fCommission;
    cout << "The theater earns $" << nGross << endl;
    cout << "The theater keeps $" << fProfit << endl;
    return 0.0;
}

float FunctionEight ()
{
    float fWidgetMass = 12.5;
    int nPallets;
    float fWidgetTotalMass;
    cout << "The mass of the pallet's mass." << endl;
    cin >> nPallets;
    cout << "The mass of the pallet and the stacked widgets." << endl;
    cin >> fWidgetTotalMass;
    if (fWidgetTotalMass < nPallets)
    {
        cout << "Invalid reasoning. Terminating program." << endl;
        return 0.0;
    }
    float nTotalMass = fWidgetTotalMass - nPallets;
    float fWidgetsStacked = nTotalMass / fWidgetMass;
    cout << "There are " << floor(fWidgetsStacked) << "on the pallet." << endl;
    return 0.0;
}

int FunctionNine ()
{
    int nCaloriesPerCookies = 30;
    int nCookiesEaten;
    cout << "How many cookies have you ate?" << endl;
    cin >> nCookiesEaten;
    int nTotalCalories = nCaloriesPerCookies * nCookiesEaten;
    cout << "You just consumed " << nTotalCalories << " calories." << endl;
    return 0;
}

float FunctionTen ()
{
    float fCost;
    const float fPercentage = 0.8;
    cout << "How much does it cost you to replace your property?" << endl;
    cin >> fCost;
    float fTotal = fCost * fPercentage;
    cout << "Insurance cost is $" << fTotal << endl;
    return 0.0;
}

float FunctionEleven ()
{
    float fInstallment;
    float fGas;
    float fInsurance;
    float fOil;
    float fTires;
    float fMaintanance;
    float fYear = 12.0;
    cout << "Input the monthly installment:" << endl;
    cin >> fInstallment;
    cout << "Input the gas cost:" << endl;
    cin >> fGas;
    cout << "Input the insurance cost:" << endl;
    cin >> fInsurance;
    cout << "Input the oil cost:" << endl;
    cin >> fOil;
    cout << "Input the tires cost:" << endl;
    cin >> fTires;
    cout << "Input the maintanance cost:" << endl;
    cin >> fMaintanance;
    float fMonthlyCost = fInstallment + fGas + fOil + fTires + fMaintanance;
    float fYearlyCost = fMonthlyCost * fYear;
    cout << "The monthly cost is $"  << fMonthlyCost << endl;
    cout << "The annual cost is $"  << fYearlyCost << endl;
    return 0.0;
}

float FunctionTwelve ()
{
    const float fConstant = 9/5;
    const int fConstantOne = 32;
    float fCelcius;
    cout << "Please input the temperature in celcius." << endl;
    cin >> fCelcius;
    float fConversion = (fConstant * fCelcius) + fConstantOne;
    cout << fConversion << "Farenhiet" << endl;
    return 0.0;
}

float FunctionThirteen ()
{
    const float YEN_TO_DOLLAR =98.93;
    const float EUROS_TO_DOLLAR = 0.74;
    float nDollars;
    cout << "Please input the amount of dollar to be converted." << endl;
    cin >> nDollars;
    float nYen = nDollars * YEN_TO_DOLLAR;
    float nEuro = nDollars * EUROS_TO_DOLLAR;
    cout << nYen << " yen" << endl;
    cout << nEuro << " euros" << endl;
    return 0.0;
}

float FunctionFourteen ()
{
    float fGross;
    const float fCountryTax = 0.02;
    const float fStateTax = 0.04;
    float fNetSales = fGross / (1 + fCountryTax + fStateTax);
    float fCTaxed = fGross / (1 + fCountryTax);
    float fSTaxed = fGross / (1 + fStateTax);
    float fSaleTax = fCTaxed + fSTaxed;
    string sMonth;
    cout << "Input the month:" << endl;
    getline(cin, sMonth);
    cout << "Month: " << sMonth << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "-";
    }
    cout << "Gross sales: $" << fGross << endl;
    cout << "Net sales: $" << fNetSales << endl;
    cout << "National tax amount: $" << fCTaxed << endl;
    cout << "State tax amount: $" << fSTaxed << endl;
    cout << "Sale tax amount: $" << fSaleTax << endl;
    return 0.0;
}

float FunctionFifteen ()
{
    const float fTax = 0.6;
    const float fAssessmentPercentage = (0.75 / 100);\
    float fRealValue;
    cout << "Input the price of the property:" << endl;
    cin >> fRealValue;
    float fTaxAmount = fRealValue * fTax;
    float fAssessmentAmount = fTaxAmount * fAssessmentPercentage;
    cout << "The assessment value is $" << fAssessmentAmount << endl;
    cout << "The tax value is $" << fTaxAmount << endl;
    return 0.0;
}

float FunctionSixteen ()
{
    const float fTaxPercentage = (94800 / 158000) * 100;
    float fActualValue;
    float fTaxRate;
    int nDeduction = 5000;
    const float nQuarterly = 0.25;
    cout << "Input the actual value and the tax rate, respectively." << endl;
    cin >> fActualValue >> fTaxRate;
    float fTaxDue = (((fActualValue * fTaxPercentage) * fTaxRate) - nDeduction);
    cout << "The annual payment is $" << fTaxDue << endl;
    float fTotalDue = fTaxDue * nQuarterly;
    cout << "The quarterly payment is $" << fTotalDue << endl;
    return 0.0;
}

int FunctionSeventeen ()
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
}

int FunctionEighteen ()
{
    float fPrincipal;
    float fRate;
    int nTime;
    cout << "Input the principal:" << endl;
    cin >> fPrincipal;
    cout << "Input the rate:" << endl;
    cin >> fRate;
    cout << "Input the time:" << endl;
    cin >> nTime;
    float fPartOne = pow(1 + (fRate / nTime), nTime);
    float fAmount = fPrincipal * fPartOne;
    cout << "Interest rate:" << setw(20) << fRate << endl;
    cout << "Principal:" << setw(20) << fPrincipal << endl;
    cout << "Years:" << setw(20) << nTime << endl;
    cout << "Amount:" << setw(20) << fAmount << endl;
    return 0;
}

int FunctionNineteen ()
{
    float fMonthlyRate;
    float fLoan;
    int nPaymentOccured;
    cout << "Input the monthly rate:" << endl;
    cin >> fMonthlyRate;
    cout << "Input the number of payment:" << endl;
    cin >> nPaymentOccured;
    cout << "Input the loan amount:" << endl;
    cin >> fLoan;
    float fPartOne = pow((1 + fMonthlyRate), nPaymentOccured);
    float fPaymentTotal = ((fMonthlyRate * fPartOne) / (fPartOne - 1)) * fLoan;
    cout << "Loan amount:" << setw(20) << "$" << fLoan << endl;
    cout << "Monthly interest rate:" << setw(20) << fMonthlyRate << endl;
    cout << "Number of payment:" << setw(20) << nPaymentOccured << endl;
    cout << "Monthly payment:" << setw(20) << "$" << fPaymentTotal << endl;
    cout << "Amount paid back:" << setw(20) << "$" << (fPaymentTotal * nPaymentOccured) << endl;
    cout << "Interest paid:" << setw(20) << "$" << (fPaymentTotal * nPaymentOccured) - fLoan << endl;
    return 0;
}

int FunctionTwenty ()
{
    float fDiameter;
    cout << "Input the diameter of pizza:" << endl;
    cin >> fDiameter;
    float fRadius = fDiameter / 2;
    float fSliceSize = 14.125;
    const float PI = 3.14159;
    float fSquaredRadius = (fRadius, 2.0);
    float fArea = PI * fSquaredRadius;
    float fNumberOfSlices = fArea / fSliceSize;
    if (fNumberOfSlices > 10)
    {
        cout << "There are" << setw(3) << fNumberOfSlices << " slices" << endl;    
    }
    else
    {
        cout << "There are" << setw(2) << fNumberOfSlices << " slices" << endl;    
    }
    return 0;
}

int FunctionTwentyone ()
{
    float fDiameter;
    cout << "Input the diameter of pizza:" << endl;
    cin >> fDiameter;
    float fRadius = fDiameter / 2;
    float fSliceSize = 14.125;
    const float PI = 3.14159;
    float fSquaredRadius = (fRadius, 2.0);
    float fArea = PI * fSquaredRadius;
    float fNumberOfSlices = fArea / fSliceSize;
    float nPeople;
    cout << "Input the number of people:" << endl;
    cin >> nPeople;
    const int nNumberOfPizzaEaten = 4;
    float nNumberOfPizza = fNumberOfSlices / (nPeople * nNumberOfPizzaEaten);
    cout << nNumberOfPizza << " pizzas is requires." << endl;
    return 0;
}

int FunctionTwentytwo()
{
    float fRadians;
    cout << "Please input an angle in radians:" << endl;
    cin >> fRadians;
    float fSine = sin(fRadians);
    float fCosine = cos(fRadians);
    float fTangent = tan(fRadians);
    cout << "The sine is " << setw(8) << fSine << endl;
    cout << "The cosine is " << setw(8) << fCosine << endl;
    cout << "The tangent is " << setw(8) << fTangent << endl;
    return 0;
}

int FunctionTwentythree ()
{
    int nStocks = 1000;
    float fSharePrice = 45.5;
    float fSharePriceNew = 56.9;
    float fCommissionPercentage = 0.02;
    float fTotalWorthBougth = nStocks * fSharePrice;
    float fCommissionAmountOne = fTotalWorthBougth * fCommissionPercentage;
    float fTotalWorthSold = nStocks * fSharePriceNew;
    float fCommissionAmountTwo = fTotalWorthSold * fCommissionPercentage;
    float fProfit = fCommissionAmountTwo - fCommissionAmountOne;
    float fProfitNet = fProfit - (fCommissionAmountTwo + fCommissionAmountOne);
    if(fProfitNet > 0)
    {
        cout << "The profit is $" << fProfitNet << endl;    
    }
    else
    {
        cout << "The lost is $" << abs(fProfitNet) << endl;    
    }
}

void FunctionTwentyfour ()
{
    string sName;
    int nAge;
    string sCity;
    string sCollege;
    string sProfession;
    string sAnimal;
    string sPet;
    cout << "Input your name:" << endl;
    getline(cin, sName);
    cout << "Input your age:" << endl;
    cin >> nAge;
    cout << "Input your city:" << endl;
    getline(cin, sCity);
    cout << "Input your college:" << endl;
    getline(cin, sCollege);
    cout << "Input your profession:" << endl;
    getline(cin, sProfession);
    cout << "Input an animal type:" << endl;
    getline(cin, sAnimal);
    cout << "Input a pet's name:" << endl;
    getline(cin, sPet);
    
    cout << "There was a person named " << sName << " who lived in " << sCity << "." << endl;
    cout << "At the age of " << nAge << " " << sName << " went to college at " << sCollege << "." << endl;
    cout << sName << " graduated and went to work as a " << sProfession << "." << endl;
    cout << "Then, " << sName << " adopted a(n) " << sAnimal << " named " << sPet << "." << endl;
    cout << "They both lived happily ever after!" << endl;
    
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
        default:
            cout << "Invalid value, terminating program..." << endl;
            break;
    }
    return 0;
}
