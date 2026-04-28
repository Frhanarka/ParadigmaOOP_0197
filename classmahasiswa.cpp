#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
    string nama;
    int nim;
    float nilai;

    void printdata()
    {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Nilai: " << nilai << endl;
    }

};

int main()
{ 
    Mahaswiswa mhs;

    mhs.nama = "ambon";
    mhs.nim = 12024;
    mhs.nilai = 85.5;

    mhs.printdata();
}