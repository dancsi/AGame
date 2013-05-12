#include "input.h"


InputBuffer::InputBuffer(void)
{
	printf("InputBuffer inicijalizovan (TODO)\n");
}


InputBuffer::~InputBuffer(void)
{
	printf("InputBuffer unisten (TODO)\n");
}

bool InputBuffer::empty()
{
	return false;
}

char InputBuffer::getNext()
{
	if(empty()) return '\0';
	else return 'a';
}