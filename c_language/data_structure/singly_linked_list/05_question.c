#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char letter;
    struct Node* next;
} Node;

Node* createNode(char letter) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->letter = letter;
    newNode->next = NULL;
    return newNode;
}

Node* insert(char* text, int index) {
    if (index >= strlen(text)) {
        return NULL;
    }
    
    if (text[index] == ' ') {
        return insert(text, index + 1);
    }
    
    Node* newNode = createNode(text[index]);
    newNode->next = insert(text, index + 1);
    return newNode;
}

void printList(Node* head) {
    if (head == NULL) {
        printf("\n");
        return;
    }
    printf("%c ", head->letter);
    printList(head->next);
}

int isEqual(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->letter != head2->letter) {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL;
}

int main() {
    char text1[100];
    char text2[100];
    printf("Enter the first string: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = '\0';

    Node* head1 = insert(text1, 0);
    Node* head2 = insert(text2, 0);

    printf("List 1: ");
    printList(head1);
    printf("List 2: ");
    printList(head2);

    if (isEqual(head1, head2)) {
        printf("The lists are equal.\n");
    } else {
        printf("The lists are NOT equal.\n");
    }

    Node* temp;
    while (head1 != NULL) {
        temp = head1;
        head1 = head1->next;
        free(temp);
    }
    while (head2 != NULL) {
        temp = head2;
        head2 = head2->next;
        free(temp);
    }

    return 0;
}
