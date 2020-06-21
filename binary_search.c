#include<stdio.h>
#include "sort.c"
void search(int s, int *x, int size);

int main()
{
    int a[5] = {51,42,1,25,84};
    display(a, 5);
    sort(a, 5);
    search(42, a, 5);
    return 0;
}

void search(int s, int *x, int size)
{
    int hi = size - 1, lo = 0, mid;

    while(1 > 0)
    {
        mid = (hi + lo)/2;
        if(x[mid] == s)
        {
            printf("\nThe required element found and is at %dth place(human)", mid+1);
            break;
        }
        else
        {
            if(x[lo] < x[mid])
            {
                lo++;
            }
            else
            {
                hi++;
            }            
        }
    }
    if(x[mid] != s)
    {
        printf("The element you\'re looking for is not found.\n");
    }
    
}