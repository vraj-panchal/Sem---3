#include <stdio.h>
#include <stdlib.h>

int x;

struct Node
{
    int data;
    struct Node *Next;

} *first = NULL, *last = NULL, *nn = NULL, *pre, *cur, *temp;

void create()
{
    printf("\n Enter The Data (-1 to End ) : ");
    scanf("%d", &x);

    while (x != -1)
    {
        nn = (struct Node *)malloc(sizeof(struct Node));

        nn->data = x;
        nn->Next = NULL;

        if (first == NULL)
        {
            first = nn;
            last = nn;
        }
        else
        {
            nn->Next = first;
            last->Next = nn;
            last = nn;
        }

        printf("\n Enter The Data (-1 to End ) : ");
        scanf("%d", &x);
    }
}

void Display()
{
    temp = first;

    while (temp != last)
    {
        printf("\n Element : %d", temp->data);
        temp = temp->Next;
    }

    printf("\n Element : %d", temp->data);
}

void Insert_First()
{
    printf("\n Enter The Data : ");
    scanf("%d", &x);

    nn = (struct Node *)malloc(sizeof(struct Node));

    nn->data = x;
    nn->Next = first;
    first=nn;
}

void Insert_middel()
{
    int pos;
    int count = 1;

    pre = NULL;
    cur = first;

    printf("\n Enter The Possition : ");
    scanf("%d", &pos);

    printf("\n Enter The Data : ");
    scanf("%d", &x);

    nn = (struct Node *)malloc(sizeof(struct Node));

    while (count < pos)
    {
        pre = cur;
        cur = cur->Next;
        count++;
    }

    nn->data = x;
    pre->Next = nn;
    nn->Next = cur;
}

void Insert_last()
{
    printf("\n Enter The Data : ");
    scanf("%d", &x);

    nn = (struct Node *)malloc(sizeof(struct Node));

    nn->data = x;
    last->Next = nn;
    last = nn;
    nn->Next = NULL;
}

void Delete_first()
{
    if (first == NULL)
    {
        printf("\n Under Flow ");
    }
    else
    {
        temp = first;
        first = first->Next;
        free(temp);
    }
}

void Delete_middel()
{
    int pos;
    int count = 1;

    pre = NULL;
    cur = first;

        printf("\n Enter The Possition : ");
        scanf("%d",&pos);

    while (count < pos)
    {
        pre = cur;
        cur = cur->Next;
        count++;
    }

    pre->Next = cur->Next;
    free(cur);
}

void Delete_last()
{
    temp = first;

    while (temp->Next != last)
    {
        temp = temp->Next;
    }
    free(last);
    last = temp;
    last->Next = first;
}

int main()
{
    create();
    int c;
menu:

    printf("\n 1. Insert first : ");
    printf("\n 2. Insert Middel : ");
    printf("\n 3. insert Last : ");
    printf("\n 4. Delete first : ");
    printf("\n 5. Delete Middel : ");
    printf("\n 6. Delete Last : ");
    printf("\n 7. Display");

    printf("\n Enter your Choice : ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:

        Insert_First();

        goto menu;

    case 2:

        Insert_middel();

        goto menu;

    case 3:

        Insert_last();

        goto menu;

    case 4:

        Delete_first();

        goto menu;

    case 5:

        Delete_middel();

        goto menu;
    case 6:

        Delete_last();

        goto menu;

    case 7:

        Display();

        goto menu;

    case 8:

        printf("\n Program Is Exit Thank You : ");

        break;

    default:

        printf("\n Please Valid Choice : ");

        break;
    }

    return 0;
}
