#include<iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout<<"Enter your name : ";
    getline(cin,name); // getline is used to get the input of string

    cout<<"Enter your age :";
    cin>>age; // other than string, for rest all the procedure remains same

    cout << "Hi "<< name << ", You are "<<age<<" years old";



}