# static_cast

  1) It performs implicit conversions between types.

        If it is implicit why we use (static_cast) keyword ?

        Because this kind of casting happen at compile time,

        And C style cast is hard to find in code, but you can sreach static_cast keyword

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

        Upcasts, It is the process to create the derived class's pointer or reference from the base class's pointer or

        reference.
        explicit type cast not required in Upcasting (parent_obj = &child_obj)

        The Downcasting is an opposite process to the upcasting, which converts the base class's pointer or reference

        to the derived class's pointer or reference.

        explicit type cast is required in downcasting  (chile_obj = (Child *) &parent_obj).

## code example for up and down cast

        #include <iostream>  
        using namespace std;  

        class Parent {  
            private:  
                int id;  

            public:  
                void showid ()  
                {  
                    cout << " I am in the Parent class " << endl;  
                    }     
        };  

        class Myson : public Parent {  
            public:  
                void disp ()  
                {  
                    cout << " I am in the Myson class " << endl;  
                }  
        };  

        int main ( int argc, char * argv[])  
        {  
            // create object of the Parent class  
            Parent par_obj;  

            // create object of the Myson class  
            Myson my_obj;  

            // upcast - here upcasting can be done implicitly  
            Parent *ptr1 = &my_obj; // base class's reference the derive class's object  

            // downcast - here typecasting is done explicitly   
            Myson *ptr2 = (Myson *) &par_obj;  

            // Upcasting is safe:  
            ptr1->showid();  
            ptr2->showid();  


            // downcasting is unsafe:  
            ptr2->disp();  

            getchar();  
            return 0;

        }  

## code example for the confused down cast

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
    
    6. Intensions are more clear in C++ style cast (express your intent better and make code review easier).

    7. Finding is easy
   
    8. Error found at compile-time.


# reinterpret_cast

  It is used to convert a pointer of some data type into a pointer of another data type, even if the data types<br> before and after conversion are different.<br>
  It does not check if the pointer type and data pointed by the pointer is same or not.<br>
  
  
  More details: A reinterpret cast is a very scary instrument, indeed. You can use reinterpret_cast to convert just about anything into just about     anything else,    similar to the C-style casts we saw previously. For example, a reinterpret_cast will allow you to convert between pointers of    unrelated types, between integers and pointers, and so on.

It's not often you need something like this — and it's best avoided if you don't have the absolute need, since it's so dangerous in practice — but it does come in handy once in a while to be able to make conversions in a completely unrestricted way. One such use is to cast pointers to void* and back, where void* is an untyped pointer: an address without a type. A void* doesn't let you do anything with the object it points to (since it's unknown what the object's type is), but a reinterpret_cast would let you cast the pointer to a different type, provided that you knew what the right type was. This is the kind of thing that's done in extremely low-level code, such as memory allocators, but if you find yourself doing this often in higher-level programs, your design is probably lacking.

  ## Syntax :

        data_type *var_name = reinterpret_cast <data_type *>(pointer_variable);

  ## Retutn Type :
    
    It doesn’t have any return type. It simply converts the pointer type.

  
  ## Parameters :
    
    It takes only one parameter i.e., the source pointer variable (p in above example).

  ## Code example :
    
    // CPP program to demonstrate working of
    // reinterpret_cast
    #include <iostream>
    using namespace std;

    int main()
    {
    	int* p = new int(65);
    	char* ch = reinterpret_cast<char*>(p);
    	cout << *p << endl;
    	cout << *ch << endl;
    	cout << p << endl;
    	cout << ch << endl;
    	return 0;
    }
    
  **output**
    
    65
    A
    0x1609c20
    A

  ## Purpose for using reinterpret_cast

    1. reinterpret_cast is a very special and dangerous type of casting operator.
        And is suggested to use it using proper data type i.e., 
        (pointer data type should be same as original data type).

    2. It can typecast any pointer to any other data type.

    3. It is used when we want to work with bits.

    4. If we use this type of cast then it becomes a non-portable product.
        So, it is suggested not to use this     concept unless required.

    5. It is only used to typecast any pointer to its original type.

    6. Boolean value will be converted into integer value i.e., 0 for false and 1 for true.


  ## Program example :

    // CPP code to illustrate using structure
    #include <bits/stdc++.h>
    using namespace std;
    
    // creating structure mystruct
    struct mystruct {
    	int x;
    	int y;
    	char c;
    	bool b;
    };
    
    int main()
    {
    	mystruct s;
    
    	// Assigning values
    	s.x = 5;
    	s.y = 10;
    	s.c = 'a';
    	s.b = true;
    
    	// data type must be same during casting
    	// as that of original
    
    	// converting the pointer of 's' to,
    	// pointer of int type in 'p'.
    	int* p = reinterpret_cast<int*>(&s);
    
    	cout << sizeof(s) << endl;
    
    	// printing the value currently pointed by *p
    	cout << *p << endl;
    
    	// incrementing the pointer by 1
    	p++;
    
    	// printing the next integer value
    	cout << *p << endl;
    
    	p++;
    
    	// we are casting back char * pointed
    	// by p using char *ch.
    	char* ch = reinterpret_cast<char*>(p);
    
    	// printing the character value
    	// pointed by (*ch)
    	cout << *ch << endl;
    
    	ch++;
    
    	/* since, (*ch) now points to boolean value,
    	so it is required to access the value using
    	same type conversion.so, we have used
    	data type of *n to be bool. */
    
    	bool* n = reinterpret_cast<bool*>(ch);
    	cout << *n << endl;
    
    	// we can also use this line of code to
    	// print the value pointed by (*ch).
    	cout << *(reinterpret_cast<bool*>(ch));
    
    	return 0;
    }
   
# Dynamic_cast
  
  dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.
  
  The primary purpose for the dynamic_cast operator is to perform type-safe downcasts. A downcast is the conversion of a pointer or reference to a class   A to a pointer or reference to a class B, where class A is a base class of B. The problem with downcasts is that a pointer of type A* might point to     an object that is not a base class subobject of type A that belongs to an object of type B or a class derived from B. The dynamic_cast operator         ensures that if you convert a pointer to class A to a pointer to class B, the object of type A pointed to by the former belongs to an object of type B   or a class derived from B as a base class subobject.
  
  ## Synatax
    
    dynamic_cast <new_type>(Expression)
    
  ## Notes
    
    0. dynamic_cast is used at run time to find out correct down-cast.<br>
    1: Need at least one virtual function in base class.
    2: If the cast is successful, dynamic_cast returns a value of type new_type. 
    3: If the cast fails and new_type is a pointer type, it returns a null pointer of that type.
    4: If the cast fails and new_type is a reference type,
        it throws an exception that matches a handler of type std::bad_cast.
        
  ## Code example
  
      // C++ Program demonstrates successful
      // dynamic casting and it returns a
      // value of type new_type
      #include <iostream>

      using namespace std;
      // Base Class declaration
      class Base {
	      virtual void print()
	      {
	    	  cout << "Base" << endl;
	     }
      };

      // Derived1 class declaration
      class Derived1 : public Base {
	      void print()
	     {
		      cout << "Derived1" << endl;
	      }
      };

      // Derived2 class declaration
      class Derived2 : public Base {
	      void print()
	      {
	      	  cout << "Derived2" << endl;
	       }
      };

      // Driver Code
      int main()
      {
	        Derived1 d1;

	        // Base class pointer holding
	        // Derived1 Class object
	        Base* bp = dynamic_cast<Base*>(&d1);

	        // Dynamic_casting
	        Derived1* dp2 = dynamic_cast<Derived1*>(bp);
	        if (dp2 == nullptr)
		        cout << "null" << endl;
	        else
		        cout << "not null" << endl;

	        return 0;
        }

  ## BOTTOM LINE:
  
  	1. work only on polymorphic base class (at least one virtual function in base class),
	   because it uses this information to decide about wrong down-cast.
	   
	2. it is used for up-cast (D to B) and down-cast (B to D), 
	    but it is mainly used for correct downcast.
	    
	3. using this cast has run time overhead, because it checks object types at run time using RTTI
	    (Run Time Type Information).
	    
	4. if we are sure that we will never cast to wrong object,
	   then we should always avoid this cast and use static_cast.
	   
  ## Const Cast
  
   All of the C++ casts we've seen so far, including reinterpret_cast, are respectful of const, in the sense that none of those casts can be used to change a const type to a corresponding non-const type (e.g., to cast from const std::string& to std::string&). (On the other hand, C-style casts will let you do this, whether you meant to do it or not; this is one of many reasons they're best avoided.)

In general, this is a good thing; we don't want const protections to be thrown away indiscriminately. But sometimes we have to remove it temporarily; for example, if we need to interoperate with someone else's C++ code and they didn't make proper use of const (e.g., they have a class with member functions that should be marked const but aren't), we may not have the ability to change their code, so we'll have to work around the problem if we want to make use of it. A const cast can be used to remove the const from a type, while introducing no other changes to it. (If you also wanted to change the type in some other way, you'd have to do two casts: a const_cast to remove the const and another one such as a static_cast or dynamic_cast to change the type.) A simple example:

void blah(const Blah& b)
{
    Blah& bb = const_cast<Blah&>(b);
    bb.someMemberFunctionThatIsNotConst();
}
As a rule, const_cast is something that should make you feel uncomfortable to use, because it represents a way to subvert invariants about how a program is supposed to behave. Once in a while, you have no choice, but it's very much a tool of last resort.
   
# Ressources
  
  [Notes and Examples: Type Conversions](https://www.ics.uci.edu/~thornton/ics45c/Notes/TypeConversions/)
  
  [The dynamic_cast operator](https://www.ibm.com/docs/en/zos/2.1.0?topic=expressions-dynamic-cast-operator-c-only)
  
  [UPCASTING AND DOWNCASTING](https://www.bogotobogo.com/cplusplus/upcasting_downcasting.php)
  
  [What is the uintptr_t data type?](https://stackoverflow.com/questions/1845482/what-is-the-uintptr-t-data-type)
