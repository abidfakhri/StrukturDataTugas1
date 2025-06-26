// Muhamad 'Abid Fakhri Nabiil - 32602400022
#include <iostream>
using namespace std;

int main(){

    int jumlahSiswa = 10;
    int jumlahPertemuan = 5;

    // Array 2D untuk menyimpan nilai siswa
    int nilai[jumlahSiswa][jumlahPertemuan] = {
        {95, 85, 90, 80, 75},
        {88, 92, 85, 87, 90},
        {78, 82, 80, 75, 70},
        {85, 90, 88, 92, 95},
        {80, 75, 78, 82, 85},
        {90, 88, 92, 95, 87},
        {70, 75, 80, 78, 82},
        {95, 90, 85, 88, 92},
        {82, 80, 75, 70, 78},
        {87, 92, 90, 85, 88}
    };

    cout << "\n== Rata-rata Nilai Siswa ==" << endl;
    for (int i = 0; i < jumlahSiswa; i++){
        int totalNilai = 0;
        for (int j = 0; j < jumlahPertemuan; j++){
            // Menjumlah total nilai setiap siswa pada setiap pertemuan
            totalNilai += nilai[i][j];
        }
        // Menghitung rata-rata nilai siswa
        int rataRata = totalNilai / jumlahPertemuan;
        cout << "Rata-rata nilai siswa ke-" << (i + 1) << " : " << rataRata << endl;
    }

    cout << "\n== Nilai tertinggi pada setiap pertemuan =="<< endl;
    for (int i = 0; i < jumlahPertemuan; i++){
        // Menyimpan nilai tertinggi
        int nilaiTertinggi = 0;
        for(int j = 0; j < jumlahSiswa; j++){
            // Memeriksa nilai tertinggi pada pertemuan ke-i
            if (nilai[j][i] > nilaiTertinggi){ 
                // Jika nilai siswa lebih tinggi dari nilai tertinggi saat ini maka perbarui nilai tertinggi
                nilaiTertinggi = nilai[j][i];
            }
        }
        cout << "Nilai tertinggi pertemuan ke-" << (i+1) << " : " << nilaiTertinggi << endl;
    }
    
    return 0;
}