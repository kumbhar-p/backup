#include<stdio.h>

int main()
{
	char *str = NULL;
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
}



void escape(char * s, char * t) 
{
    int i, j;
    i = j = 0;
    
    while ( t[i] ) {
        
        /*  Translate the special character, if we have one  */
        
        switch( t[i] ) {
            s[j++] = '\\';
        case '\n':
            s[j] = 'n';
            break;
            
        case '\t':
            s[j] = 't';
            break;
            
        case '\a':
            s[j] = 'a';
            break;
            
        case '\b':
            s[j] = 'b';
            break;
            
        case '\f':
            s[j] = 'f';
            break;
            
        case '\r':
            s[j] = 'r';
            break;
            
        case '\v':
            s[j] = 'v';
            break;
            
        case '\\':
            s[j] = '\\';
            break;
            
        case '\"':
            s[j] = '\"';
            break;
            
        default:
            
            /*  This is not a special character, so just copy it  */
            
            s[j] = t[i];
            break;
        }
        ++i;
        ++j;
    }
    s[j] = t[i];    /*  Don't forget the null character  */
}
