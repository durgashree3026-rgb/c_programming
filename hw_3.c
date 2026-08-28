#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append(char **arr, int *n, char *name)
{
    arr[*n] = malloc(strlen(name) + 1);

    strcpy(arr[*n], name);

    (*n)++;
}

int main()
{
    char **arr;
    int n = 0;

    arr = malloc(2 * sizeof(char *));

    append(arr, &n, "Durga");
    append(arr, &n, "Shree");

    printf("Names:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}
