
int sum(int a, int b, int c);
int some_func(int a,int b,int c);

int kmain(int a,int b,int c)
{
	return some_func(a,b,c);
}

int sum(int a, int b, int c)
{
	return a+b+c;
}

int some_func(int a,int b,int c)
{
	return a + (b * 2) + (c * 3);
}
