
int check_litte(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int check_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    if (check_litte(str[0]))
        str[i] -= 32; 
    while(str[i] != '\0')
    {
        if (check_litte(str[i]) && !check_alpha(str[i - 1]))
            str[i] -= 32;
        i++;
    }
    return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("%s", ft_strcapitalize(argv[1]));
}