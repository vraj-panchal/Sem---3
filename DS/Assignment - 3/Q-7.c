#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch[100]; // Array to hold character input
int x;

// Structure for character node
struct CharNode {
    char character;
    struct CharNode* next;
} *first1 = NULL, *last1 = NULL,*nn1=NULL,*temp1;

// Structure for integer node
struct IntNode {
    int integer;
    struct IntNode* next;
} *first2 = NULL, *last2 = NULL,*nn2=NULL,*temp2;

// Structure for merged node containing both integer and character
struct MergedNode {
    char character;
    int integer;
    struct MergedNode* next;
} *first3 = NULL, *last3 = NULL,*nn3=NULL,*temp3;

// Function prototypes
void Insert();
void Display_Char_List();
void Display_Int_List();
void Merge_Lists();
void Display_Merged_List();

// Function to create and insert a node in the main list
void Insert() {
    printf("\nEnter Character Data (-1 to End): ");
    scanf("%s", ch);
    
    printf("Enter Integer Data (-1 to End): ");
    scanf("%d", &x);

    while (x != -1) {
        nn1 = (struct CharNode*)malloc(sizeof(struct CharNode));
        nn2 = (struct IntNode*)malloc(sizeof(struct IntNode));

        nn1->character = ch[0]; // Assuming you want the first character of the string
        nn1->next = NULL;
        nn2->integer = x;
        nn2->next = NULL;

        if (first1 == NULL) {
            first1 = nn1;
            last1 = nn1;
            first2 = nn2;
            last2 = nn2;
        } else {
            last1->next = nn1;
            last1 = nn1;
            last2->next = nn2;
            last2 = nn2;
        }

        printf("\nEnter Character Data (-1 to End): ");
        scanf("%s", ch);
        
        printf("Enter Integer Data (-1 to End): ");
        scanf("%d", &x);
    }
}

void Display_Char_List() 
{
    temp1 = first1;
    printf("\nCharacter List:");
    while (temp1 != NULL) 
    {
        printf(" %c ->", temp1->character);
        temp1 = temp1->next;
    }
    printf(" NULL\n");
}

void Display_Int_List() {
    
    temp2 = first2;

    printf("\nInteger List:");
    while (temp2 != NULL) 
    {
        printf(" %d ->", temp2->integer);
        temp2 = temp2->next;
    }
    printf(" NULL\n");
}

void Merge_Lists() {
     
    temp1 = first1;
    temp2 = first2;
    
    while (temp1 != NULL && temp2 != NULL) 
    {
        nn3 = (struct MergedNode*)malloc(sizeof(struct MergedNode));

        nn3->character = temp1->character;
        nn3->integer = temp2->integer;
        nn3->next = NULL;

        if (first3 == NULL) 
        {
            first3 = nn3;
            last3 = nn3;
        } else 
        {
            last3->next = nn3;
            last3 = nn3;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
}

void Display_Merged_List() {
    
    temp3 = first3;
    printf("\nMerged List:");
    while (temp3 != NULL) 
    {
        printf(" (%c, %d) ->", temp3->character, temp3->integer);
        temp3 = temp3->next;
    }
    printf(" NULL\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n\nMenu:");
        printf("\n1. Insert (Character, Integer)");
        printf("\n2. Display Character List");
        printf("\n3. Display Integer List");
        printf("\n4. Merge Character and Integer Lists");
        printf("\n5. Display Merged List");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Insert();
                break;
            case 2:
                Display_Char_List();
                break;
            case 3:
                Display_Int_List();
                break;
            case 4:
                Merge_Lists();
                printf("Lists merged.\n");
                break;
            case 5:
                Display_Merged_List();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
