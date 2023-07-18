/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:29:05 by karisti-          #+#    #+#             */
/*   Updated: 2023/05/27 16:41:42 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <vector>
#include <list>


#define INSERTION_SORT_THRESHOLD 32


class PmergeMe
{
	private:
		std::vector<unsigned int>	vectorData;
		std::list<unsigned int>		listData;
		float						vectorTime;
		float						listTime;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& pmergeMe);
		~PmergeMe();
		PmergeMe&	operator=(const PmergeMe& pmergeMe);

		int			checkData(char* argv[], const int& argc);
		void		executeVector(char* argv[], const int& argc);
		void		executeList(char* argv[], const int& argc);
		void		printInfo(char* argv[], const int& argc);

	private:
		template <typename Container>
		void		mergeInsertionSort(Container& container);

		template <typename Container>
		void		insertionSort(Container& container);

		template <typename Iterator>
		Iterator	backIterator(Iterator it, int n);
};
