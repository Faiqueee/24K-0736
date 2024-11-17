#include<stdio.h>

int check(int x)
{
    if (x % 5 == 0) 
    {
        return -1;
    }
    else
    {
        return x % 5;
    }
}

int main()
{ 
    int n;
    printf("Enter the number of matches: ");
    scanf("%d", &n);
    int res = check(n);
    if (res == -1) 
    {
        printf("Return -1");
    }
    else
    {
        printf("A should pick %d matchstick(s).\n", res);
    }
}
