#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    while(1)
    {
    cout<<"enter two numbers"<<endl;
    int num1,num2,divisor,dividend,rem;
    cin>>num1>>num2;
    if(num1>num2)
    {
        divisor=num2;
        dividend=num1;
    }
    else
    {
        divisor=num1;
        dividend=num2;
    }
    do
    {
        rem=dividend%divisor;
        if(rem!=0)
        {
            dividend=divisor;
            divisor=rem;
        }
    }
    while(rem!=0);

    cout<<"greatest common factors  of "<<num1<<" "<<num2<<" is "<<divisor<<endl;
    setw(10);
    }

}
