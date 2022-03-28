#include<iostream>

using namespace std;

int main(){
    int numGrid[3][3];

    cout<<"Enter the elements";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>numGrid[i][j];
        }
    } 
    
    cout<<"Entered elements"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numGrid[i][j]<<" ";
        }
        cout<<endl;
    }
}