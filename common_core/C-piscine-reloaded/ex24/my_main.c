#include "ft.h"

int main(void)
{
    char *str = "THIS IS MY EPIC TEST";
    char *str_b = "THIS IS MY NICE TEST";
    int a = 4;
    int b = 2;
    int *a_ptr = &a;
    int *b_ptr = &b;

    printf("ft_putchar:\n");
    ft_putchar("O\n\n");
    printf("ft_putstr:\n");
    ft_putstr(str);
    printf("\nft_strcmp:\n%d\n", ft_strcmp(str, str_b));
    printf("\nft_strlen:\n%d\n", ft_strlen(str));
    printf("%d and %d", *a_ptr, *b_ptr);
    ft_swap(a_ptr, b_ptr);
    printf("%d and %d", *a_ptr, *b_ptr);
}