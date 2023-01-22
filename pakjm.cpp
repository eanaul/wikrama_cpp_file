#include <iostream>
using namespace std;

int main(){
    int a,b;
    int opera;
    string ulang;
   
    
do{
    cout << "Baris: ";
    cin >> a;
    cout << "Kolom: ";
    cin >> b;
    int rey[a][b];
    int han[a][b];

    for(int i=0; i<a; i++){
        for(int x=0; x<b; x++){
            cout << "Masukan nilai: ";
            cin >>rey[i][x];

        }
        cout<<endl; 
    }
    for(int i=0; i<a; i++){
        for(int x=0; x<b; x++){
            cout << "Masukan nilai: ";
            cin >>han[i][x];

        }
        cout<<endl; 
    }

    for(int i=0; i<a; i++){
        for(int x=0; x<b; x++){
            cout<<rey[i][x]<< " ";

        }
        cout<<endl; 
    }

    cout<<endl;

    for(int i=0; i<a; i++){
        for(int x=0; x<b; x++){
            cout <<han[i][x]<< " ";

        }
        cout<<endl; 
    }

    cout<<endl;

    cout << "('+' = 1, '-' = 2, '/' = 3, '*' = 4, '%' = 5)" << endl;;
    cout << "Masukan operator: ";
    cin >> opera;


    if(opera == 1){
        for(int i=0; i<a; i++){
            cout << endl;
            for(int x=0; x<b; x++){
                cout<<  rey[i][x] + han[i][x]<< " ";
            }
        }
    }else if(opera == 2){
         for(int i=0; i<a; i++){
            cout << endl;
            for(int x=0; x<b; x++){
                cout<<  rey[i][x] - han[i][x]<< " ";
            }
        }
    }else if(opera == 3){
         for(int i=0; i<a; i++){
            cout << endl;
            for(int x=0; x<b; x++){
                cout<<  rey[i][x] / han[i][x]<< " ";
            }
        }
    }else if(opera == 4){
         for(int i=0; i<a; i++){
            cout << endl;
            for(int x=0; x<b; x++){
                cout<<  rey[i][x] * han[i][x]<< " ";
            }
        }
    }else if(opera == 5){
        for(int i=0; i<a; i++){
            cout << endl;
            for(int x=0; x<b; x++){
                
                if(han[i][x] !=2){
                    cout << "Error" << " ";
                }
                else if(rey[i][x] % han[i][x] == 1){
                    cout << "Ganjil" << " ";

                }
                else if(rey[i][x] % han[i][x] == 0){
                    cout << "Genap" << " ";
                }
                else{
                    cout << "INVALID";
                }
            }
        }
    }

    cout << endl;
    cout << "Apakah kamu mau ngulang programnya? (y/n) ";
    cin >> ulang;
    cout << endl;

}

while ( ulang == "y");

if(ulang == "n"){
    cout << endl;
    cout << "Baik, have a great day, you!";
}else{
    cout << "INVALID";
}



}