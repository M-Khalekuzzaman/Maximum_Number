#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter your 3 integer number are:";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
        cout<<"The maximum number is : "<<num1<<endl;
     else if(num2>num1 && num2>num3)
        cout<<"The maximum number is : "<<num2<<endl;
        else
            cout<<"The maximum number is :"<<num3<<endl;

        getch();
}
