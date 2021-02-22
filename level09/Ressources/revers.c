#include <stdio.h>

int main(int ac, char **av){
    if (ac == 2){
    char *str = av[1];
    int i = 0;
    while (str[i])
    {
        str[i] -= i;
        i++;
    }
    printf("%s\n", str);
    }
    return(0);
}