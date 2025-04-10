// Name = Ani Sharma
// Roll no. 2415000214(10)
// Section - AG -1


#ifndef MY_H
#define MY_H


int get_input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}


int reverse_number(int num)
{
    int reversed = 0;
    while(num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}


int is_strong_number(int num)
{
    int original = num;
    int sum = 0;
    
    while(num != 0)
    {
        int digit = num % 10;
        int fact = 1;
        
        
        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
         sum = sum + fact;
        num = num / 10;
    }
    
    if(sum == original)
        return 1; 
    else
        return 0; 
}


int factorial(int num)
{
    int result = 1;
    for(int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

#endif
