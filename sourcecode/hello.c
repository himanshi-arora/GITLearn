#include<stdio.h>
void hello()
{
	printf("Hello World");
}
void somethingremotely()
{
	printf("...");
}
int main()
{
	somethingremotely();
	hello();
	return 0;
}
