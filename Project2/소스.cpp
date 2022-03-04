#include <stdio.h>

class Base
{
private:
	char* B_buf;
public:
	Base() { B_buf = new char[10]; puts("Base 积己"); }
	~Base() { delete[] B_buf; puts("Base 颇鲍"); }
};

class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived 积己"); }
	~Derived() { delete[] D_buf; puts("Derived 颇鲍"); }
};

class Derived_2 : public Base
{
private:
	int* D_2buf;
public:
	Derived_2() { D_2buf = new int[32]; puts("Derived2 积己"); }
	~Derived_2() { delete[] D_2buf; puts("Derived2 颇鲍"); }
};

int main()
{
	Derived* pD;
	Derived_2* pD_2;
	pD = new Derived;
	pD_2 = new Derived_2;

	delete pD;
}