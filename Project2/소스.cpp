#include <stdio.h>

class Base
{
private:
	char* B_buf;
public:
	Base() { B_buf = new char[10]; puts("Base ����"); }
	~Base() { delete[] B_buf; puts("Base �ı�"); }
};

class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived ����"); }
	~Derived() { delete[] D_buf; puts("Derived �ı�"); }
};

class Derived_2 : public Base
{
private:
	int* D_2buf;
public:
	Derived_2() { D_2buf = new int[32]; puts("Derived2 ����"); }
	~Derived_2() { delete[] D_2buf; puts("Derived2 �ı�"); }
};

int main()
{
	Derived* pD;
	Derived_2* pD_2;
	pD = new Derived;
	pD_2 = new Derived_2;

	delete pD;
}