#include<stdio.h>
void sort(int *x, int size);
void swap(int *a, int *b);
void display(int *x, int size);
int sizer(int *x);


// int main()
// {
//     int a[] = {51,42,1,25,84,4,25,94,57,66,50,55,43,85,100,29,77,20,87,13,11,75,27,51,78,26,81,4,91,54,86,7,6,71,62,82,30,15,58,4,18,92,41,91,19,82,90,95,39,46,94,60,31,80,99,29,41,48,71,90,95,29,95,3,60,49,42,14,98,75,31,52,85,29,21,23,42,63,50,31,33,64,97,78,8,13,32,40,66,19,2,69,91,19,27,31,6,48,68,18};
//     int size = sizeof(a)/sizeof(a[0]);
//     sort(a, size);
//     display(a, size);
//     return 0;
// }


int sizer(int *x)
{
    return sizeof(x)/sizeof(x[0]);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sort(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(*(a + j + 1) < *(a + j))
            {
                swap((a + j), (a + j + 1));
            }
        }
    }
}

void display(int *x, int size)
{
    printf("The given array is : [");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(x+ i));
    }
    printf("]\n");
}