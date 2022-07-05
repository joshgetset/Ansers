#include <iostream>
using namespace std;

//Decleration of variables.
bool isPrime(int x);
int countPrimeInRange(int start, int end);
int sumPrimeInRange(int start, int end);


int main()
{
    int start;
    int end;

    //Input of variables.
    cout<<"Start Range: ";
    cin>>start;
    cout<<endl<<"End Range: ";
    cin>>end;
    //To print the result.
    cout<<endl<<"Count of Primes: "<< countPrimeInRange(start, end)<<endl;
    cout<<endl<<"Sum of Prime Numbers: "<< sumPrimeInRange(start, end)<<endl;;

}

bool isPrime(int x)
{
    int num = 2;
    bool check = false;

    for(num; num<=x/2; num++)
    {
         if(x%num == 0)
        {
            check = false;
            return 0;

        }
        else
        {
            check = true;

        }
    }

    if(check == true)
    {
        return 1;
    }

}

int countPrimeInRange(int start, int end)
{
    int numofPrime = 0;

    for(start; start<=end; start++)
    {
        if(isPrime(start)==1)
        {
            numofPrime+=1;
        }
    }
    return numofPrime;
}

int sumPrimeInRange(int start, int end)
{
    int sumofPrime = 0;

    for(start; start<=end; start++)
    {
        if(isPrime(start)==1)
        {
            sumofPrime+=start;
        }
    }
    return sumofPrime;
}
