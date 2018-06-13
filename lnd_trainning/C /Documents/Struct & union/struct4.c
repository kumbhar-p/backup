# include <stdio.h>
#if 1
struct a {
	int c:22, :0, a:5;
	char e:5, :2, f:1;
	short int g:5, :0;

}d;
int main ()
{
	printf ("%d\n", sizeof (d));
	return 0;
}
#endif
# if 0
void showbits (int a);
struct a {
	int c:22, :0, a:5;
	char e:5, :2, f:1;
	short int g:5, :0;
	//char d:5;

}d = {1, 1, 1, 1, 1};
int main ()
{
	int *p = &d;
	printf ("%d\n", sizeof (d));
	showbits (*(p + 1));
	showbits (*p);
	return 0;
}
void showbits (int a)
{
	int i = 31;

	for (i = 31; i >= 0; i--) {
		(a & (1 << i)) ? printf ("1") : printf ("0");
		if (!(i % 8))
			printf (" ");
	}
	return ;
}
#endif

