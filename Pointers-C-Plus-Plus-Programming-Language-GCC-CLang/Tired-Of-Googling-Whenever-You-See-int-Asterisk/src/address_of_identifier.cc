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
    std::cout<<"Address of identifier `natural_number' is '"<<&natural_number<<std::endl;
  return EXIT_SUCCESS;
}