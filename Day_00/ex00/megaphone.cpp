#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < argc; i++) 
		{
			int l = strlen(argv[i]);
			for (int j = 0; j < l; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				std::cout << argv[i][j];
			}
		}
	}
	std::cout << std::endl;
}
