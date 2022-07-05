#include <iostream>
using namespace std;

int FibsInRange(long long int x = 4, long long int y = 50)
{
    int num1 = 0, num2 = 1, count = 0,ctr,fib,next;
    int num = num1 + num2;

    for (ctr = x; num <= y ; ++x)
    {
        if (num >= ctr)
        {
            count += 1;
        }
        num1 = num2;
        num2 = num;
        num = num1 + num2;
    }

    fib = count;

    if (next < 1)
    {
        cout << fib << "\n";
        next = 2;
    }

    return fib;
}

    int CollatzCycleCtr(int n)
    {

        int col = 1;

        for (n; n > 1;)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                col += 1;

        }
        else {

            n = (n * 3) + 1;
            col += 1;
        }

    }
     cout << col <<"\n";
}

int main()
{
    int fib, count;

    cout << "Range: 4 to 50\n";
    cout << "Fibonacci Sequence:";
    FibsInRange();
    cout << "Collatz Cycles of Fibonacci in Sequence:";
    CollatzCycleCtr(FibsInRange());
}
