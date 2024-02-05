#ifndef BANGUNRUANG_HPP
#define BANGUNRUANG_HPP
#include <iostream>
#include <string>
using namespace std;


class BangunRuang {
    private:
    int jumlah_sisi;
    int jumlah_rusuk;
    string nama_ruang;

    public:
    BangunRuang(int sisi, int rusuk, string nama);
    int get_jumlah_sisi();
    int get_jumlah_rusuk();
    string get_nama_ruang();

    virtual double get_area() = 0;
    virtual double get_volume() = 0;

};
#endif


