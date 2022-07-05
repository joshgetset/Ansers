#include <iostream>
using namespace std;
int main()
{
    int s = 10, e = 10000000;
    int d, total, mod, factor;
    for (; s <= e; s++)
    {
        d = s;
        total = 0;
        do
        {
            mod = d % 10;
            d = d / 10;
            factor = 1;
            for (int n = mod; n >= 2; n--)
            {
                factor *= n;
            }
            total += factor;
        } while (d != 0);
        if (total == s)
        {
            cout << "" << total << endl;
        }
    }
    return 0;
}