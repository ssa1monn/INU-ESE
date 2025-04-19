/*
1777: [2024 데이터구조 모의고사 1]

양의정수를 저장하는 크기 5인 stack이 있다.
양의 정수가 입력되면 stack에 push하고, 음의 정수 -1이 입력되면, stack에 저장된 모든 값들을 지운 후, 그 합만 push한다. 음의 정수 -999가 입력되면 stack에 저장된 값들을 pop 해서 순서대로 출력하시오. 
각 숫자들은 1개의 공백으로 구분하고, 맨끝에 줄바꿈 문자는 없다.
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int element;
typedef struct {
    element data[5];
    int top;
} StackType;

void init_stack(StackType *s) {
    s->top = -1;
}

int is_empty(StackType *s) {
    return (s->top == -1);
}

int is_full(StackType *s) {
    return (s->top >= 5);
}

void push(StackType *s, element item) {
    if(is_full(s)) {
        fprintf(stderr, "Stack is full");
        exit(1);
    }
    s->data[++(s->top)] = item;
}

element pop(StackType *s) {
    if(is_empty(s)) {
        fprintf(stderr, "Stack is empty");
        exit(1);
    }
    return s->data[(s->top)--];
}

int main(void) {
    int n;
    StackType stack;
    init_stack(&stack);

    do {
        scanf("%d", &n);
        switch(n) {
            case -1 : {
                int sum = 0;
                while(!is_empty(&stack)) {
                    sum += pop(&stack);
                }
                push(&stack, sum);
                break;
            }
            case -999 : {
                while(!is_empty(&stack)) {
                    printf("%d ", pop(&stack));
                }
                break;
            }
            default : {
                push(&stack, n);
                break;
            }
        }
    } while(n != -999);

    return 0;
}