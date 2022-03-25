#include <iostream>
#include<cmath>//Math library function

using namespace std;

int main(){

    int a = 5;
    int z=9;

//Short hand operators, Similar to C
    z++;
    z--;
    z+=10;
    z-=10;
    z*=10;
    z/=10;
    cout<< a+7<<endl; //Adding an integer with another integer

    double b=8.5;
    cout<<a+b<<endl; //Adding an double with an integer will typecast the integer to double
    cout<<pow(2,5);//2 raised to fifth power
    cout<<sqrt(z)<<endl; //sqrt imported from math header file will find the sqare root
    cout<<round(z)<<endl;//Rounds of the number
    cout<<ceil(z)<<endl;//Performes the ceiling operation i.e, The next greater value 
    cout<<floor(z)<<endl;//Performes the flooe operation i.e, The number will be set to lower value
    cout<<fmax(z,a)<<endl;//Returns the greatest number among two
    cout<<fmin(z,a)<<endl;// Returns teh least number among the two

    return 0;
}