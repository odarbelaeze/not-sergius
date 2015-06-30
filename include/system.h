#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <cmath>
#include <random>
#include <vector>

typedef unsigned long int size_t;

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

class System
{
public:

    /**
     * @brief Creates an empty system with a random number generator
     *        initialized according to the given seed.
     *
     * @param seed Seed for the random number generator.
     */
    System (size_t seed);

    /**
     * @brief Destroys the system.
     */
    virtual ~System ();

    /**
     * @brief Add the given particle to the system.
     *
     * @param particle Particle to add.
     */
    void add (const Particle& particle);

    /**
     * @brief Creates a particle given the coordinates and volume
     *        then it adds it to the system.
     *
     * @param x x coordiante of the particle.
     * @param y y coordiante of the particle.
     * @param z z coordiante of the particle.
     * @param vol volume of the particle.
     */
    void add (double x, double y, double z, double vol);

    /**
     * @brief Returns the number of particles currently on the system.
     *
     * @return Number of particles.
     */
    size_t size () const;

private:
    std::vector<Particle> _particles;
    std::mt19937_64 _generator;
    size_t _seed;

};

#endif
