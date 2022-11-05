#include "Identify.hpp"

Base    *generate(void)
{
    Base *p = new(std::nothrow) Base[3];

    A a;
    B b;
    C c;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    return (p);
}

void    identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    a->PrintA();
}
