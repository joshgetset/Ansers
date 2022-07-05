#include<iostream>
#include<string>
using namespace std;

struct vehicleReg
{
    int registrationNum;
    string vehicleType;
};

void reverseContent(vehicleReg x[])
{
    vehicleReg r[5];

    for(int i = (5-1); i>=0; i--)
    {
        cout<<""<<x[i].registrationNum<<"\t"<<x[i].vehicleType<<endl;
    }
}
int main()
{
    vehicleReg r[5];

    r[0].registrationNum = 101701;
    r[0].vehicleType = "Scooter";

    r[1].registrationNum = 111812;
    r[1].vehicleType = "Auto Mobile";

    r[2].registrationNum = 121923;
    r[2].vehicleType = "Jeepney";

    r[3].registrationNum = 132034;
    r[3].vehicleType = "E-Bike";

    r[4].registrationNum = 142145;
    r[4].vehicleType = "School Bus";

    //Reverses the array to bottom-top.
    cout<<"Reversed Array:\n"<<endl;
    reverseContent(r);
}
