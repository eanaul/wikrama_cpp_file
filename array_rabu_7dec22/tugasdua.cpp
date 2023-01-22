#include <iostream>
using namespace std;

int main(){

    int a,b,total;
    int angka[10];

    cout << "Masukan index: ";
    cin >> b;

    cout << endl;

    for(a = 0; a < b; a++){
        cout << "masukan angka: ";
        cin >> angka[a];
    }

    cout << endl;

         total = 0;
     for(a = 0; a < b; a++){
         total = total+angka[a];
    }

    cout << "Maka totalnya adalah: " << total << endl;

}