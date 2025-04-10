// Name = Ani Sharma
// Roll No. = 2415000214(10)
// Section = AG1

#include <stdio.h>
#include "basics.h"

int main()
{
    int num = get_input();
    printf("Reverse of %d is %d\n\n", num, reverse_number(num));
    
     num = get_input();
    if(is_strong_number(num))
        printf("%d is a strong number\n\n", num);
    else
        printf("%d is not a strong number\n\n", num);
    
     num = get_input();
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}
