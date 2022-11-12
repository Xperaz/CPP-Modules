# C++ Templated containers, iterators, algorithms
  The C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that      implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.

  ## Standard Containers

  A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows a great flexibility in the types supported as elements.
  
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

     it = v.end()
     
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
       
  ## Iterator invalidation
    
  :point_right: Due to update (Insert / Delete) of container that is using iterators.<br>
  :point_right: No runtime error but iterator no longer guaranteed to have access to the same element after update.<br>
  :point_right: Well-documented rules.<br>
  :point_right: Depends on container implementation.<br>
  
  ## Code example.
  
    #include <iostream>
    #include <vector>
    using namespace std;
    int main()
    {
        vector<int> v = {1, 2, 3, 4, 5, 6, 7};
        auto it = v.begin() + 4; // 5
        cout << "*it :=> " << *it << endl;
        cout << "lit - begin :=> " << it - v.begin() << std::endl;

        //v.insert(it, 100); //Iterator Invalidation we need to update it
        it = v.insert(it, 100); // {1, 2, 3, 4, 100, 5, 6, 7}
        cout <<  "*it :=> " << *it << endl;
        cout << "it - begin :=> " << it - v.begin() << endl;
        return 0;
      }
  
  ## Container Adapter

  These types of containers are called container adapters. The C++ Standard Library implements class templates such as stack, queue, and priority_queue as a container that puts constraints on the process of storage and retrieval of elements.
# Ressources

[STL LIBRARY](https://www.youtube.com/playlist?list=PL1w8k37X_6L9NXrP1D31hDTKcdAPIL0cG)<br>
[std::stack](https://en.cppreference.com/w/cpp/container/stack)<br>

