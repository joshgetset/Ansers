#include<iostream>
using namespace std;

int countSubString(string str, string subStr)
{
    int Str = str.length();
    int sub = subStr.length();
    int total = 0;

    for(int i=0; i<= Str - sub; i++)
    {
        int j;
        for(j=0; j < sub; j++)
        {
            if(str[i+j] != subStr[j])
                break;
        }

        if(j==sub)
        {
            total++;
            j=0;
        }
    }
    return total;
}
int main()
{
    string str,subStr;
    cout<<"Input string:";
    getline(cin,str);
    cout<<"Substring: ";
    cin>>subStr;
    cout<<"Number of Substrings: "<<countSubString(str,subStr);
}
