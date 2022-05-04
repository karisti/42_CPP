/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:22:41 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 11:15:20 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"


int main(void)
{
	Data		data;
	Data		*des_data;
	uintptr_t	serialized_data;

	data.value = 1;

	std::cout << &data << " -> data value: " << data.value << std::endl;

	serialized_data = serialize(&data);

	std::cout << "Serialized: " << serialized_data << std::endl;

	des_data = deserialize(serialized_data);
	
	std::cout << des_data << " -> data value: " << des_data->value << std::endl;

	return (0);
}
