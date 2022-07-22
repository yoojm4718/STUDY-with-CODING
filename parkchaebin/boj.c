#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num[26] = { 0 }, max = 0, a = 0;
    char san[1000000];
    scanf("%s", san);
    for (int i = 0;san[i];i++)
    {
        if (islower(san[i])) san[i] = toupper(san[i]);
        num[san[i] - 65]++;
    }
    for (int k = 0; k < 26; k++)
    {
        if (max < num[k])
            max = num[k];
    }
    for (int k = 0; k < 26; k++)
    {
        if (max == num[k])
            a++;
    }
    if (a == 1)
    {
        for (int k = 0; k < 26; k++)
        {
            if (max == num[k])
                printf("%c", k + 65);
        }
    }
    else printf("?");

    return 0;
}