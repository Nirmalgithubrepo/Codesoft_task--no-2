#include<iostream>
using namespace std;

int main(){
    
    cout<<"\n\t\t\t    *SIMPLE CALCULATOR*     "<<endl;
    
    float num1,num2;
    cout<<"Enter any two real integers: "<<endl;
    cin>>num1>>num2;

    char op;
    cout<<"Enter operation to be performed\t '+' for addition\t '-' for subtraction\t '*' for mltiplication\t '/' for division\n"<<endl;
    cout<<"operation   "<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<"the addition of given numbers is:  "<<endl;
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;

        case '-':
        cout<<"the subtraction of given numbers is:  "<<endl;
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;

        case '*':
        cout<<"the multiplication of given numbers is:  "<<endl;
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;

        case '/':
        cout<<"the division of given numbers is:  "<<endl;
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;

        default:
        cout<<"OOPS! you Entered wrong operation."<<endl;
        break;
    }
     return 0;
}

