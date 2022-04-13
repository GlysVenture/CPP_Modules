//
// Created by Tadeusz Kondracki on 4/14/22.
//

#include <cstdint>
#include <ctime>
#include <iostream>

struct Data;

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

struct Data {
	int a;
	size_t time;
	long unsigned int Long;
};

int main(){
	Data data;
	data.time = std::time(NULL);
	data.a = 42;
	data.Long = 2940738667574213234;

	std::cout << "&data: " << &data << std::endl;

	uintptr_t intptr = serialize(&data);
	std::cout << "uintptr_t: " << intptr << std::endl;
	Data *data_ptr = deserialize(intptr);
	std::cout << "data_ptr: " << data_ptr << std::endl;
	std::cout << "data_ptr->a: " << data_ptr->a << std::endl;
	std::cout << "data_ptr->time: " << data_ptr->time << std::endl;
	std::cout << "data_ptr->Long: " << data_ptr->Long << std::endl;
}
