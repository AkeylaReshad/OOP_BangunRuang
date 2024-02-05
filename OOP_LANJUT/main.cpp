#include "BangunRuang.hpp"
#include "Kubus.hpp"
#include "Balok.hpp"
#include "Silinder.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string bentuk;
    double s;

    cout<<"Bentuk Ruang yang Diinginkan(KAPITALSEMUA): ";
    cin>> bentuk;

    if(bentuk=="KUBUS"){
        cout<<"Sides: ";
        cin>>s;
        Kubus KUBUS(s);
        cout << "Nama Ruang: " << KUBUS.get_nama_ruang()<< endl;
        cout << "Jumlah Sisi: " << KUBUS.get_jumlah_sisi()<< endl;
        cout << "Jumlah Rusuk: " << KUBUS.get_jumlah_rusuk()<< endl;
        cout << "Area Ruang: " << KUBUS.get_area() << endl;
        cout << "Volume RUANG: " << KUBUS.get_volume() << endl;
    }

    double l;
    double w;
    double h;

    if(bentuk=="BALOK"){
        cout<<"Length: ";
        cin>>l;
        cout<<"Width: ";
        cin>>w;
        cout<<"Height: ";
        cin>>h;
        Balok BALOK(l,w,h);
        cout << "Nama Ruang: " << BALOK.get_nama_ruang()<< endl;
        cout << "Jumlah Sisi: " << BALOK.get_jumlah_sisi()<< endl;
        cout << "Jumlah Rusuk: " << BALOK.get_jumlah_rusuk()<< endl;
        cout << "Area Ruang: " << BALOK.get_area() << endl;
        cout << "Volume RUANG: " << BALOK.get_volume() << endl;
    }

    int r;

    if(bentuk=="SILINDER"){
        cout<<"Radius: ";
        cin>>r;
        cout<<"Height: ";
        cin>>h;
        Silinder SILINDER(r,h);
        cout << "Nama Ruang: " << SILINDER.get_nama_ruang()<< endl;
        cout << "Jumlah Sisi: " << SILINDER.get_jumlah_sisi()<< endl;
        cout << "Jumlah Rusuk: " << SILINDER.get_jumlah_rusuk()<< endl;
        cout << "Area Ruang: " << SILINDER.get_area() << endl;
        cout << "Volume RUANG: " << SILINDER.get_volume() << endl;
    }
   
}
