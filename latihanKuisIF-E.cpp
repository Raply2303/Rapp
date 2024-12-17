#include <iostream>
using namespace std;
int main() {
    int pilih, batas = 0;
    string username;
    int password;
    string namaBarang1, namaBarang2, namaBarang3;
    int hargaBarang1, kodeBarang1 = 0, hargaBarang2, kodeBarang2, hargaBarang3, kodeBarang3;

    while (batas != 10) {
        cout << "LOGIN" << endl;
        cout << "Masukkan Username : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;

        if (username == username && password == 123230062) {
            do {
                system("close");
                
                cout << "MENU UTAMA" << endl;
                cout << "1. Input Barang\n2. Cetak Data Barang\n3. Cari Data Barang\n4. Exit" << endl;
                cout << "Pilih Menu :* ";
                cin >> pilih;
                switch (pilih) {
                    case 1:
                        system("cls");
                        cout << "Menu Input" << endl;
                        cout << "\nBarang ke-1" << endl;
                        cout << "Masukkan Kode Barang : ";
                        cin >> kodeBarang1;
                        cout << "Masukkan Nama Barang : ";
                        cin >> namaBarang1;
                
                        cout << "Masukkan Harga Barang : ";
                        cin >> hargaBarang1;

                        cout << "\nBarang ke-2" << endl;
                        cout << "Masukkan Kode Barang : ";
                        cin >> kodeBarang2;
                        cout << "Masukkan Nama Barang : ";
                        cin.ignore();
                        getline(cin, namaBarang2);
                        cout << "Masukkan Harga Barang : ";
                        cin >> hargaBarang2;

                        cout << "\nBarang ke-3" << endl;
                        cout << "Masukkan Kode Barang : ";
                        cin >> kodeBarang3;
                        cout << "Masukkan Nama Barang : ";
                        cin.ignore();
                        getline(cin, namaBarang3);
                        cout << "Masukkan Harga Barang : ";
                        cin >> hargaBarang3;
                        break;

                    case 2:
                        if (kodeBarang1 == NULL) {
                            cout << "Data barang masih kosong" << endl;
                            cin.ignore();
                            cin.get();
                            break;
                        } else {
                            system("cls");
                            cout << "Cetak Data Barang" << endl;
                            cout << "Barang Ke-1" << endl;
                            cout << "Kode Barang    : " << kodeBarang1 << endl;
                            cout << "Nama Barang    : " << namaBarang1 << endl;
                            cout << "Harga Barang   : " << hargaBarang1 << endl;

                            cout << "\nBarang Ke-2" << endl;
                            cout << "Kode Barang    : " << kodeBarang2 << endl;
                            cout << "Nama Barang    : " << namaBarang2 << endl;
                            cout << "Harga Barang   : " << hargaBarang2 << endl;

                            cout << "\nBarang Ke-3" << endl;
                            cout << "Kode Barang    : " << kodeBarang3 << endl;
                            cout << "Nama Barang    : " << namaBarang3 << endl;
                            cout << "Harga Barang   : " << hargaBarang3 << endl;
                            cin.ignore();
                            cin.get();
                            break;
                        }

                    case 3:
                        if (kodeBarang1 == 0) {
                            cout << "Data Barang belum dimasukkan" << endl;
                            cin.ignore();
                            cin.get();
                            break;
                        } else {
                            int kodeBarang;
                            system("cls");
                            cout << "Cari Data Barang" << endl;
                            cout << "Masukkan Kode Barang : ";
                            cin >> kodeBarang;
                            if (kodeBarang == kodeBarang1) {
                                cout << "\nKode Barang    : " << kodeBarang1 << endl;
                                cout << "Nama Barang    : " << namaBarang1 << endl;
                                cout << "Harga Barang   : " << hargaBarang1 << endl;
                                cin.ignore();
                                cin.get();
                            } else if (kodeBarang == kodeBarang2) {
                                cout << "\nKode Barang    : " << kodeBarang2 << endl;
                                cout << "Nama Barang    : " << namaBarang2 << endl;
                                cout << "Harga Barang   : " << hargaBarang2 << endl;
                                cin.ignore();
                                cin.get();
                            } else if (kodeBarang == kodeBarang3) {
                                cout << "\nKode Barang    : " << kodeBarang3 << endl;
                                cout << "Nama Barang    : " << namaBarang3 << endl;
                                cout << "Harga Barang   : " << hargaBarang3 << endl;
                                cin.ignore();
                                cin.get();
                            } else {
                                cout << "Barang tidak ditemukan" << endl;
                                cin.ignore();
                                cin.get();
                            }
                            break;
                        }

                    default:
                        break;
                }
            } while (pilih != 9);
            break;
        } else {
            cout << "Username atau Password Salah, sisa " << 9 - batas << " percobaan" << endl
                 << endl;
            batas++;
        }
    }
}