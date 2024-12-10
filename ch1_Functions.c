#include <stdio.h>
#include <cs50.h>

Declare a function by defining the: 

ReturnedDataType FunctionName(Declare Data Type & the Input Parameter)
{
    //the code of your function
}

int addition(int a, int b); //tease the function in the header/ above main)

int main()                  //Main Code
{
    int a=2, c=3; 
    int add; 
    add = addition(a,c); 
    printf("add\n"); 
}

int addition(int a, int b) // Declare Function here 
{
    int sum = a+b;
    return sum; 
}

/// Other Ex /// 
/// Other Ex /// 
/// Other Ex /// 
/// Other Ex /// 
/// Other Ex /// 

void meow(void); //returns void, takes void, it performs code purpose when called, nothing else. 
{
    printf("meow\n"); 
}

/// Other Ex /// 
void meow(int n); //tease function in header 

int main(void) // main function 
{
    int n = 3; 
    meow(3);
}

void meow(int n) //Declare function & code 
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
} 
