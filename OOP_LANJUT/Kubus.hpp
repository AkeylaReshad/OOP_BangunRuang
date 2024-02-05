#ifndef KUBUS_HPP
#define KUBUS_HPP
#include "BangunRuang.hpp"

class Kubus : public BangunRuang {
    private:
    double side;

    public:
    Kubus(double side);
    double get_area();
    double get_volume();
};
#endif