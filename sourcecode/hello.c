#include<stdio.h>
void hello()
{
	printf("Hello World");
}
void somethingremotely()
{
	printf("...");
}
void extraFunction()
{
	printf("heyyyyy");
}
int main()
{	
	extraFunction();
	somethingremotely();
	hello();
	return 0;
}
