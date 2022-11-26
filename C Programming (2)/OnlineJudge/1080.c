// 다음 그림과 같은 Leaky ReLU라는 함수를 간단하게 구현하고자 한다. 

// 1차원 double 타입의 배열에 순차적으로 원소 10개를 입력받는다.
// 입력 형식 지정자는 "%lf"를 사용하면 됩니다. scanf("%lf", ...) 

// 입력 받은 원소의 값 중 음수라면, 0.01 배를 한 값을 출력하고 ( y = 0.01 x)
// 0 또는 양수라면 원래의 값을 출력하면 된다. ( y = x )

// 단, 출력하는 값은 소숫점 넷째자리에서 반올림한 형태로 출력한다.
// 아래 입출력 예시를 참고하여 조건에 맞게 출력하라.

// 코드 작성 조건 : 헤더파일은 <stdio.h>만 사용하고, 그 외의 함수는 직접 정의하여 작성한다. , 
// 템플릿 없이 알아서 작성하고 입력에 대한 출력결과만 맞으면 된다.

#include <stdio.h>

int main(void) {
    double arr[10];
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
        if(arr[i] < 0) {
            printf("%.4lf ", 0.01 * arr[i]);
        }
        else {
            printf("%.4lf ", arr[i]);
        }
    }
    return 0;
}