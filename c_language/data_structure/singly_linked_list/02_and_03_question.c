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

Node* insert(char* text) {
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            continue;
        }
        
        Node* newNode = createNode(text[i]);
        if (head == NULL) {
            head = newNode;
        } else {
            temp->next = newNode;
        }
        temp = newNode;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%c ", temp->letter);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    char text[100];    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    Node* head = insert(text);
    printList(head);

    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
