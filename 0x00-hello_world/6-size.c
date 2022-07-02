#include <stdio.h>
int main(void)
{
	char c;
        int i;
        long int g;
        long long int h;
        float f;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(g));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(h));

return(0);
}
