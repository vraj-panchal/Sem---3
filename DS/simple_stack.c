#include<stdio.h>

#define size 3
int a[size];
int top=-1;
int value;

void insert();
void Display();
void delete();
void Peep();

void insert()
{
    //check condition Over flow 

    if(top>=size-1)
    {
        printf("\n Overflow ");
    }
    else
    {
        printf("\n Enter Value : ");
        scanf("%d",&value);
        
        top=top+1;
        a[top]=value;

        for(int i=0;i<=top;i++)
        {
            printf("\n Element : %d ",a[i]);
        }   
    }
}


void Display()
{
    printf("\n Displaying The Details :-");

        if(top==-1)
        {
            printf("\n Underflow :-");
        }

        else
        {
            for(int i=0;i<=top;i++)
            {
            printf("\n Element : %d ",a[i]);
            }
        }
}

void delete()
{

    printf("\n Deleting The Element From Stack :-");

    //checking the condition of underflow

    if(top==-1)
    {
        printf("\n Underflow ");
    }

    else
    {
        printf("\n Delete Element : %d ",a[top]);
        top--;
    }
}

void Peep()
{
    printf("\n Peep Element :-");

    //checking condition of underflow

    if(top==-1)
    {
        printf("\n Underflow ");
    }
    else
    {
        int k;

            printf("Enter Your Index : ");
            scanf("%d",&k);

            if(k>top+1)
            {
                printf("\n PEEP is not found :-");
            }
            else
            {
                printf("\n Peeped Element : %d ",a[top-k+1]);
            }
    }
}



int main()
{

    int choice ;

        menu:

            printf("\n 1. Insetion :-");
            printf("\n 2. Display :-");
            printf("\n 3. Delete :-");
            printf("\n 4. Peep :-");
            printf("\n 5. Exit :-");

            printf("\n Enter Your Choice : ");
            scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert();

                goto menu;

            case 2:
                Display();

                goto menu;
            
            case 3:
                delete();

                goto menu;
            
            case 4:
                Peep();

                goto menu;

            case 5:

                printf("\n Thank You :-");
                exit(0);

                break;
        }

        return 0;

}