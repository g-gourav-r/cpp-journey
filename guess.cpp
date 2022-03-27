#include<iostream>

using namespace std;

int main(){
    int guesslimit=0;
    int num=5,guess;

    while(guesslimit<5){
        if(guesslimit==4){
            cout<<"Last chance :("<<endl;
        }
        cout<<"Enter your guess : ";
        cin>>guess;
        if(num!=guess){
            if(guess>num){
                cout<<"Think of a lesser number "<<endl;
                guesslimit++;
            }
            else{
                cout<<"Think of a greater number"<<endl;
                guesslimit++;
            }
        }
        else{
            cout<<"You win !!";
            break;
        }

    }
}