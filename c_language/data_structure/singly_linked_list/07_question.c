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

char findLastElement(Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return '\0';
    }
    while (head->next != NULL) {
        head = head->next;
    }
    return head->letter;
}

int main() {
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    Node* head = insert(text, 0);
    printf("Original List: ");
    printList(head);

    char lastElement = findLastElement(head);
    if (lastElement != '\0') {
        printf("The last element of the list is: %c\n", lastElement);
    }
    
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
