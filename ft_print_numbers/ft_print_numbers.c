#include <unistd.h>

void ft_putchar(char x){
	write(1, &x, 1);
}

void ft_print_numbers(void)
{
	for(char i= '0'; i <= '9'; i++)
	{
		ft_putchar(i);
	}
}

int main(void)
{
	ft_print_numbers();
}