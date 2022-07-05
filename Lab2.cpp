#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int total = 0;

    while(n < 100)
    {
        if(n % 5 == 0)
        {
            total += n;
        }
        if(n % 7 == 0)
        {
            total += n;
        }
        n++;
    }
    cout<<"Total:"<<total;
}
