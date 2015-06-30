#include "system.h"


Particle::Particle (double x, double y, double z, double volume)
{
    _x = x;
    _y = y;
    _z = z;
    _volume = volume;
}


Particle::~Particle ()
{
}


double Particle::distanceTo(const Particle& other) const
{
    return std::sqrt(
            (_x - other._x) * (_x - other._x) +
            (_y - other._y) * (_y - other._y) +
            (_z - other._z) * (_z - other._z)
            );
}
