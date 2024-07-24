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
    printf("Address of identifier `natural_number' is '%p'\n", (void *)&natural_number);
  return EXIT_SUCCESS;
}