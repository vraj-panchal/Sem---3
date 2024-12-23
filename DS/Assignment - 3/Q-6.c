#include<stdio.h>
#include<stdlib.h>

int x;
void Insertion();
void Display();
void Display_Highest_Marks();

struct Student {
    int Roll, Sem, Sub1, Sub2, Sub3;
    float total;
    char name[50];
    struct Student *next;
} *first = NULL, *last = NULL, *nn = NULL, *temp,*cur,*pre;

void Insertion() {
    
    printf("\n Enter The Value 1 to insert or -1 to stop: ");
    scanf("%d", &x);

    while (x != -1) {
        nn = (struct Student *)malloc(sizeof(struct Student));

        printf("\n\n Enter The Student Details >>>>");
        printf("\n Enter Roll No : ");
        scanf("%d", &nn->Roll);

        printf("\n Enter Name : ");
        scanf("%s", nn->name);

        printf("\n Enter The Sem : ");
        scanf("%d", &nn->Sem);

        printf("\n Enter The Sub 1 Marks : ");
        scanf("%d", &nn->Sub1);

        printf("\n Enter The Sub 2 Marks : ");
        scanf("%d", &nn->Sub2);

        printf("\n Enter The Sub 3 Marks : ");
        scanf("%d", &nn->Sub3);

        // Calculate total marks
        nn->total = nn->Sub1 + nn->Sub2 + nn->Sub3;

        nn->next = NULL;

        if (first == NULL) 
        {
            first = nn;
            last = nn;
        } 
        else 
        {
            last->next = nn;
            last = nn;
        }

        printf("\n Enter The Value 1 to insert or -1 to stop: ");
        scanf("%d", &x);
    }
}

void Display() {
    temp = first;
    printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

    while (temp != NULL) {
        printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %.2f", temp->Roll, temp->name, temp->Sem, temp->Sub1, temp->Sub2, temp->Sub3, temp->total);
        temp = temp->next;
    }
}

void Delete_by_roll_no()
{
    if(first == NULL)
    {
        printf("\n\n Student Data is Empty ");
    }
    int delete;

        printf("\n Enter The Roll NO To delete : ");
        scanf("%d",&delete);

    cur=first;
    pre=NULL;


        while(cur != NULL)
        {
            if(cur->Roll == delete)
            {
                printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");
                printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %.2f", cur->Roll, cur->name, cur->Sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);
                    

                pre->next =cur->next;
                cur->next = NULL;
                free(cur);

            }

            pre=cur;
            cur=cur->next;
        }

        if(cur == NULL)
        {
            printf("\n\nRoll Number Is Not Available.....");

        }

        if(cur == last)
        {
                printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");
                printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %.2f", cur->Roll, cur->name, cur->Sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);

            last=pre;
        }

        free(cur);
    


}



void Display_Highest_Marks() 
{
    if (first == NULL) 
    {
        printf("\n No students available.");
        return;
    }

    struct Student *max = first;
    temp = first->next;

    while (temp != NULL) 
    {
        if (temp->total > max->total) 
        {
            max = temp;
        }
        temp = temp->next;
    }

    printf("\nStudent with the highest marks:");
    
    printf("\nRoll No: %d\nName: %s\nSem: %d\nSub1: %d\nSub2: %d\nSub3: %d\nTotal: %.2f", 
           max->Roll, max->name, max->Sem, max->Sub1, max->Sub2, max->Sub3, max->total);
}

int main() {
    int choice;

     
    menu:

        printf("\n\n Your Choice >>> ");
        printf("\n 1. Insertion ");
        printf("\n 2. Display ");
        printf("\n 3. Display Highrst Marks : ");
        printf("\n 4. Delete By Roll No ");
        printf("\n 5. Exit ");
        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:

                Insertion();
                
                goto menu;

            case 2:
                Display();

                goto menu;

            case 3:

                Display_Highest_Marks();
                
                goto menu;

            case 4:

                 Delete_by_roll_no();

                 goto menu;

            default:
                printf("\nInvalid Choice!");
                break;
        }

        return 0;
    }

    

