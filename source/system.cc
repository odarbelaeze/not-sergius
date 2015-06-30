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


System::System (size_t seed)
{
    _generator.seed(seed);
    _seed = seed;
}


System::~System ()
{
}


void System::add (const Particle& particle)
{
    _particles.push_back (particle);
}


void System::add (double x, double y, double z, double vol)
{
    Particle particle = Particle (x, y, z, vol);
    add (particle);
}


size_t System::size () const
{
    return _particles.size ();
}
