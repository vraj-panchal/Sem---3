// Find Out the central value with array with help of Two Pointer

#include <stdio.h>

int main()
{
    int a[5];
    int *p;
    int *q;

    p = &a[0];
    q = &a[4];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter THe NUmber [%d] : ", i + 1);

        scanf("%d", &a[i]);
    }

   
        while (p != q)
        {
            *p++;
            *q--;
        }
    

    printf("Your Central Number Is : %d  ", *p);

    return 0;
}
