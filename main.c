
#include "libft.h"

void print_split(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
    {
        printf("[%s]\t", arr[i]);
        i++;
    }
}
void free_split(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
    {
        free(arr[i]);
        i++;
    }
	free(arr);
}
int main(void)
{
	const char str[] = "Thisxisxaxtestxstringx";
	char c = 'x';
	char **arr = ft_split(str, c);
	print_split(arr);
	free_split(arr);
	return (0);
}