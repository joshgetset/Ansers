#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

struct student
{
    string studentName;
    double score;
};

void readFromRecord(student studScoreRec[])
{
    ifstream studScore;
    studScore.open("StudentScore.txt",ios::in);

    studScore >> studScoreRec[0].studentName >> studScoreRec[0].score;

    if(studScore.is_open())
    {
        int i = 1;
        while(!studScore.eof())
        {
            studScore >> studScoreRec[i].studentName >> studScoreRec[i].score;
            i++;
        }
    }
    studScore.close();
}

double recAverage (student studScoreRec[], int s)
{
    double total=0;
    double average;

    for(int i=0; i < s; i++)
    {
        total += studScoreRec[i].score;
    }

    average = total/s;
    return average;
}

double recSTDev(student studScoreRec[], int s)
{
    double ave = recAverage(studScoreRec, s);
    double sum=0;
    double vr;
    double std_dev;

    for(int i=0; i < s; i++)
    {
        sum += pow((studScoreRec[i].score-ave),2);
    }

    vr=sum/(s-1);
    std_dev = sqrt (vr);

    return std_dev;
}

void writeResultToFile(double ave, double stDev)
{
    ofstream outRec;
    outRec.open("scoresDescStat.txt", ios::out);

    if(outRec.is_open())
    {
        outRec<< "Average: " << ave << endl;
        outRec<< "Standard Deviation: " << stDev;
    }
    outRec.close();
}
int main()
{
    student studScore[7];
    int s = 7;

    readFromRecord(studScore);
    writeResultToFile(recAverage(studScore, s), recSTDev(studScore,s));
}
