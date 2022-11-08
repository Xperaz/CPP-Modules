    #include <iostream>

    class Base{
        public:
            void virtual print(){std::cout << "its parent!\n";}
            };

    class Derived1 : public Base{
        public:
            void print(){std::cout << "D1\n";}};
    class Derived2 : public Base{
        public:
            void print(){std::cout << "D2\n";}};

    int main()
    {
        Derived1 d1;
        Derived2 d2;

        Base *p1 = static_cast<Base*>(&d1);// OK
        Base *p2 = static_cast<Base*>(&d2);// OK

        //The problem lies here, after type casting we are coming back, when we are back we are just switching
        
        Derived1 *dp1 = dynamic_cast<Derived1*>(p2);// Dervid1 hold derived2
        Derived2 *dp2 = dynamic_cast<Derived2*>(p1);//Dervid2 hold derived1

        dp1->print();
        dp2->print();
        
        //this code compiled sucssesfully, but with unwanted values
        //So never use static_cast if you don't know  your pointer is holding
        return (0);
    }