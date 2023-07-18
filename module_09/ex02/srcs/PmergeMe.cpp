/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:29:00 by karisti-          #+#    #+#             */
/*   Updated: 2023/05/27 16:48:44 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"
#include "../includes/utils.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& pmergeMe)
{
	*this = pmergeMe;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& pmergeMe)
{
	this->vectorData = pmergeMe.vectorData;
	this->listData = pmergeMe.listData;
	this->vectorTime = pmergeMe.vectorTime;
	this->listTime = pmergeMe.listTime;
	return *this;
}

/*
	Check if all args are unsigned int
*/
int		PmergeMe::checkData(char* argv[], const int& argc)
{
	for (int i = 1; i < argc; i++)
	{
		if (!isUnsignedInt(argv[i]))
			return 0;
	}

	return 1;
}

/*
	Load args to vector and sort it
	It calculates the time that it takes
*/
void		PmergeMe::executeVector(char* argv[], const int& argc)
{
	double	startTime = getCurrentTime();

	for (int i = 1; i < argc; i++)
		vectorData.push_back(stringToUnsignedInt(argv[i]));

	mergeInsertionSort(vectorData);

	this->vectorTime = (getCurrentTime() - startTime) / 1000.0; // nanoseconds to microseconds
}

/*
	Load args to list and sort it
	It calculates the time that it takes
*/
void		PmergeMe::executeList(char* argv[], const int& argc)
{
	double	startTime = getCurrentTime();
	
	for (int i = 1; i < argc; i++)
		listData.push_back(stringToUnsignedInt(argv[i]));

	mergeInsertionSort(listData);
	
	this->listTime = (getCurrentTime() - startTime) / 1000.0; // nanoseconds to microseconds
}

/*
	Output results to the standard output
*/
void		PmergeMe::printInfo(char* argv[], const int& argc)
{
	std::cout << "Before:";
	
	for (int i = 1; i < argc; i++)
		std::cout << " " << argv[i];
	std::cout << std::endl;
	
	std::cout << "After: ";
	// std::cout << "After vector: ";
	for (std::vector<unsigned int>::iterator it = this->vectorData.begin(); it != this->vectorData.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	/*
	std::cout << "After list  : ";
	for (std::list<unsigned int>::iterator it = this->listData.begin(); it != this->listData.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
	*/

	std::cout << "Time to process a range of " << this->vectorData.size() << " elements with std::vector : " << this->vectorTime << " us" << std::endl;
	std::cout << "Time to process a range of " << this->listData.size() << " elements with std::list   : " << this->listTime << " us" << std::endl;
}


/*
	Insertion sort function
*/
template <typename Container>
void	PmergeMe::insertionSort(Container& container)
{
	typedef typename Container::iterator Iterator;
	
	Iterator first = container.begin();
	Iterator last = container.end();
	Iterator j, prev;
	
	for (Iterator i = first; i != last; ++i)
	{
		j = i;
		while (j != first && *(prev = backIterator(j, 1)) > *j) {
			std::swap(*prev, *j);
			--j;
		}
	}
}

/*
	Go back in an iterator
*/
template <typename Iterator>
Iterator	PmergeMe::backIterator(Iterator it, int n)
{
	while (n--)
		--it;
		
	return it;
}

/*
	Merge-insert sort algorithm
*/
template <typename Container>
void	PmergeMe::mergeInsertionSort(Container& container)
{
	typedef typename Container::iterator Iterator;
	size_t size = container.size();
	
	if (size <= 1)
		return;

	if (size <= INSERTION_SORT_THRESHOLD)
		insertionSort(container);
	else
	{
		Iterator middle = container.begin();
		std::advance(middle, container.size() / 2);

		Container left(container.begin(), middle);
		Container right(middle, container.end());

		mergeInsertionSort(left);
		mergeInsertionSort(right);

		Iterator leftIter = left.begin();
		Iterator rightIter = right.begin();
		Iterator containerIter = container.begin();

		while (leftIter != left.end() && rightIter != right.end())
		{
			if (*leftIter < *rightIter)
			{
				*containerIter = *leftIter;
				++leftIter;
			}
			else
			{
				*containerIter = *rightIter;
				++rightIter;
			}
			++containerIter;
		}

		while (leftIter != left.end())
		{
			*containerIter = *leftIter;
			++leftIter;
			++containerIter;
		}

		while (rightIter != right.end())
		{
			*containerIter = *rightIter;
			++rightIter;
			++containerIter;
		}
	}
}
