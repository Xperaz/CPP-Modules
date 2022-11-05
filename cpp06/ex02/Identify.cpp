#include "Identify.hpp"

Base    *generate(void)
{
    srand(time(0));
    int sign = 1 + rand() % 3;
    if (sign == 1)
        return (new(std::nothrow) A());
    else if (sign == 2)
        return (new(std::nothrow) B());
    else
        return (new(std::nothrow) C());
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "A" << std::endl;
        return;
    }
    else if (dynamic_cast<B *>(p))
    {
        std::cout << "B" << std::endl;
        return;
    }
    else if (dynamic_cast<C *>(p))
    {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "this cast can't be done" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        a.PrintA();
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            b.PrintB();
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                c.PrintC();
            }
            catch(const std::exception& e)
            {
                std::cerr << "can't be casted Because of " << e.what()<<'\n';
            }
            
        }
        
    }
    
}
