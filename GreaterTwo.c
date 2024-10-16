#include<stdio.h>

int max();
int main()
{
    printf("%d", max());
}

int max()
{
    int a, b;
    printf("enter any two number: ");
    scanf("%d %d", &a, &b);
    
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
