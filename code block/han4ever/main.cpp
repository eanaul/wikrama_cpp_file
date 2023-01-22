#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char opr;

    cout << "Selamat datang di kalkulator rehan \n\n" << endl;


    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "PIlih operator anda: ";
    cin >> opr;
    cout << "Masukan angka kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << opr << b;


    if (opr == '+'){
        hasil = a + b;
    } else if (opr == '-'){
        hasil = a - b;
    } else if (opr == '/'){
        hasil = a / b;
    } else if (opr == '*'){
        hasil = a * b;
    } else{
        cout << "Operator anda salah!";
    }

    cout << " = " << hasil << endl;


    cin.get();
    return 0;
}
