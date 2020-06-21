#include <stdio.h>
int fibonacci(int i, int j, int n);
int main(void)
{
    int n = 11;
    int a = 0;
    int b = 1;
    // printf("%i - ", a);

    for (int i = 0; i < n - 1; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;

        // printf("%i - ", a);
    }
    printf("%i-th element in fibonacci sequence is = %i", n, a);

    // fibonacci(0, 1, n);
}

// 0 1 1 2 3 5 8 13 21 34 ....
int fibonacci(int i, int j, int n)
{
    printf("%i - ", i);
    if (j >= n)
    {
        return i;
    }

    int temp = i + j;
    i = j;
    j = temp;
    int x = fibonacci(i, j, n);
}