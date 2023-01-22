#include <iostream>

// kodingan ini di buat langsung oleh M. Reyhan Aulia Treeana PPLG X-1

using namespace std;

int main(){

    int angka;
cout << "Masukan nilai anda : ";
cin >> angka;
    

     if(angka > 100){

        cout << "there's no such a thing"; 

    }

    else if(angka < 0){

        cout << "there's no such a thing";

    }


    else if(angka >= 90){

        cout << "Selamat, anda terbaik";

    }

    
    else if (angka <= 90 && angka >= 75){

        cout << "Anda cukup";

    }
    
    else if(angka <= 75 && angka >= 60){

        cout << "Anda kurang cukup";
    }
    
    else{

        cout << "Anda harus perbaikan";

    }

    return 0;
}

