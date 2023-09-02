#include <unistd.h>
int ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return 1;
	else if(power < 0)
		return 0;
	else
	{
		return nb * ft_recursive_power(nb, power -1);
	}
}
int main()
{
	int nb = 8;
	int power = 2;
	int result = ft_recursive_power(nb, power);

	printf("%d^%d is : %d", nb, power, result);
}
