#include<iostream>

using namespace std;

int main(){
    double num1,num2;
    char op;

    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the operator : ";
    cin>>op;
    cout<<"Enter the second number : ";
    cin>>num2;

    if(op=='+'){
        cout<<num1+num2;
    }
    else if(op=='-'){
        cout<<num1-num2;
    }
    else if(op=='*'){
        cout<<num1-num2;
    }
    else if(op=='/'){
        cout<<num1/num2;
    }
    else{
        cout<<"INVALID OPERATOR";
    }

    return 0;
}