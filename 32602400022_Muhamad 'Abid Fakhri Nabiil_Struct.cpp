// Muhamad 'Abid Fakhri Nabiil - 32602400022
#include <iostream>
using namespace std;

// Stuct untuk menyimpan data buku
struct DataBuku {
    string judul;
    string penulis;
    int tahunTerbit;
};

// Fungsi untuk menampilkan data buku
void tampilkan(DataBuku buku) {
    cout << "Judul\t\t: " << buku.judul << endl;
    cout << "Penulis\t\t: " << buku.penulis << endl;
    cout << "Tahun Terbit\t: " << buku.tahunTerbit << endl;
}

int main(){

    // Array untuk menyimpan data buku
    DataBuku buku[3];

    // Input data buku dari pengguna
    cout << "\n== Input Data Buku ==" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Buku ke-" << (i + 1) << endl;
        cout << "Masukkan judul\t: ";
        getline(cin, buku[i].judul);
        cout << "Masukkan nama penulis\t: ";
        getline(cin, buku[i].penulis);
        cout << "Masukkan tahun terbit\t: ";
        cin >> buku[i].tahunTerbit;
        cin.ignore();
    }

    // Menampilkan data buku yang telah dimasukkan
    cout << "\n== Data Buku ==" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Buku ke-" << (i + 1) << endl;
        tampilkan(buku[i]);
    }

    // Mencari buku dengan tahun terkecil
    DataBuku bukuTerlama = buku[0];
    for (int i = 0; i < 3; i++){
        if (buku[i].tahunTerbit < bukuTerlama.tahunTerbit){
            bukuTerlama = buku[i];
        }
    }
    
    // Menampilkan buku terlama (tahun terbit terkecil)
    cout << "\n== Buku Terlama (tahun terbit terkecil) ==" << endl;
    cout << "Judul\t\t: " << bukuTerlama.judul << endl;
    cout << "Penulis\t\t: " << bukuTerlama.penulis << endl;
    cout << "Tahun Terbit\t: " << bukuTerlama.tahunTerbit << endl;
    
    return 0;
}
