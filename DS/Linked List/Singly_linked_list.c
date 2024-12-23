#include <stdio.h>
#include <stdlib.h>

int value;

struct Node {
    int data;
    struct Node *next;
} *first = NULL, *last = NULL, *nn = NULL, *temp = NULL;

void Creation() 
{
    printf("\n Enter value (0 to stop): ");
    scanf("%d", &value);
    
    while (value != 0) {
        nn = (struct Node *)malloc(sizeof(struct Node));
        nn->data = value;
        nn->next = NULL;
        
        if (first == NULL) {
            first = nn;
            last = nn;
        } else {
            last->next = nn;
            last = nn;
        }
        
        printf("\n Enter value (0 to stop): ");
        scanf("%d", &value);
    }
}

void display() {
    temp = first;
    
    if (temp == NULL) {
        printf("\n The list is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("\n Element : %d", temp->data);
        printf(" next %d",temp->next);
        temp = temp->next;
    }
}

int main() {
    int choice;
    
    do {
        printf("\n\n Your Choice List :-\n");
        printf(" 1. Creation/Insertion\n");
        printf(" 2. Display\n");
        printf(" 3. Exit\n");
        
        printf(" Enter Your Choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                Creation();
                break;
                
            case 2:
                display();
                break;
                
            case 3:
                printf("\n Thank You!\n");
                break;
                
            default:
                printf("\n Invalid choice, please try again.\n");
        }
    } while (choice != 3);
    
    return 0;
}
