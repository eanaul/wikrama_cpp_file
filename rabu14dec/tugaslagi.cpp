#include <iostream>
using namespace std;

int main(){

    int rey, han, total;
    int angka[rey][han];


    cout << "Masukan jumlah angka yang ingin di input: ";
    cin >> rey;
   

    for(int r=0; r<rey; r++){

        for(int x=0; x<han; x++){
            cout << "Masukan 10 angka: ";
            cin >> angka[r][x];
        }
    }



     for(int r=0; r<rey; r++){

        
        
        for(int x=0; x<han; x++){
        total = total+ angka[r][x];
        }
    }

   cout << total;



    
    


}