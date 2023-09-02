#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	
	if (power < 0)
		return 0;
	else if (power == 0)
		return 1;

	else if(power > 1)
	{
		nb = nb * i;
		power--;
	}
	return nb;
}
int main()
{
	printf("%d\n", ft_iterative_power(10 , 3));
}
