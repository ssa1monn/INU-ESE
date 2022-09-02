#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void remove_space(char arr[])
{
    int i = 0;
    int j = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != ' ')
        {
            arr[j] = arr[i];
            j++;
        }
        i++;
    }
    arr[j] = '\0';
}
 
void most_frequent_number(char arr[])
{
    int n = strlen(arr);
    int freq[10] = { 0 };
 
    for (int i = 0; i < n; i++)
        freq[arr[i] - '0']++;
     
    int max = 0;
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            index = i;
        }
    }
 
    printf("%d %d",index, max);
}
 
int main(void)
{
    char input[101] = { 0 };
    scanf("%[^\n]s", input);
    remove_space(input);
    char* p = strstr(input, "-999");
    *p = '\0';
    most_frequent_number(input);
 
    return 0;
}