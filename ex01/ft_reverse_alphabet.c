
void ft_putchar(char );

void ft_print_reverse_alphabet(void)
{
		char current_alph = 'z';

		for (int i=0 ; i < 26 ; i++)
		{
			ft_putchar(current_alph);

			current_alph--;
		}
}

