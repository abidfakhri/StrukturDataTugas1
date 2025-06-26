// Muhamad 'Abid Fakhri Nabiil - 32602400022
#include <iostream>
using namespace std;

int main(){

    string kalimat;
    // Input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Huruf vokal yang akan dihitung
    string hurufVokal = "aiueo";

    // Variabel untuk menyimpan jumlah huruf vokal
    int JmlHurufVokal = 0;
    // Loop pertama untuk setiap karakter dalam kalimat
    for (int i = 0; i < kalimat.length(); i++){
        // Loop kedua untuk setiap huruf vokal
        for (int j = 0; j < hurufVokal.length(); j++){
            // Setiap menjumpai huruf vokal, maka jumlah + 1
            if (kalimat[i] == hurufVokal[j]){
                JmlHurufVokal++;
            }
        }
    }

    cout << "Jumlah huruf vokal: " << JmlHurufVokal << endl;
    
    return 0;
}