/*
1779: [2024 데이터구조 모의고사 3]

양의정수가 입력되면 SLL에 차례로 추가한다. 이때 같은 값을 가지는 양의 정수들이 입력될 수도 있다. 
0은 입력종료를 의미한다. 이후 입력되는 양의 정수들이 SLL에 포함되어 있다면, 모두 삭제 (중복된 것들을 모두 삭제)한다.
-1이 입력되면, 
SLL에 저장된 숫자들을 head부터 차례로 출력하되, 공백 1칸으로 구분한다. 끝에는 줄바꿈 문자가 없다.
SLL에 아무것도 없는 상황에서는 -999를 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int element;
typedef struct NodeType {
    struct NodeType *link;
    element data;
} NodeType;

void init_node(NodeType *head) {
    head->link = NULL;
}

void addNode(NodeType *head, element item) {
    NodeType *newNode = (NodeType *)malloc(sizeof(NodeType));
    newNode->data = item;
    newNode->link = NULL;

    NodeType *temp = head;
    while(temp->link != NULL) temp = temp->link;
    temp->link = newNode;
}

void remove_element(NodeType **head, element item) {
    NodeType *delNode = *head;
    NodeType *preNode;
    NodeType *temp;

    while(delNode != NULL) {
        if(delNode->data == item) {
            if(delNode == *head) {
                temp = *head;
                *head = (*head)->link;
                free(temp);
                delNode = *head;
                continue;
            }
            else {
                temp = delNode;
                preNode->link = delNode->link;
                free(temp);
                delNode = preNode->link;
                continue;
            }
        }
        preNode = delNode;
        delNode = delNode->link;
    }
}

void printNode(NodeType *head) {
    NodeType *node = head;
    while(node != NULL) {
        printf("%d ", node->data);
        node = node->link;
    }
}

int main(void) {
    NodeType *head = (NodeType *)malloc(sizeof(NodeType));
    head->link = NULL;
    scanf("%d", &head->data);
    int n;

    do {
        scanf("%d", &n);
        switch(n) {

            case -1: {
                if(head == NULL) printf("-999");
                else printNode(head);
                break;
            }

            case 0: {
                do {
                    scanf("%d", &n);

                    if(n == -1) {
                        if(head == NULL) printf("-999");
                        else printNode(head);
                        break;
                    }
                    
                    remove_element(&head, n);
                } while(n != -1);
                break;
            }

            default : {
                addNode(head, n);
                break;
            }
        }
    } while(n != -1);

    return 0;
}