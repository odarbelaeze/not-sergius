
#include "system.h"

#include <boost/python.hpp>

using namespace boost::python;


BOOST_PYTHON_MODULE (system)
{
    class_<Particle> ("Particle", init<double, double, double, double>())
        .def("distanceTo", &Particle::distanceTo)
        ;
}
