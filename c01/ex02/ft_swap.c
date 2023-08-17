#include <stdio.h>

void ft_swap(int *a, int *b){

	    int temp;
	        temp = *a;
			*a = *b;
				*b = temp;
}
int main(){

	    int x = 10;
	        int y = 20;

		    ft_swap(&x, &y);
		        printf("After swapping the value of a is : %d, the value of b is : %d\n", x, y);
			    return 0; 
}
