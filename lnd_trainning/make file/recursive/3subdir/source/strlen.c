/* my_strlen function */

int mstrlen(const char *str)
{
	char *ptr = (char*)str;
	while (*str++)
		;
	return (str - ptr - 1);
}
