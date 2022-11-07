/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:57:50 by jquintin          #+#    #+#             */
/*   Updated: 2022/11/07 18:29:51 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../42_github/ft_printf/ft_printf.h"

int main(void)
{
	char s[] = "lol";
	char *p = s;
	unsigned int	ui = 42;

	int oF_str_len = printf("oF: olá %c", 'z');
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	int mF_str_len = ft_printf("mF: olá %c", 'z');
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %s", "zé");
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %s", "zé");
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %p", p);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %p", p);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %d", -2147483647);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %d", -2147483648);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %i", -2147483647);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %i", -2147483648);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %u", -1);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %u", -1);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %x", ui);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %x", ui);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: olá %X", ui);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: olá %X", ui);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	oF_str_len = printf("oF: OLÁ COMO ESTÃO EHEHEH top sussa %d %i %p %X %x %u", -1, -10, p, ui, ui, ui);
	printf("\n");
	printf("string lenght = %d\n", oF_str_len);
	mF_str_len = ft_printf("mF: OLÁ COMO ESTÃO EHEHEH top sussa %d %i %p %X %x %u", -1, -10, p, ui, ui, ui);
	ft_printf("\nstring lenght = %d", mF_str_len);
	printf("\n\n");

	return (0);
}
