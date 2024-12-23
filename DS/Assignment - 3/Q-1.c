#include<stdio.h>
#include<stdlib.h>

int x;

struct Node
{
    int data;
    struct Node *next;
    
}*first=NULL , *last=NULL , *nn=NULL , *cur , *pre , *temp;


void create()
{
    printf("\n Enter The value (-1 is Exit )");
    scanf("%d",&x);

        while (x != -1)
        {
            nn=(struct Node *)malloc(sizeof(struct Node));

            nn->data=x;
            nn->next=NULL;

                if(first==NULL)
                {
                    first=nn;
                    last=nn;
                }
                else
                {
                    last->next=nn;
                    last=nn;

                }

                printf("\n Enter The value (-1 is Exit )");
                scanf("%d",&x);
        }
        
}

void display()
{
    temp=first;

        while (temp != last)

        {
            printf("\n Elements : %d ",temp->data);
            temp=temp->next;
        }
        printf("\n Elements : %d ",temp->data);
        
}

void Insert_first()
{
    printf("\n Enter The Data : ");
    scanf("%d",&x);

        nn=(struct Node *)malloc(sizeof(struct Node));
    
            nn->data=x;
            nn->next=first;
            first=nn;
}

void Insert_middel()
{
    int pos;
    int count=1;
    pre=NULL;
    cur=first;

        printf("\n Enter The Possition : ");
        scanf("%d",&pos);

            printf("\n Enter The Data : ");
            scanf("%d",&x);

        nn=(struct Node *)malloc(sizeof(struct Node));

        while (count<pos)
        {
            pre=cur;
            cur=cur->next;
            count++;
        }

        nn->data=x;
        pre->next=nn;
        nn->next=cur;
        
        
}

void Insert_last()
{
    printf("\n Enter Data : ");
    scanf("%d",&x);

        nn=(struct Node *)malloc(sizeof(struct Node));

            nn->data=x;
            last->next=nn;
            last=nn;
            nn->next=NULL;
}


void Delete_first()
{
    if(first==NULL)
    {
        printf("\n Under Flow ");

    }
    else
    {
        temp=first;
        first=first->next;
        free(temp);
    }

}

void Delete_middel()
{
    int pos;
    int count=1;
    pre=NULL;
    cur=first;

        printf("\n Enter The Possition : ");
        scanf("%d",&pos);

        while(count<pos);
        {
            pre=cur;
            cur=cur->next;
            count++;
        }

        pre->next=cur->next;
        free(cur);
}

void Delete_last()
{
    temp=first;

        while(temp->next!=last)
        {
            temp=temp->next;
        }
        free(temp);
        last=temp;
        last->next=NULL;
}

void shorting()
{
    pre=first;
    cur=first->next;

        while(cur!=NULL)
        {
            temp=pre;

            while(pre!=NULL)
            {
                if(temp->data > pre->data)
                {
                    int value = temp->data;
                    temp->data = pre->data;
                    pre->data = value;
                }

                pre = pre->next;
            }

            pre = cur;
            cur=cur->next;
        }
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
            printf("\n 8. Shorting : ");

                printf("\n Enter your Choice : ");
                scanf("%d", &c);

            switch (c)
            {
            case 1:

                    Insert_first();

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

                    display();

                goto menu;

            case 8:

                shorting();
                

                goto menu;

            case 9:

                printf("\n Program Is Exit Thank You : ");

                break;


            
            default:

                printf("\n Please Valid Choice : ");

                break;
            }

            return 0;
}