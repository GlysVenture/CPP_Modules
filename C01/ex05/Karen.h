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

	static int get_id(std::string level);
};

#endif //CPP_MODULES_KAREN_H
