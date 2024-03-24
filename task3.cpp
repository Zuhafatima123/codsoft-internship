#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    double sum,product,diff,quotient;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Choose an operation (+, -, *, /): ";
    cin>>operation;

    switch(operation)
    {
    case '+':
       sum = num1+num2;
        cout<<"The sum is: "<<sum<<endl;
        break;

    case '-':
        diff = num1-num2;
        cout<<"The difference is: "<<diff<<endl;
        break;

    case '*':
        product = num1*num2;
        cout<<"The product is: "<<product<<endl;
        break;

    case '/':
        if(num2 == 0)
        {
            cout<<"Error: Division by zero!"<<endl;
            return 1;
        }
        quotient = num1/num2;
        cout<<"The quotient is: "<<quotient<<endl;
        break;

    default:
        cout<<"Invalid operation!"<<endl;
        return 1;
    }
    return (0);
}
