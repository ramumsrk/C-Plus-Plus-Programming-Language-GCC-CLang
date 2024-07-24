/**
 * @author ramumsrk
 * @since 2024/07/24
 */

#if __has_include( <cstdlib> )
  #include <cstdlib>
#endif

#if __has_include( <iostream> )
  #include <iostream>
#endif

/*
* C++ program execution
* starts from built-in
* `main()' function
*/
int
main()
{
    auto natural_number {10};
    auto ptr_to_int {&natural_number};

    std::cout<<"Address of identifier `natural_number' is '"<<ptr_to_int<<"'"<<std::endl;
    std::cout<<"Value stored in identifier `natural_number' is '"<<*ptr_to_int<<"'"<<std::endl;    
  return EXIT_SUCCESS;
}