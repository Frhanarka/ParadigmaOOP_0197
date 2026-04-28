#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    Barang(string nama, int jumlah, string kategori, string tanggalProduksi) {
        this->nama = nama;
        this->jumlah = jumlah;
        this->kategori = kategori;
        this->tanggalProduksi = tanggalProduksi;
    }

    void tampilkan() {
        cout << "==========================" << endl;
        cout << "Nama         : " << nama << endl;
        cout << "Jumlah       : " << jumlah << endl;
        cout << "Kategori     : " << kategori << endl;
        cout << "Tgl Produksi : " << tanggalProduksi << endl;
        cout << "==========================" << endl;
    }
};

int main() {
    Barang elektronik("Laptop", 10, "Elektronik", "2024-01-15");
    Barang nonElektronik("Buku Tulis", 50, "Non-Elektronik", "2023-06-20");

    elektronik.tampilkan();
    nonElektronik.tampilkan();

    return 0;

}
