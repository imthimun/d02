
 void ft_putchar( char c);


void ft_print_numbers(void)
{
	char current_number ='0';
	int iteration = 0;

	while( iteration < 10 )
	{
			ft_putchar(current_number);

			current_number++;
			iteration ++;
	}
}



