#include <unistd.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i;
	int len;

	i = argc - 1;
	while(i > 0)
	{
		len = strlen(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i--;
	}
	return 0;
}
