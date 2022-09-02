#include <stdio.h>

int password = 1234;

int check(void)
{
    static int count = 0;
    int input;
    printf("Enter the password: ");
    scanf("%d", &input);
    count++;

    if (input == password)
        return 1;
    else if (count == 3)
        return 0;
    else if (input != password)
        return 2;

    return 2;
}

int main(void)
{
    for(;;)
    {
        int c = check();

        if(c == 0)
        {
            printf("You have entered the password incorrectly 3 times.\n");
            break;
        }
        else if(c == 1)
        {
            printf("You have entered the password correctly.\n");
            break;
        }
        else if(c = 2)
        {
            printf("You have entered the password incorrectly.\n");
        }
    }

    return 0;
}