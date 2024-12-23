#include <stdio.h>

#define SIZE 4;
#define ROWS 3;
#define COLS 3;

input_1Darray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n-Enter the Array Elements [%d] : ", i);
            scanf("%d", &a[i]);
    }
}

display_1Darray(int a[],int size)
{

    printf("\n--Array Elements...");
    for( int i= 0 ;i<size ;i++)
    {
        printf("%d",a[i]);
    }
}

input_2Darray(int a[ROWS][COLS])
{
    for(int i = 0; i<ROWS ; i++)
    {
        for(int j = 0 ; i< COLS ; i++)
        {
            printf("Enter 2D array Elements [%d][%d] : ",i,j);

                scanf("%d",&a[i][j]);
        }
    }
}

display_2Darray(int a[ROWS][COLS])
{

    printf("\n--2D Array Elements.. ");
    for(int i = 0; i<ROWS ; i++)
    {
        for(int j = 0 ; i< COLS ; i++)
        {
           

                printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int choice ,size=SIZE;
    int a[SIZE];

            printf("\n Enter Your Choice ... ");

}