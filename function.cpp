#include<iostream>

using namespace std;

void sayHi(string name, int age);

int main(){

    sayHi("Gourav",21);

    return 0;
}

void sayHi(string name, int age){
    cout<<"Hello "<<name<<" you are "<<age<<" years old.";
}