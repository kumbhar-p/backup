/* my_atoi function */

int my_atoi(char *ch)
{
	int i, n, sign;
	for (i = 0; *(ch + i) == ' ' || *(ch + i) == '\n' \
				|| *(ch + i) == '\t'; i++)
		i++;
	sign = (*(ch+i) == '-') ? -1 : 1;
	if ((*(ch + i) == '+') || (*(ch + i) == '-'))
		i++;
	for(n = 0; *(ch + i) >= '0' && *(ch + i) <= '9'; i++)
		n = 10 * n + (*(ch +i) - '0');
	return sign * n;
}
