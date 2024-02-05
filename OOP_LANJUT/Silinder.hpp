#ifndef SILINDER_HPP
#define SILINDER_HPP
#include "BangunRuang.hpp"

class Silinder : public BangunRuang {
    private:
    double radius;
    double height;

    public:
    Silinder(double radius, double height);
    double get_area();
    double get_volume();
 
};
#endif