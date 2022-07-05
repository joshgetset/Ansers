#include<iostream>
using namespace std;

class testClass
{
public:
        int sum();
        void print() const;
        void input();
        testClass();
        testClass(int a, int b, char o);
private:
        int x;
        int y;
        char ops;
};

void testClass::input()
{
    cout<<"Value of x: ";
    cin>>x;
    cout<<"Value of y: ";
    cin>>y;
    cout<<"Select Operation(+ - * /): ";
    cin>>ops;
}
void testClass::print()const
{
    //Prints the value of the variable entered by the user
    cout<<"\nInput: "<<x<<" "<<ops<<" "<<y<<" ";
}

int testClass::sum()
{
    switch(ops)
    {
    case'+':
        return x+y;
        break;

    case'-':
        return x-y;
        break;

    case'*':
        return x*y;
        break;

    case'/':
        return x/y;
        break;

        default:
            cout<<"Operation not available."<<endl;
            break;
    }
}
testClass::testClass()
{
    x = 0;
    y = 0;
    ops = 'o';
}
testClass::testClass(int a, int b, char o)
{
    x = a;
    y = b;
    ops = o;
}

int main()
{
    testClass solve;
    solve.input();
    solve.print();
    cout<<"\n\nAnswer: "<<solve.sum()<<"\n";
}
