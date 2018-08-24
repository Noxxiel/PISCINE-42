/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:16:03 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/11 18:49:56 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_eight_queens_puzzle(void);
 
int main(void)
{
	// ------[Ex00]------ //
//	 printf("%d", ft_iterative_factorial(0));
	// // ------[Ex01]------ //
//	 printf("%d", ft_recursive_factorial(0));
	// // ------[Ex02]------ //
//	printf("%d", ft_iterative_power(-2, 2));
	// // ------[Ex03]------ //
	//  printf("%d", ft_recursive_power(-4, 0));
	// // ------[Ex04]------ //
	//  printf("%d", ft_fibonacci(6));
	// // ------[Ex05]------ //
	 // printf("%d", ft_sqrt(2147395600));
	// // ------[Ex06]------ //
//	  printf("%d", ft_is_prime(10));
	// // ------[Ex07]------ //
	  printf("%d", ft_eight_queens_puzzle());
	// // ------------------ //
	return (0);
}
