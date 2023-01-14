#include <unistd.h>

void ft_putchar(char a){
	write(1, &a, 1);
}

void ft_print_reverse_alphabet(void)
{
	for(char c='z'; c >= 'a'; c--)
	{
		ft_putchar(c);
	}
}

int main(void){

	ft_print_reverse_alphabet();

}