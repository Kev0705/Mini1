#include <iostream>
#include <thread>
#include <Windows.h>


class my{

public:
	void myfunc(int x, int y) {
		for (int i = 0; i < 1000000; i++) 
		{
			std::cout << i << std::endl;
			std::cout << x << y;
			Sleep(100);
		}
	}

	void myfunc2() {
		for (int i = 1000000; i < 2000000; i++)
		{
			std::cout << i << " f";
			Sleep(300);
		}
	}
};
int main(void) {

	std::thread t1(&my::myfunc, my(),1,2);
	std::thread t2(&my::myfunc2, my());

	t1.join();
	t2.join();
}