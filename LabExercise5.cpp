#include <iostream>
using namespace std;
bool isOdd(int x)
{
    if (x % 2 != 0)
    {
        return true;
    }
    else
        return false;
}
bool isPrime(int x)
{
    if (x == 0 || x == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= x / 2; ++i)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
void printWaringTrio(int x)
{
    int sum, tri;
    int n = 1;
    if (isOdd(x))
    {
        if (x > 5)
        {
            cout << x << " = ";
            for (int i = 1; i < x; i++)
            {
                if (n <= 2)
                {
                    if (isPrime(i))
                    {
                        cout << i << ""<< " + ";
                        sum += i;
                        n++;
                    }
                }
                tri = x - sum;
                cout << tri;
            }
        }
        else
        {
            cout << "Invalid Number!" << endl;
        }
    }
    else
    {
        cout << "Invalid Number!" << endl;
    }
}
int main()
{
    int x, sum, tri = 0;
    cout << "Enter a number: ";
    cin >> x;
    printWaringTrio(x);
}