#include "gerbong.h"
#include <list>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    Gerbong grb1;
    grb1.CetakGerbong();
    
    Gerbong grb2;
    grb2.CetakGerbong();
    
    Gerbong grb3;
    grb3.CetakGerbong();
    
    cout << "Jumlah Objek Gerbong, akses dengan grb1:" << grb1.HitungObjek() << endl;
    cout << "Jumlah Objek Gerbong, akses dengan grb2:" << grb2.HitungObjek() << endl;
    cout << "Jumlah Objek Gerbong, akses dengan grb3:" << grb3.HitungObjek() << endl;
    
    return 0;
}