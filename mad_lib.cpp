#include <iostream>

using namespace std;

int main()
{   
    string noun, bpart,name;

    cout<<"Enter a noun : "<<endl;
    getline(cin,noun);
    cout<<"Enter the body part : "<<endl;
    getline(cin,bpart);
    cout<<"Enter a name : "<<endl;
    getline(cin,name);

    cout<<"Be careful not to vacuum the "<< noun<< " when you clean under your bed. ";
    cout<<"Basketball is the best "<< bpart<< " in the world. ";
    cout<<"What came first, the chicken or "<<name<<" ?";
    
    return 0;
}