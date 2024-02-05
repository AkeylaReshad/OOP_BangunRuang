#include "Balok.hpp"

Balok::Balok(double length, double width, double height)
    : BangunRuang(6, 12, "Balok"), length(length), width(width), height(height) {}

double Balok::get_area(){
    return 2*(length*width + length*height + width*height);
}

double Balok::get_volume(){
    return length*width*height;
}