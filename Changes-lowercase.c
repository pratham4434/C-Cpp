#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str;
    str = (char *)malloc(100 * sizeof(char));
    int i, count = 0;
    printf("Enter a statement:-\n");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] <= 122 && str[i] >= 97)
        {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);
    free(str);
    return 0;
}
