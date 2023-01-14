#include <unistd.h>

void ft_putchar(char t){
	write(1, &t, 1);
}

void ft_print_alphabet(void)
{
	for(char x = 'a'; x <= 'z'; x++){
		ft_putchar(x);
	}
}

int main(void)
{
	ft_print_alphabet();
}



