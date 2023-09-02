#include <stdio.h>
int ft_sqrt(int nb)
{
	if (nb < 0)
		return 0;
	int i;
	i = 0;
	while(i <= nb)
	{
		if(i * i == nb)
		{
			return i;
		}
		i++;
	}
	return 0; //square root is an irrational number
}
int main()
{
	printf("sqrt of %d is %d\n", 16, ft_sqrt(16));
}
