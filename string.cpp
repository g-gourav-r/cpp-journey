#include <iostream>

using namespace std;

int main(){

    string name = "Gourav R";

    cout<<name.length() <<endl; // Finding the length

    cout<<name[5]<<endl; //c++ is zero indexed

    name[7] = 'Z'; // modify the character at the indexed location
    cout << name << endl;

    string language = "C minus plus";
    cout<<language.find("minus",0)<<endl; // Finds the index location of the string passed as parameter

    cout<< language.substr(2, 5); //Extracts the sub string from the index position 2 and takes the subsequent 5 characters

    return 0;

}