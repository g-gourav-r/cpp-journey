#include<iostream>

using namespace std;

int main(){

    bool isMale=true;
    bool isTall=false;
    /*
    The if-else if- else statements are used to make the programs smart to judge a condition
    If the parameter checked is true, then the following set/bloack of code is executed or else the other condition is checked
    */

    if(isMale && isTall){  // && is used to check if both the condition are true
        cout<<"Your are a tall male";
    }

    else if(isMale && !isTall){ // ! is used to negate
        cout<<"You are a short male";
    }
    else if(!isMale && isTall){
        cout<<"You are tall but not a male";
    }
    else{ //If all the above conditions checked are false, This block of code gets executed
        cout<<"You are short female";
    }

    if (isMale && isTall)
    return 0;
}