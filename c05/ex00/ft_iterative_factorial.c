#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	if(nb < 0)
	return 0;

	i = 1;
	fact =1;
	while(i <= nb)
	{
		fact *= i;
		i++;
	}
	return fact;
}
int main()
{
	printf("%d\n", ft_iterative_factorial(7));
}
