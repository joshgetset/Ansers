#include<iostream>
using namespace std;

int main()
{
    int start;
    int end;
    int newNum;
    int n=0;
    int total = 0;

    cout<<"Start Range:";
    cin>>start;
    cout<<endl<<"End Range:";
    cin>>end;

    do
    {
        newNum = start;
        for(newNum; newNum <= end; newNum++)
        {
            if(n == newNum)
            {
                total += 1;

            }
        }

        n = n + (n+1);

    }while(n <= end)
        ;
        
    cout<<"Number of triangle(s):" <<total;
}