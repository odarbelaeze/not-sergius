
#include "system.h"

#include <boost/python.hpp>

using namespace boost::python;


void (System::*add_particle)(const Particle&) = &System::add;
void (System::*add_and_create)(double,  double, double, double) = &System::add;


BOOST_PYTHON_MODULE (system)
{
    class_<Particle> ("Particle", init<double, double, double, double>())
        .def("distanceTo", &Particle::distanceTo)
        ;

    class_<System> ("System", init<size_t>())
        .def("add", add_particle)
        .def("add", add_and_create)
        .def("size", &System::size)
        .def("__len__", &System::size)
        ;
}
