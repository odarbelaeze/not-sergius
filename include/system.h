#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <cmath>

class Particle
{
public:

    /**
     * @brief Creates a particle given its position and its volume.
     *
     * @param x x coordinate of the particle's (not sergiu's) position.
     * @param y y coordinate of the particle's (not sergiu's) position.
     * @param z z coordinate of the particle's (not sergiu's) position.
     * @param volume volume of the particle in your favorite units.
     */
    Particle (double x, double y, double z, double volume);

    /**
     * @brief Destroys the particle.
     */
    virtual ~Particle ();

    /**
     * @brief Computes the euclidean distance from this particle to another.
     *
     * @param other
     *
     * @return distance in your favorite units.
     */
    double distanceTo (const Particle& other) const;

private:
    double _x;
    double _y;
    double _z;
    double _volume;

};

#endif
