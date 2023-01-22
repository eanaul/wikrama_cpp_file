#include <iostream>
using namespace std;

int main(){

    int input, rey; 
    string nama[5][1];

    cout << "masukan jumlah murid: ";
    cin >> input;
    cout << "masukan data: ";
    cin >> rey;

    for(int r=0; r<input; r++){

        for(int x=0; x<rey; x++){
            cout << "Masukan nama: ";
            cin >> nama[r][x];
        }
    }

cout << endl;

    for(int r=0; r<input; r++){

            for(int x=0; x<rey; x++){
                cout << "- "<< nama[r][x];
                
            }
            cout << endl;
    }
    cout<< endl;
}
 




