#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The natural square root of the number, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0 || n == 1)
    {
        return (n);
    }
    else
    {
        return (square_root_helper(n, 1, n));
    }
}

/**
 * square_root_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @start: The starting value for the search.
 * @end: The ending value for the search.
 * Return: The square root of the number, or -1 if not found.
 */
int square_root_helper(int n, int start, int end)
{
    int mid = (start + end) / 2;

    if (start <= end)
    {
        if (mid * mid == n)
        {
            return (mid);
        }
        else if (mid * mid < n)
        {
            return (square_root_helper(n, mid + 1, end));
        }
        else
        {
            return (square_root_helper(n, start, mid - 1));
        }
    }
    else
    {
        return (-1);
    }
}
