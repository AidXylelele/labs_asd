#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;

};
struct node *newnode, *head = NULL, *temp;

void create() {
    printf("enter new n value \n");
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) {
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("enter new node value \n");
        scanf("%d", &newnode->value);
        newnode->next = NULL;


        if (head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void display() {
    if(head == NULL)
    {
        printf("double linked list is empty \n");

    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d => ",temp->value);
            temp = temp->next;
        }
    }
}

void sort() {
    struct node *i, *j;
    int num;
    for(j = head; j->next != NULL; j=j->next) {
        for(i=j->next; i != NULL; i=i->next) {
            if (i->value < 0) {
                num = i->value;
                i->value = j->value;
                j->value = num;
            }
            if (i->value == 0) {
                num = i->value;
                i->value = j->value;
                j->value = num;
            }
            if (i -> value > 0) {
                num = i->value;
                i->value = j->value;
                j->value = num;
            }
        }
    }
}
void delete() {
    struct node *tmp, *next1;
    tmp = head;
    next1 = NULL;
    while (tmp) {
        next1 = tmp->next;
        free(tmp);
        tmp = next1;
    }
    (head) = NULL;
}

int main() {
    create();
    display();
    printf("sorted doubly linked list\n");
    sort();
    display();
    printf("deleted doubly linked list\n");
    delete();
    display();
    return 0;
}