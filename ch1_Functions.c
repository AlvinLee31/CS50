#include <stdio.h>
#include <cs50.h>

int func1(void);
void func2(int size); // tease the abstraction in the header

int main(void)
{
    int n = get_int(); 
    print_grid(n);    
}

//return an int, function name, takes void parameter 
int func1(void)
{
    int n = get_int("Input int: "); 
}

// returns void, function name, takes 1 parameter/ argument
void func2(int size)
{
    printf("size");
}
