# C++ templates

  Templates make it possible to use one function or class to handle many different data types.<br>
  The template concept can be used in two different ways: with functions and with classes.

  ## Function Templates

  Suppose you want to write a function that returns the absolute value of a number For every type we need to create a new function<br>
  (int, long, float...) : Rewriting the same function body over and over for different types is time-consuming and
  wastes space in the listing.<br>

  It would be nice if there were a way to write such a function just once, and have it work for many different data types.<br> This is exactly what function templates do for you.<br>

  ## A Simple Function Template


    #include <iostream>
    
    template<typename T> // tell the compiler that we're writing a template
    
    T const & max(T const & x, T const & y) { // use the address and not a copy will save space
    	return (x >= y? x : y); // apart from a scala type, it could also used with instances of class if they've implemented the operator overload
    }
    
    int foo(int x) {
    	std::cout << "Long computing time" << std::endl;
    	return x;
    }
    
    int main(void)
    {
    	int a = 21;
    	int b = 42;
    
    	std::cout << "Max of " << a << " and " << b << " is ";
    	std::cout << max<int>(a, b) << std::endl; // explicit instantiation -> this is preferred
        std::cout << "Max of " << a << " and " << b << " is ";
        std::cout << max(a, b) << std::endl; // implicit instantiation -> it might not work for complex classes
    
        float c = -1.7f;
        float d = 4.2f;
    
        std::cout << "Max of " << c << " and " << d << " is ";
        std::cout << max<float>(c, d) << std::endl; // explicit instantiation
        std::cout << "Max of " << c << " and " << d << " is ";
        std::cout << max(c, d) << std::endl; // implicit instantiation
    
    	char e = 'a';
    	char f = 'z';
    
    	std::cout << "Max of " << e << " and " << f << " is ";
    	std::cout << max<char>(e, f) << std::endl; // explicit instantiation
    	std::cout << "Max of " << e << " and " << f << " is ";
        std::cout << max(e, f) << std::endl; // implicit instantiation
    
        // no problem here
    
        int ret = max<int>(foo(a), foo(b)); // explicit instantiation -> it will not be macros but actual functions, which are written by the compiler. So foo(a) and foo(b) will only be run once, and the results will be passed as parameters
    	std::cout << "Max of " << a << " and " << b << " is ";
    	std::cout << ret << std::endl;
    
    	return 0;
    }
    