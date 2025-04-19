/*
1778: [2024 데이터구조 모의고사 2]

저장할 수 있는 양의정수 최대 개수가 5인 큐에, 입력되는 양의정수들을 순서대로 저장한다. 
-1이 입력되면 dequeue를 하고, 그 값을 다시 enqueue한다. (비어있는 큐는 아무 것도 하지 않는다). 
-999가 입력되면 큐에 저장된 값을 dequeue하면서 공백 1개로 구분해서 출력한다. 맨 마지막에 줄바꿈 문자는 없다.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 6
typedef unsigned int element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int head, tail;
} QueueType;

void init_queue(QueueType *q) {
    q->head = q->tail = 0;
}

int is_empty(QueueType *q) {
    return (q->tail == q->head);
}

int is_full(QueueType *q) {
    return (q->tail == (q->head + 1) % MAX_QUEUE_SIZE);
}

void enqueue(QueueType *q, element item) {
    if(is_full(q)) {
        fprintf(stderr, "Queue is full\n");
        exit(1);
    }
    q->head = (q->head + 1) % MAX_QUEUE_SIZE;
    q->data[q->head] = item;
}

element dequeue(QueueType *q) {
    if(is_empty(q)) {
        fprintf(stderr, "Queue is empty\n");
        exit(1);
    }
    q->tail = (q->tail + 1) % MAX_QUEUE_SIZE;
    return q->data[q->tail];
}

int main(void) {
    int n;
    QueueType q;
    init_queue(&q);

    do {
        scanf("%d", &n);
        switch(n) {
            case -1 : {
                if(is_empty(&q)) break;
                element temp = dequeue(&q);
                enqueue(&q, temp);
                break;
            }
            case -999 : {
                while(!is_empty(&q)) printf("%d ", dequeue(&q));
                break;
            }
            default : {
                if(is_full(&q)) break;
                enqueue(&q, n);
            }
        }
    } while(n != -999);

    return 0;
}