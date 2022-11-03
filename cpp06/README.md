# static_cast

  1) It performs implicit conversions between types.

        If it is implicit why we use (static_cast) keyword ?

        Because this kind of casting happen at compile time,

        And C style cast is hard to find in code, but your can sreach static_cast keyword

## code example

        int main()
        {
            float   f = 3.5;
            int     a;

            // implicit conversion
            a = f;
            std::cout << a << std::endl;//output 3

            // static conversion => its easy to figure out what type of casting i use
            a = static_cast<int>(f);
            std::cout << a << std::endl;//the seem result
            return (0);
        }

  2) Use static_cast when converesion between types is provided through conversion operator or conversion constructor.

## code example

        #include <iostream>

        class Test
        {
        private:
            int x;
        public:
            Test(int x=0) : x(x)
            {
                std::cout << "conversion constructor" << std::endl;
            }
            operator std::string(){
                std::cout << "conversion operator" << std::endl;
                return std::to_string(x);
            }
            ~Test();
        };


        int main()
        {
            Test obj(3);

            //implicit conversion
            std::string str1 = obj;// conversion operator
            obj = 20;// constructor coversion

            // static_cast conversion
            std::string str2 = static_cast<std::string> (obj);
            obj = static_cast<Test> (30);

            return (0);
        }

  3) static_cast is more restictive than C-Style

        Example: char* to int* is allowed in C-Style but not with static cast.
        Because char point to one byte, and int point to 4 byte.

## code example

        #include <iostream>


        int main()
        {
            char c;

            int *p = (int *)&c;
            *p = 5; //PASS at compile-time but fail in run time, (that's why it's dangerous)

            int *ip = static_cast<int *>(&c); // Fail at compile-time, because not copatible pointer types.

            return (0);
        }

  4) Static_cast avoid cast form derived to private base pointer.

## code example

        #include <iostream>

        class Base{};
        class Derived : private Base{};

        int main()
        {
            Derived d1;
            Base *p1 = (Base*)&d1;//Allowed at compile-time
            Base *p2 = static_cast<Base*>(&d1);//Not allowed at compile-time
            return (0);
        }

  5) Use for all upcasts, but never use for confused down cast.

        It is the process to create the derived class's pointer or reference from the base class's pointer or

        reference.

        The Downcasting is an opposite process to the upcasting, which converts the base class's pointer or reference

        to the derived class's pointer or reference.

## code example

        #include <iostream>

        class Base{};
        class Derived1 : public Base{};
        class Derived2 : public Base{};

        int main()
        {
            Derived1 d1;
            Derived2 d2;

            Base *p1 = static_cast<Base*>(&d1);// OK
            Base *p2 = static_cast<Base*>(&d2);// OK

            //The problem lies here, after type casting we are coming back, when we are back we are just switching
            Derived1 *dp1 = static_cast<Derived1*>(p2);// Dervid1 hold derived2
            Derived2 *dp2 = static_cast<Derived2*>(p1);//Dervid2 hold derived1
            //this code compiled sucssesfully, but with unwanted values
            //So never use static_cast if you don't know  your pointer is holding
            return (0);
        }

  6) Static_cast should be prefered when converting to void* or from void*.

## code example

        #include <iostream>


        int main()
        {
            int i = 10;

            void *ptr = static_cast<void *>(&i);
            int *ip = static_cast<int *>(ptr);
            std::cout << *ip<< std::endl;
            return (0);
        }


## BOTTOM LINE:

    1. For compatible type conversion, such as float to int.

    2. For conversion operator and conversion constructors.

    3. To avoid unrelated pointer conversion.

    4. Avoids derived to private base pointer conversion.

    5. Use for all up-cast but never use for confused down-cast because there are no runtime checks performed
    for static_cast conversions.