#include <stdio.h>
#include <math.h> // sqrt �Լ� ����� ����

int main(void)
{
    double a, b, c, dis;

    printf("��� a, b, c�� ������� �Է��Ͻʽÿ�. : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) // a == 0 �� ��� ����������
        printf("�������� ���� %d �Դϴ�.", - c / b);

    else
    {
        dis = b*b - 4*a*c; // �Ǻ���

        if(dis >= 0)
        {
            printf("�������� ���� %f �Դϴ�."  (-b + sqrt(dis)) / 2*a);
            printf("�������� ���� %f �Դϴ�."  (-b + sqrt(dis)) / 2*a);
        }
        
        else
        {
            printf("�Ǳ��� �������� �ʽ��ϴ�.");
        }
    }

    return 0;
}