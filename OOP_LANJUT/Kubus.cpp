#include "Kubus.hpp"

Kubus::Kubus(double side)
    : BangunRuang(6, 12, "Kubus"), side(side) {}

double Kubus::get_area(){
    return side*side*6;
}

double Kubus::get_volume(){
    return side*side*side;
}