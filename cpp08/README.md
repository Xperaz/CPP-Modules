# C++ Templated containers, iterators, algorithms
  The C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that      implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.

  ## Iterators
  :point_right: Objects that enable traversal of containers in some order, for either reading or writing.<br>
  :point_right: Iterators are defined as templates and muct comply with a very specific set of rules in order to qualify as one of many types of iterators.

  ## Iterator Functions
  i. begin() <br>
  
  :point_right: Return iterator to the beginning of the container.<br>
          ```it = v.begin() ```
          
   (v is a container)
    
   ii. end()<br>
   
   :point_right: Returns an iterator to the element following the last element of the container.<br>
   :point_right: This element acts as a placeholder; attempting to access it results in undefined behavior.<br>

     ```it = v.end()```
     
   iii. rbegin()<br>

   :point_right: Returns iterator to the last element of the container.<br>

   iiii. rend()<br>

   :point_right: Returns a reverse iterator pointing to the theoretical element right before the first element int the array container.

   ## Code example 

        #include <iostream>
        #include <vector>
        using namespace std;
        int main()
        {
            vector<int> v = {1, 2, 3, 4, 5, 6, 7};
            cout << "v.begin() => " << *v.begin()<< endl;
            cout <<"v.end()) => " << *v.end() << endl;
            cout << "v.rbegin() => " << *v.rbegin() << std::endl;
            cout << "v.rend()=> " << *v.rend() << endl;
            return 0;
        }
   
