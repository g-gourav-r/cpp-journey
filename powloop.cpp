#include<iostream>

using namespace std;

int pow(int base, int power){
    int result=1;
    for(int i=1;i<=power;i++){
        result *= base;
    }
    return result;
}

int main(){
    int base, power;
    cout<<"Enter the value of m^n : ";
    cin>>base>>power;
    cout<< pow(base,power);
    return 0;
}