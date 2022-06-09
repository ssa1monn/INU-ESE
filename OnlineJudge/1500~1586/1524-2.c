#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void most_frequent_alpha(char str[])
{
    int freq[26] = { 0 };
     
    for (int i = 0; i < strlen(str); i++)
            freq[ tolower(str[i]) - 'a']++;
 
    for(;;)
    {
        int maxidx = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > freq[maxidx])
                maxidx = i;
        }
        if(freq[maxidx] == 0)
            break;
         
        printf("%c", maxidx + 'a');
        freq[maxidx] = 0;
    }
}
 
int main(void)
{
    char str[31] = { 0 };
    scanf("%s", str);
    most_frequent_alpha(str);
    return 0;
}