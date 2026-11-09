#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    int target = 0;
    int totalBelajar = 0;

    string mataPelajaran;
    string hari;
    int durasi;

    do {
        cout << "\n===== STUDY TRACKER =====" << endl;
        cout << "1. Tambah Jadwal Belajar" << endl;
        cout << "2. Atur Target Belajar" << endl;
        cout << "3. Catat Waktu Belajar" << endl;
        cout << "4. Lihat Progress Belajar" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\n--- TAMBAH JADWAL ---" << endl;

            cout << "Mata pelajaran: ";
            cin >> mataPelajaran;

            cout << "Hari: ";
            cin >> hari;

            cout << "Durasi belajar (menit): ";
            cin >> durasi;

            cout << "\nJadwal berhasil ditambahkan!" << endl;
            cout << mataPelajaran << " - " << hari
                 << " - " << durasi << " menit" << endl;
        }

        else if (pilihan == 2) {
            cout << "\nMasukkan target belajar (menit): ";
            cin >> target;

            cout << "Target berhasil diatur!" << endl;
        }

        else if (pilihan == 3) {
            cout << "\nMasukkan waktu yang sudah digunakan untuk belajar: ";
            cin >> durasi;

            totalBelajar = totalBelajar + durasi;

            cout << "Waktu belajar berhasil dicatat!" << endl;
        }

        else if (pilihan == 4) {
            cout << "\n===== PROGRESS BELAJAR =====" << endl;
            cout << "Target: " << target << " menit" << endl;
            cout << "Sudah belajar: " << totalBelajar << " menit" << endl;

            if (target > 0) {
                int progress = (totalBelajar * 100) / target;
                cout << "Progress: " << progress << "%" << endl;
            } else {
                cout << "Silakan atur target terlebih dahulu." << endl;
            }
        }

        else if (pilihan == 5) {
            cout << "\nTerima kasih telah menggunakan Study Tracker!" << endl;
        }

        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}