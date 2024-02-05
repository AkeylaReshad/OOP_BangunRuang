#include "BangunRuang.hpp"
using namespace std;

BangunRuang::BangunRuang(int sisi, int rusuk, string nama)
    : jumlah_sisi(sisi), jumlah_rusuk(rusuk), nama_ruang(nama){}

int BangunRuang::get_jumlah_sisi(){
    return jumlah_sisi;
}

int BangunRuang::get_jumlah_rusuk(){
    return jumlah_rusuk;
}

string BangunRuang::get_nama_ruang(){
    return nama_ruang;
}