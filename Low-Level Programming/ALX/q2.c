#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 *
 * Return: value of the bit at the given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) // Check if index is out of range
        return -1;

    return (n >> index) & 1;
}

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);

    return 0;
}