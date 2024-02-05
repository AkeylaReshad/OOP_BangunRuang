#ifndef BALOK_HPP
#define BALOK_HPP
#include "BangunRuang.hpp"

class Balok : public BangunRuang {
    private:
    double length;
    double width;
    double height;

    public:
    Balok(double length, double width, double height);
    double get_area();
    double get_volume();
};
#endif