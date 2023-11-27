#include <iostream>

int	main(int counter, char **input)
{
	if (counter < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for(int index = 1; input[index]; index++)
	{
		for (int letter = 0; input[index][letter]; letter++)
			input[index][letter] = toupper(input[index][letter]);
		std::cout << input[index];
	}
	std::cout << std::endl;

	return (0);
}
