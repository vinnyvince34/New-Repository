#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

ofstream outputFile;

float nJudgeOne;
float nJudgeTwo;
float nJudgeThree;
float nJudgeFour;
float nJudgeFive;
float nAccumulator = 0;
float nFinalScore;
float nJudgeScores [] = {nJudgeOne, nJudgeTwo, nJudgeThree, nJudgeFour, nJudgeFive};
int nArrayLength = sizeof(nJudgeScores) / sizeof(nJudgeScores[0]);
int y;
int t;
int nHighestValue;
int nLowestValue;

void getJudgeData ()
{
    cout << "Please input the scores for the contestant" << endl;
    for (int a = 0; a < nArrayLength; a++)
    {
        cout << "Judge " << a + 1 << "'s score: ";
        outputFile << "Judge " << a + 1 << "'s score: ";
        cin >> nJudgeScores [a];
        outputFile << nJudgeScores [a];
        if(nJudgeScores [a] < 0 || nJudgeScores [a] > 10)
        {
            cout << "Exiting program";
            return;
        }
    }
}

int findHighest ()
{
    nHighestValue = 0;
    for(int i = 0; i < nArrayLength; i++)
    {
        if(nHighestValue < nJudgeScores [i])
        {
            nHighestValue = nJudgeScores [i];
        }
    }
    for(y = 0; y < nArrayLength; y++)
    {
        if (nJudgeScores [y] == nHighestValue)
        {
            nJudgeScores [y] = nHighestValue;
        }
    }
    cout << "The highest score is " << nHighestValue << endl;
    outputFile <<  "The highest score is " << nHighestValue << endl;
    return nHighestValue;
}
    
int findLowest ()
{
    nLowestValue = nJudgeScores [0];
    for(int x = 0; x < nArrayLength; x++)
    {
        if(nLowestValue > nJudgeScores [x])
        {
            nLowestValue = nJudgeScores [x];
        }
    }
    for(t = 0; t < nArrayLength; t++)
    {
        if (nJudgeScores [t] == nLowestValue)
        {
            nJudgeScores [t] = nLowestValue;
        }
    }
    cout << "The lowest value is " << nLowestValue << endl;
    outputFile <<  "The lowest value is " << nLowestValue << endl;
    return nLowestValue;
}

void calcScore ()
{
    findHighest ();
    findLowest ();
    
    for(int u = 0; u <= nArrayLength; u++)
    {
        nAccumulator += nJudgeScores [u];
    }
    float nAfterCompute = nAccumulator - nHighestValue - nLowestValue;
    cout << "The accumulated points are: " << nAfterCompute << endl;
    outputFile << "The accumulated points are: " << nAfterCompute << endl;
    float nArrayLengthOne = nArrayLength - 2;
    nFinalScore = nAfterCompute / nArrayLengthOne;
    cout << "The contestant's final score is " << setprecision(3) << nFinalScore << endl;
    outputFile << "The contestant's final score is " << setprecision(3) << nFinalScore << endl;
    return;
}

int main ()
{
    outputFile.open("GroupAssignemt.txt");
    
    getJudgeData ();
    calcScore ();
    return 0;

    outputFile.close();
}
