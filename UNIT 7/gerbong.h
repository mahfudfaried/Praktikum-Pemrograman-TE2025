#ifndef GERBONG_H
#define GERBONG_H
#include <iostream>
using namespace std;
class Gerbong
{
    public:
        typedef struct {
            int nokursi;
            int statuskursi; 
        } InfoKursi;
        InfoKursi Kursi[4][10];
        int NoGerbong;
    public:
        static int jumlahobject;
        static int HitungObjek(void)
            {return jumlahobject;}
        Gerbong(void);
        Gerbong IsiGerbong(int nogb, InfoKursi *kursi);
        void CetakGerbong(void);
        void PesanMakan(int nomenu, int nokursi, int nogerbong);
        ~Gerbong();
};
#endif