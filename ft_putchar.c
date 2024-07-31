/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:40:15 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/31 10:42:46 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Receibes a character and write it int the selected output
 * Parameters: (char c) -> the character to write
 * Returns: (void) -> Nothing */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
