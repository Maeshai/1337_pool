#include <stdio.h>
int ft_is_prime(int nb)
{
	if(nb < 2)
		return 0;

	int i;
	i = 2;
	while(i * i <= nb) 
	{
		i++; // only need to check up to sqrt(nb)
	}
	if(nb % i == 0) //if i devides nb, nb is nor prime
	{
		return 0;
	}
	return 1; //nb is prime if no factors found
}
int main()
{
	printf("%d\n", ft_is_prime(11));
	return 0;
}
