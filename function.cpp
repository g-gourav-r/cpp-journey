#include<iostream>

using namespace std;

void sayHi(string name, int age); //function initialization

int main(){

    sayHi("Gourav",21); //function call

    return 0;
}
//function declaration
void sayHi(string name, int age){
    cout<<"Hello "<<name<<" you are "<<age<<" years old.";
}