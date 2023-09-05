#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
char *ft_strjoin(int size, char **strs, char *sep){ // mine
    if(size == 0){
        char *empty_str = (char *)malloc(1);
        empty_str[0] = '\0'; 
         return empty_str;
    }  
    int len = 0;
    int i = 0;
    while(i < size ){
        len += ft_strlen(strs[i]);
        i++;
    }
    len += size *ft_strlen(sep); // 6 * 1 = 6
    char *result = (char *)malloc((len + 1)* sizeof(char));
    result[len] = '\0';

    int j = 0; 
    while(j < size){
        ft_strcat(result, strs[j]);
        if( j < size -1){
            ft_strcat(result, sep);
        } 
        j++;  
    }
    return result;
}
int main(){
    char *strs[] = {"Hello", "world", "this", "is", "my", "dream"};
    int size = sizeof(strs) / sizeof(char *);
    char *sep = "-";

    char *result = ft_strjoin(size, strs, sep);
    printf("Concatenated string is: %s\n", result);
    free(result);

    return 0;
}
