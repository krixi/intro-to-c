/**
 * Recursion example
 * Marissa Joehler
 * 3/3/2016
 */

#include <stdio.h>

/*
void recurse(void)
{
    // NOTE: infinite loop!
    recurse();
}
*/


int factorial(int n)
{
    int ans;

    printf("n = %d\n", n);

    if ( n == 0 )
    {
        ans = 1;
        printf("ans (base case) = %d\n", ans);
    }
    else
    {
        ans = factorial(n-1) * n;
        printf("ans  = %d\n", ans);
    }
    return ans;
}

int factorial_iterative(int n)
{
    int i, product = 1;

    for( i = n; i > 1; --i )
    {
        product = product * i;
    }

    return product;
}

// return the nth fibonacci number
int fib(int n)
{
    int ans;

    printf(" n = %d\n", n);

    if ( n == 1 || n == 2 )
    {
        // base case
        ans = 1;
        printf("ans (base case) = %d\n", ans);
    }
    else
    {
        // recursion
        ans = fib(n-1) + fib(n-2);
        printf("ans = %d\n", ans);
    }

    return ans;
}


int main(void)
{
    int result;
    //result = factorial(5);

    //printf("result = %d\n", result);

    //result = factorial_iterative(5);

    //printf("result iterative = %d\n", result);
    //
    result = fib(5); 
    printf("result fib(5) = %d\n", result);

    //result = fib(6); 
    //printf("result fib(6) = %d\n", result);

    return 0;
}

