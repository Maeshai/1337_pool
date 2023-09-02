#include <unistd.h>
int ft_fibonacci(int index)
{
	if(index < 0)
		return -1;

	else if(index < 2)
		return index;
	else
		return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
int main()
{
	printf("%d\n", ft_fibonacci(10));
	return 0;
}
