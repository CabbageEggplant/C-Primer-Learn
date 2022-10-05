#include <iostream>

int main(){
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	std::cout<<"j"<<typeid(j).name()<<std::endl
		<<"k"<<typeid(k).name()<<std::endl
		<<"p"<<typeid(p).name()<<std::endl
		<<"j2"<<typeid(j2).name()<<std::endl
		<<"k2"<<typeid(k2).name()<<std::endl;
	return 0;
}
