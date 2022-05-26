#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face (void)
{
    static int count = 0;
    static int dice_face_1 = 0;
    static int dice_face_2 = 0;
    static int dice_face_3 = 0;
    static int dice_face_4 = 0;
    static int dice_face_5 = 0;
    static int dice_face_6 = 0;

    count++;
    int dice_face = rand() % 6 + 1;

    switch (dice_face)
    {
        case 1:
            dice_face_1++;
            break;
        case 2:
            dice_face_2++;
            break;
        case 3:
            dice_face_3++;
            break;
        case 4:
            dice_face_4++;
            break;
        case 5:
            dice_face_5++;
            break;
        case 6:
            dice_face_6++;
            break;
    }

    if (count == 100)
    {
        printf("1 -> %d\n", dice_face_1);
        printf("2 -> %d\n", dice_face_2);
        printf("3 -> %d\n", dice_face_3);
        printf("4 -> %d\n", dice_face_4);
        printf("5 -> %d\n", dice_face_5);
        printf("6 -> %d\n", dice_face_6);
    }
}

int main(void)
{
    srand(time(NULL));

    for(int i = 0; i < 100; i++)
        get_dice_face();

    return 0;
}