/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:39:44 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/12 10:40:12 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




 void ft_putchar( char c);


void ft_print_numbers(void)
{
	char current_number;
	int iteration ;

	current_number = '0';
	iteration = 0;

	while( iteration < 10 )
	{
			ft_putchar(current_number);

			current_number++;
			iteration ++;
	}
}



