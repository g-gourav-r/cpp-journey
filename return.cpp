#include<iostream>

using namespace std;

/*double cube(int side){
    return side*side*side;
}
*/

//There are many ways of writing a function

double cube(int side){
    int volume=side*side*side;
    return volume;
    cout<<"I'm not getting printed :| "; // Statements after the retuen statements are not executed
}

int main(){
    cout<<cube(5);
    return 0;
}