#include <stdio.h>

int fact(int n)
{
    if (n <= 1) // base case
        return 1;
    else    
{
	printf("%d", n);
        return n*fact(n-1);    
}
}

void main (void)
{
	int p = fact(5);
}
