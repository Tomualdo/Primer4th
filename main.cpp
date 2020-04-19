#include <conio.h>
#include<iostream>

static unsigned long funcCall = 0;

void print(const char* s) {
	for (; *s != 0 ; s++)
	{
		_putch(*s);
	}
	_putch(' ');
}

void read(char* r,int size){
	const char* const pEnd = r + size;
	for (char c = _getch(); c != 13 && r < pEnd ;c = _getch(), r++)
	{
		_putch(c);
		*r = c;
	}
	*r = 0;
}
int str2int(const char* s) {
	int pos = 1;
	int val = 0;
	// scan till end of the string by creating new pointer
	const char* p = s;
	for (; *p >= '0' && *p <= '9'; p++);
	p--;
	//  5 8	6 2
	//  ^s    ^p

	for (; p >= s; p--) {
		val += (*p-'0') * pos;
		pos *= 10;
	}

	return val;
}

unsigned long fibVal(unsigned long f) {
	funcCall++;
	if (f < 2)
	{
		return f;
	}
	return fibVal(f - 1) + fibVal(f - 2);

}

unsigned long fibVal2(int f) {
	unsigned long a = 1, b = 1;
	unsigned long c = 0;
	for (int i = 3; i <= f; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}
int main() {
	
	char msg[] = { " test " };
	char text[5];

	read(text,5);
	//print(text);

	int textCount = str2int(text);
	
	std::cout<<std::endl;
	std::cout << fibVal(textCount) << std::endl;

	std::cout << std::endl;
	std::cout << "func was called: " << funcCall; std::cout << " times" << std::endl;

	std::cout << fibVal2(textCount) << std::endl;


	/*for (int i = 0; i < textCount; i++)*/
	{
		print(msg);
	}

	_putch('\n');
	return 0;
}