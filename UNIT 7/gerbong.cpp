#include "gerbong.h"
int Gerbong::jumlahobject = 0;
Gerbong::Gerbong(void)
{
    int gb, kolom, baris;
    jumlahobject++;
    NoGerbong = -99;
    kolom = 0;
    while (kolom < 5)
    {
        baris = 0;
        while (baris < 2) {
            Kursi[baris][kolom].nokursi = (2 * (kolom)) + (baris+1);
            Kursi[baris][kolom].statuskursi = 0;
            baris++;
        }
        kolom++;
    }
}

Gerbong::~Gerbong()
{
    cout << "Hapus Object" << endl;
}

void Gerbong::CetakGerbong(void)
{
    int baris = 0;
    cout << "NoGerbong: " << NoGerbong << endl;
    while (baris < 2)
    {
        int kolom = 0;
        while (kolom < 5) {
            cout << Kursi[baris][kolom].nokursi << "S" << Kursi[baris][kolom].statuskursi << "-";
            kolom++;
        }
        cout << endl;
        baris++;
    }
}