//See LICENSE for details.

/*
 * Generates a list of every other odd homework problem.
 */

#include <iostream>

int main()
{
	unsigned n; //Num problems.
	std::cout << "Enter number of homework problems: ";
	std::cin >> n;

	std::cout << "\n";

	unsigned count = 0;
	for (unsigned i = 1; i <= n; i += 4, ++count)
	{
		std::cout << " " << i;
	}
	std::cout << "\n";

	std::cout << "\n\nNumber of problemos: " << count << "\n";

	return 0;
}