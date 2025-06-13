#pragma once
#include <array>
//using Vec3 = std::array<double, 3>;
// But I need a constructor Vec3(x,y,z)
class Vec3 : public std::array<double, 3> {
public:
    Vec3() : std::array<double, 3>{0.0, 0.0, 0.0} {}
    Vec3(double x, double y, double z) : std::array<double, 3>{x, y, z} {}

    double &x() { return (*this)[0]; }
    double &y() { return (*this)[1]; }
    double &z() { return (*this)[2]; }

    const double &x() const { return (*this)[0]; }
    const double &y() const { return (*this)[1]; }
    const double &z() const { return (*this)[2]; }
};
