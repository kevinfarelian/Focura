#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    int target = 0;
    int totalBelajar = 0;

    string arrPelajaran[50];
    string arrHari[50];
    string arrJam[50];
    int arrDurasi[50];
    string arrMetode[50];
    int jumlahJadwal = 0; 

    do {
        cout << "\n===== STUDY TRACKER =====" << endl;
        cout << "1. Lihat Jadwal Belajar" << endl;
        cout << "2. Tambah Jadwal Belajar" << endl;
        cout << "3. Atur Target Belajar" << endl;
        cout << "4. Catat Waktu Belajar" << endl;
        cout << "5. Lihat Progress Belajar" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\n=== JADWAL BELAJAR ===" << endl;
            if (jumlahJadwal == 0) {
                cout << "Belum ada jadwal yang ditambahkan." << endl;
            } else {
                for (int i = 0; i < jumlahJadwal; i++) {
                    cout << arrHari[i] << "\t: " 
                         << arrPelajaran[i] << " | " 
                         << arrJam[i] << " | " 
                         << arrDurasi[i] << " menit (" 
                         << arrMetode[i] << ")" << endl;
                }
            }
        }
        else if (pilihan == 2) {
            cout << "\n--- TAMBAH JADWAL ---" << endl;
            if (jumlahJadwal < 50) {
                cin.ignore(); 
                cout << "Mata pelajaran: ";
                getline(cin, arrPelajaran[jumlahJadwal]); 

                cout << "Hari: ";
                cin >> arrHari[jumlahJadwal];

                cout << "Jam (contoh 19.00): ";
                cin >> arrJam[jumlahJadwal];

                cout << "Pilih Metode Belajar:\n1. Pomodoro (25 menit)\n2. Custom\nPilih: ";
                int metode;
                cin >> metode;

                if (metode == 1) {
                    arrDurasi[jumlahJadwal] = 25;
                    arrMetode[jumlahJadwal] = "Pomodoro";
                    cout << "Metode Pomodoro dipilih. Durasi otomatis 25 menit." << endl;
                } else {
                    cout << "Durasi belajar (menit): ";
                    cin >> arrDurasi[jumlahJadwal];
                    arrMetode[jumlahJadwal] = "Custom";

                    if (arrDurasi[jumlahJadwal] > 300) {
                        cout << "Peringatan: Jadwal belajarmu lebih dari 5 jam. Jangan lupa sediakan waktu istirahat!" << endl;
                    }
                }

                cout << "\nJadwal berhasil ditambahkan!" << endl;
                jumlahJadwal++; 
            } else {
                cout << "Kapasitas jadwal penuh!" << endl;
            }
        }
        else if (pilihan == 3) {
            cout << "\nMasukkan target belajar (menit): ";
            cin >> target;
            cout << "Target berhasil diatur!" << endl;
        }
        else if (pilihan == 4) {
            int waktuBaru;
            cout << "\nMasukkan waktu yang sudah digunakan untuk belajar: ";
            cin >> waktuBaru;
            
            if (waktuBaru > 300) {
                cout << "Peringatan: Sesi belajar ini sangat panjang! Jangan lupa regangkan otot dan istirahatkan mata." << endl;
            }
            
            totalBelajar = totalBelajar + waktuBaru;
            cout << "Waktu belajar berhasil dicatat!" << endl;
        }
        else if (pilihan == 5) {
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
        else if (pilihan == 6) {
            cout << "\nTerima kasih telah menggunakan Study Tracker!" << endl;
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 6);

    return 0;
}