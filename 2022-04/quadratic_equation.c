#include <stdio.h>
#include <math.h> // sqrt 함수 사용을 위함

int main(void)
{
    double a, b, c, dis;

    printf("계수 a, b, c를 순서대로 입력하십시오. : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) // a == 0 일 경우 일차방정식
        printf("방정식의 근은 %d 입니다.", - c / b);

    else
    {
        dis = b*b - 4*a*c; // 판별식

        if(dis >= 0)
        {
            printf("방정식의 근은 %f 입니다."  (-b + sqrt(dis)) / 2*a);
            printf("방정식의 근은 %f 입니다."  (-b + sqrt(dis)) / 2*a);
        }
        
        else
        {
            printf("실근이 존재하지 않습니다.");
        }
    }

    return 0;
}