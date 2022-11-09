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
    
        int ret = max<int>(foo(a), foo(b)); // explicit instantiation -> it will not be macros but actual functions, which are written by the                 compiler. So foo(a) and foo(b) will only be run once, and the results will be passed as parameters
    	  std::cout << "Max of " << a << " and " << b << " is ";
    	  std::cout << ret << std::endl;
    
    	  return 0;
    }
    
  ## Class Templates ?
  
  The template concept can be extended to classes. Class templates are generally used for data
  storage (container) classes.
  However, classes in generale could store data of only a single basic type.
  Similarly, we would need to create a new stack class for every data type we wanted to store. It
  would be nice to be able to write a single class specification that would work for variables of
  all types, instead of a single basic type. As you may have guessed, class templates allow us to
  do this.
  
  ```
  // tempstak.cpp
// implements stack class as a template
#include <iostream>
using namespace std;
const int MAX = 100; //size of array
////////////////////////////////////////////////////////////////
template <class Type>
class Stack
{
    private:
        Type st[MAX]; //stack: array of any type
        int top; //number of top of stack
        public:
        Stack() { top = -1; }
        void push(Type var) //put number on stack
        { st[++top] = var; }
        Type pop() //take number off stack
        { return st[top--]; }
};
////////////////////////////////////////////////////////////////
int main()
{
    Stack<float> s1; //s1 is object of class Stack<float>
    
    s1.push(1111.1F); //push 3 floats, pop 3 floats
    s1.push(2222.2F);
    s1.push(3333.3F);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    cout << "3: " << s1.pop() << endl;
    
    Stack<long> s2; //s2 is object of class Stack<long>
    s2.push(123123123L); //push 3 longs, pop 3 longs
    s2.push(234234234L);
    s2.push(345345345L);
    
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop() << endl;
    cout << "3: " << s2.pop() << endl;
    return 0;
}
  
  ```
# FAQ?

  ## Why do C++ template definitions need to be in the header?
    
  A template class is not a class, it's a template that can be used to create a class. When you instantiate such a class, e.g. MyTemplate<int>, the     compiler creates the class on the spot. In order to create it, it has to see all the templated member functions (so that it can use the templates     to create actual member functions such as MyTemplate<int>::foo() ), and therefore these templated member functions must be in the header.

  If the members are not in the header, the compiler will simply assume that they exist somewhere else and just create actual function declarations.   from the templated function declarations, and this gives you linker errors.

  The "export" keyword is supposed to fix this, but few compilers support it (I only know of Comeau).

  You can also explicitly instantiate MyTemplate<int> - then the compiler will create actual member functions for MyTemplate<int> when it compiles     the cpp files containing the MyTemplate member function definition templates.
  
  ## Why can’t I separate the definition of my templates class from its declaration and put it inside a .cpp file ?
  
  in order to understand why things are the way they are, first accept these facts:

  1) A template is not a class or a function. A template is a “pattern” that the compiler uses to generate a family of classes or functions.<br>
  2) In order for the compiler to generate the code, it must see both the template definition (not just declaration) and the specific types/whatever       used to “fill in” the template. For example, if you’re trying to use a Foo<int>, the compiler must see both the Foo template and the fact that       you’re trying to make a specific Foo<int>.<br>
  3) Your compiler probably doesn’t remember the details of one .cpp file while it is compiling another .cpp file. It could, but most do not.

    
