#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
} Queue;

/* create empty queue */
void makeQueue(Queue *q) {
    q->front = q->rear = NULL;
}

/* enqueue */
void enqueue(Queue *q, int val) {
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Queue Full\n");
        return;
    }

    temp->data = val;
    temp->next = NULL;

    if (q->front == NULL) {   // first node
        q->front = q->rear = temp;
    } else {
        q->rear->next = temp;
        q->rear = temp;
    }

    printf("%d added\n", val);
}

/* dequeue */
int dequeue(Queue *q) {
    if (q->front == NULL) {
        printf("Queue Empty\n");
        return -1;
    }

    Node *temp = q->front;
    int val = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)      // queue becomes empty
        q->rear = NULL;

    free(temp);
    printf("%d removed\n", val);
    return val;
}

/* display queue */
void showQueue(Queue q) {
    Node *temp = q.front;
    if (temp == NULL) {
        printf("Queue empty\n");
        return;
    }

    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* menu */
void menu() {
    printf("\n===== MENU =====\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int main() {
    Queue q;
    makeQueue(&q);

    int choice, val;

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            enqueue(&q, val);
            break;

        case 2:
            dequeue(&q);
            break;

        case 3:
            showQueue(q);
            break;

        case 4:
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
