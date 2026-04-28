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