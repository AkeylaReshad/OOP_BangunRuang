#include "Silinder.hpp"

Silinder::Silinder(double radius, double height)
    : BangunRuang(3, 2, "Silinder"), radius(radius), height(height){}

double Silinder::get_area(){
    return 2*3.14*radius*height + 2*3.14*radius*radius;
}

double Silinder::get_volume(){
    return 3.14*radius*radius*height;
}