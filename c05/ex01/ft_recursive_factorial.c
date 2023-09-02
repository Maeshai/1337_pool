#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	if(nb == 0)
		return 1;

	else if(nb > 0)
		return nb * ft_recursive_factorial(nb -1);
	else
		return 0;
}
int main()
{
	printf("The rec fact of %d is %d\n",5,  ft_recursive_factorial(5));
}
