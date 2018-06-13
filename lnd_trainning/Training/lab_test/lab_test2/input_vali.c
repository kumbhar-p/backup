

char *input_vali(char *str)
{
	int i;
	for(i = 0; *(str + i) != '\0'; i++) {
		if((*(str + i) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
			continue;
		else
			return 0;
	}

	return str;
}
