#include <cstring>
#include <iostream>

int main()
{
	char input[100] = "The strtok split string into tokens";
	char *token = std::strtok(input, " ");
	while(token != NULL) {
		std::cout << token << '\n';
		token = std::strtok(NULL, " ");
	}
}
