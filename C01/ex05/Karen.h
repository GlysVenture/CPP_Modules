//
// Created by Tadeusz Kondracki on 3/7/22.
//

#ifndef CPP_MODULES_KAREN_H
#define CPP_MODULES_KAREN_H

#include <string>
#include <map>

class Karen
{
public:
	Karen();
	~Karen();

	void complain(std::string level);

private:
	static void debug(  );
	static void info(  );
	static void warning(  );
	static void error(  );

	static std::map<std::string, int> createMap();
	static const std::map<std::string, int> _map;
};

#endif //CPP_MODULES_KAREN_H
