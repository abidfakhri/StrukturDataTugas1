// Muhamad 'Abid Fakhri Nabiil - 32602400022
#include <iostream>
using namespace std;

// Fungsi untuk menukar posisi bilangan (menggunakan pointer)
void tukar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int bilangan[5];
    // Input 5 bilangan bulat dari pengguna
    cout << "\n== Masukkan 5 bilangan bulat ==" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Masukkan bilangan ke-" << (i + 1) << " : ";
        cin >> bilangan[i];
    }

    int *p; // Deklarasi pointer
    cout << "\nBilangan (diakses dengan pointer) : ";
    // Mengakses dan menampilkan bilangan menggunakan pointer
    for (int i = 0; i < 5; i++){
        p = &bilangan[i];
        cout << *p  << " ";
    }

    // Menampilkan bilangan sebelum ditukar
    cout << "\nSebelum ditukar : ";
    for (int i = 0; i < 5; i++){
        cout << bilangan[i] << " ";
    }

    // Menukar posisi bilangan pertama dan terahir dengan memanggil fungsi tukar()
    tukar(&bilangan[0], &bilangan[4]);

    // Menampilkan bilangan setelah ditukar
    cout << "\nSetelah ditukar : ";
    for (int i = 0; i < 5; i++){
        cout << bilangan[i] << " ";
    }
    cout << endl;
    
    return 0;
}
