#include <unistd.h>

void ft_putchar(char b){
	write(1, &b, 1);
}

void ft_is_negative(int n)
{	
	if(n < 0)
	{
		ft_putchar('N');
	}
	else if(n >= 0)
	{
		ft_putchar('P');
	}
}

int main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
}