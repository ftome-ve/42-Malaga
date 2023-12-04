/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:19:24 by ftome-ve          #+#    #+#             */
/*   Updated: 2023/10/29 20:56:41 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void first(int x)
{
	int count_x;
	(count_x = 0);
	while (count_x < x)
	{
	if (count_x == 0)
			ft_putchar ('/');
	else if (count_x == (x-1))
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
	else ft_putchar('*');
	}
}
void middle (int x)
{
	int count_x;

	void rush(int x, int y);
{
	int count_y;
		(count_y = 0);
	while (count_y < y);
{
		if (count_y == 0)
			first ( x );
		else if (count_y == ( y-1 ))
			middle (x);
		else
			end ( x );
}

			count_y++;
			}
