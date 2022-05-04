/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:09:53 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/03 15:10:05 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

int	check_argvs(int argc, char **argv)
{
	std::string	filename;
	std::string	str1;
	std::string	str2;

	if (argc != 4)
		return (0);
	filename = argv[1];
	str1 = argv[2];
	str2 = argv[3];
	if (filename.length() <= 0 || str1.length() <= 0 || str2.length() <= 0)
		return (0);
	return (1);
}

int	check_file(std::string filename)
{
	std::ifstream	ifs(filename);

	if(ifs.fail())
		return (0);
	return (1);
}

std::string	get_file_text(std::string filename)
{
	std::stringstream	buffer;
	std::ifstream		ifs(filename);

	buffer << ifs.rdbuf();
	ifs.close();
	return (buffer.str());
}

std::string	replace_strs(std::string text, std::string str1, std::string str2)
{
	size_t	found;

	while ((found = text.find(str1)) != std::string::npos)
	{
		text = text.erase(found, str1.length());
		text = text.insert(found, str2);
	}
	return (text);
}

void	output_text(std::string filename, std::string text)
{
	std::ofstream	ofs(filename.append(".replace"));

	ofs << text;
	ofs.close();
}

int	replace(int argc, char **argv)
{
	std::string		text;

	if (!check_argvs(argc, argv))
	{
		std::cout << "Wrong arguments." << std::endl;
		return (1);
	}
	if (!check_file(argv[1]))
	{
		std::cout << "Cant open file" << std::endl;
		return (1);
	}
	text = get_file_text(argv[1]);
	text = replace_strs(text, argv[2], argv[3]);
	output_text(argv[1], text);
	return (0);
}
