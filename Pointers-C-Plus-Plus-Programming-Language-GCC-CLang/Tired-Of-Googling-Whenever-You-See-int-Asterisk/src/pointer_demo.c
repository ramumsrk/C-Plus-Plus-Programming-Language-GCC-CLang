/**
 * @author ramumsrk
 * @since 2024/07/24
 */

#if __has_include( <stdlib.h> )
  #include <stdlib.h>
#endif

#if __has_include( <stdio.h> )
  #include <stdio.h>
#endif

/*
* C program execution starts
* from built-in `main()'
* function
*/
int
main(void)
{
    int natural_number = 10;
    int * ptr_to_int = &natural_number;

    printf("Address of identifier `natural_number' is '%p'\n", (void *)ptr_to_int);
    printf("Value stored in identifier `natural_number' is '%d'\n", *ptr_to_int);
  return EXIT_SUCCESS;
}