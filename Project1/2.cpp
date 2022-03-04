#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char*& Name)
{

}

int main()
{
	int a = 11;
	a = a - 1;

	int* pa = &a;
	pa = pa - 1;

	printf("%d", a);
	printf("%d", pa);
}