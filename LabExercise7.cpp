#include<iostream>
#include<cstdlib>

using namespace std;

void randInitArray(int x[], int s)
{
    for(int i = 0; i < s; i++)
    {
        x[i] = rand() % 14 + 0;
    }
}
void dispArrayContents(int x[], int s)
{
    for(int i = 0; i < s; i++)
    {
        x[i];
        cout<< x [i] << " ";
    }
}
bool isFib(int x)
{
    int seq1 = 0;
    int seq2 = 1;
    int seq3 = seq1 + seq2;

    bool Fib = 0;

    while (seq3 <=  x)
    {
        if(seq3 == x)
        {
            Fib = true;
            break;
        }
        seq1 = seq2;
        seq2 = seq3;
        seq3 = seq1 + seq2;
    }
    return Fib;
}
int arrayFibCtr(int x[], int s)
{
    int ctr = 0;

    for(int i = 0; i < s; i++)
    {
        if(isFib(x[i]) == 1)
        {
            ctr = ctr + 1;
        }
    }
    return ctr;
}
int main()
{
    int x[15];
    int s = 15;

    randInitArray(x,s);
    cout<<"Array Contents:";
    dispArrayContents(x,s);
    cout<<endl<<"Total Fibonacci Numbers:"<<arrayFibCtr(x,s);
}
