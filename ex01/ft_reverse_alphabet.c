/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:37:57 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/12 10:38:05 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



 void ft_putchar( char c);

void ft_print_reverse_alphabet(void)
{
		char current_alph;
		int iter;

		current_alph = 'z';
		iter = 0;

		while (iter < 26)
		{
			ft_putchar(current_alph);

			current_alph--;
			iter++;
		}
}


