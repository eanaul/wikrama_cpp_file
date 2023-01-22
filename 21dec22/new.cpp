#include <iostream>
using namespace std;

int main(){
    int msc1[2][3]={
    {3,4,8},
    {3,9,2}};

    int msc2[2][3]={
    {1,2,3},
    {3,2,1}};

    for(int i=0; i<2; i++){
        for(int x=0; x<3; x++){
            cout << msc1[i][x] << " ";

        }
        cout<<endl; 
    }
    
    cout<<endl;

    for(int i=0; i<2; i++){
        for(int x=0; x<3; x++){
            cout << msc2[i][x] << " ";

        }
        cout<<endl; 
    }


}