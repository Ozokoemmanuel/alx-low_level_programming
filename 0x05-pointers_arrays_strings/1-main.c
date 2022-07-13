#include "main.h"
<<<<<<< HEAD

#include <stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    int a;

	        int b;



		    a = 98;

		        b = 42;

			    printf("a=%d, b=%d\n", a, b);

			        swap_int(&a, &b);

				    printf("a=%d, b=%d\n", a, b);

				        return (0);

=======
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
>>>>>>> e8cd01f9cf03a9a629b272087d46dcd1f97541ca
}
