//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include <fstream>
#include <iostream>
#include <string>

void	ft_replace(std::string& str, const std::string& pattern, const std::string& rep){
	size_t pos = -1;
	while ((pos = str.find(pattern, pos + 1)) != std::string::npos)
	{
		str.erase(pos, pattern.length());
		str.insert(pos, rep);
	}
}

int main(int argc, char  **argv) {

	if (argc != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (0);
	}


	std::ifstream file(argv[1]);
	std::ofstream output_file(std::string(argv[1]) + ".replace");

	std::string line;
	while (std::getline(file, line).good())
	{
		line.append("\n");
		ft_replace(line, argv[2], argv[3]);
		output_file << line;
	}
	ft_replace(line, argv[2], argv[3]);
	output_file << line;
}
