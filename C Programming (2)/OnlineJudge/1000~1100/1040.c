// 우리가 주로 사용하는 intel 계열의 CPU는 Little-endian 방식으로 메모리에 저장이 된다.
// 이렇게 저장되는 방법을 조작하여 Big-endian 방식으로 출력을 하고자 한다.
// 입력과 출력은 모두 4byte의 unsigned  int 십진수 형태로 한다.

// 예를 들어, 4byte 체계의 unsigned  int 변수에 10이 들어왔을 때,
// 이를 16진수로 표현하면, 0X0000000A 이다.

// 우리의 메모리 상에서는 Littile endian 방식의 경우,
// 0 A 0 0 0 0 0
// 0이렇게 저장이 되고, 출력을 위해 다시 1byte 씩 조작하는 과정을 거쳐 10으로 출력을 한다.

// 하지만 우리는 이렇게 저장된 방식을 Big-endian 이라고 가정하고 그대로 출력하도록 조작하고자 한다.
// 즉,  위와 같은 경우를 0X0A000000 라고 생각하고 이를 10진수로 나타내면 167772160이다.

// 이러한 방식의 조작을 가해서 10이 들어올 경우 167772160 가 나오는 코드를 작성하면 된다.
// 출력 형태도 unsigned int 로 하면 된다.

// unsigned int 의 입 출력 형식 지정자는 "%u"입니다.
//     scanf("%u", &n);
//     printf("%u", n);

// 코드 작성 조건 : 헤더파일은 <stdio.h>만 사용하고, 그 외의 함수는 직접 정의하여 작성한다.
// 템플릿 없이 알아서 작성하고 입력에 대한 출력결과만 맞으면 된다.

#include <stdio.h>

int main(void) {
    unsigned int n;
    scanf("%u", &n);
    unsigned char *p = (unsigned char *)&n;
    unsigned int temp = 0;
    temp = p[0];
    p[0] = p[3];
    p[3] = temp;

    temp = p[1];
    p[1] = p[2];
    p[2] = temp;

    printf("%u", n);

    return 0;
}