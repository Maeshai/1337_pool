#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int	x;
	int	*nbr;

	nbr = &x;
	ft_ft(nbr);
	printf("%d", x);
}
