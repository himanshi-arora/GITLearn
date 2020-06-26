
//this program is to check confilct with remote changes.
int sum( int a ,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
void fact(int n)
{	
	//test branch
	if(n==1)
	return 1;

	return n*fact(n-1);
}
void main()
{
	printf("%d",sum(2,3));
}
