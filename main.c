/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:18:14 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/31 10:39:33 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The main function of the program
 * Arguments: (int argc, char *argv[]) int argc = number of arguments
 * char *argv[] = the arguments
 * Returns: (int) -> 0 if no errors / other number if error */
int	main(int num_arg, char *argv[])
{
	collect_map(num_arg, argv);
	return(0);
}
