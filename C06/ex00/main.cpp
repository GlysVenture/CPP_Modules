//
// Created by Tadeusz Kondracki on 4/12/22.
//

#include <iostream>
#include <string>

enum lit_type{
	c,
	i,
	f,
	d
};

lit_type get_type(std::string const & str);

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "illegal parameters" << std::endl;
		return (0);
	}
	char character = 0;
	int integer = 0;
	float floating = 0;
	double doub = 0;
	switch (get_type(argv[1]))
	{

		case c:
			character = argv[1][0];
			integer = static_cast<int>(character);
			floating = static_cast<float>(character);
			doub = static_cast<double >(character);
			break;
		case i:
			try { integer = std::stoi(argv[1]); }
			catch (std::exception &e) { std::cerr << "invalid integer" << std::endl; }
			if (integer <= 126 && integer >= 32)
				character = static_cast<char>(integer);
			floating = static_cast<float>(integer);
			doub = static_cast<double>(integer);
			break;
		case f:
			try { floating = std::stof(argv[1]); }
			catch (std::exception &e) { std::cerr << "invalid float" << std::endl; }
			integer = static_cast<int>(floating);
			if (integer <= 126 && integer >= 32)
				character = static_cast<char>(floating);
			doub = static_cast<double>(floating);
			break;
		case d:
			try { doub = std::stod(argv[1]); }
			catch (std::exception &e) { std::cerr << "invalid double" << std::endl; }
			integer = static_cast<int>(doub);
			if (integer <= 126 && integer >= 32)
				character = static_cast<char>(doub);
			floating = static_cast<float>(doub);
			break;
	}

	bool is_possible = !(isinf(floating) || isnan(floating) || isnan(doub) || isinf(doub));

	if (!is_possible)
		std::cout << "char: impossible\n";
	else if (character == 0)
		std::cout << "char: non displayable\n";
	else
		std::cout << "char: " << character << "\n";
	if (is_possible)
		std::cout << "int: " << integer << "\n";
	else
		std::cout << "int: impossible\n";
	std::cout << "float: " << floating << "f\n"
	<< "double: " << doub << std::endl;

}

lit_type get_type(std::string const & str){
	if (str == "nan" || str == "+inf" || str == "-inf"){
		return d;
	}
	if (str == "nanf" || str == "+inff" || str == "-inff"){
		return f;
	}
	if (str.length() > 1 && str.find('.') != std::string::npos){
		str[1];
		if (str[str.length() - 1] == 'f')
			return f;
		else
			return d;
	}
	else if (str.length() == 1 && !isnumber(str[0])) {
		return c;
	}
	return i;
}
