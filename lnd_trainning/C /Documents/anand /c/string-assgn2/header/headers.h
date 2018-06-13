#define macisalnum(a,j)   ((((a[j] >= 'a') && (a[j] <= 'z')) || ((a[j] >= 'A') && (a[j] <= 'Z')) || ((a[j] >= '0') && (a[j] <= '9')))?1:0);
#define macisalpha(a,j)   (((a[j] >= 'a') && (a[j] <= 'z')) || ((a[j] >= 'A') && (a[j] <= 'Z'))) ? 1 : 0;
#define macisdigit(a,j)		(((a[j] >= '0') && (a[j] <= '9')))?1:0
#define macisprint(a,j)   (((a[j] >= 33) && (a[j] <= 126)))?1:0;
#define macisupper(a,j)   ( ((a[j] >= 'A') && (a[j] <= 'Z')))?1:0;
#define macislower(a,j)   ( ((a[j] >= 'a') && (a[j] <= 'z')))?1:0;
#define macisxdigit(a,j)  (((a[j] >= 'a') && (a[j] <= 'f')) || ((a[j] >= 'A') && (a[j] <= 'F')) || ((a[j] >= '0') && (a[j] <= '9')))?1:0;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int mac_isxdigit(void);
char *str_valid(void);
int myatoi(void);
int comment(void);
int syntax(void);
char* input();
void menu(void);
int fold(void);
int input_iscntrl(void);
int mac_islower(void);
int mac_isupper(void);
int mac_isprint(void);
int mac_isalpha(void);
int mac_isdigit(void);
char *user_strcpy(char *, char *);
int input_ismacalnum(void);
int user_rotate(void);
int user_iscntrl(int);
int input_strcpy(void);
int input_squeeze(void);
int input_strncpy(void);
int input_strncat(void);
int input_strncmp(void);
int input_strrchr(void);
int input_isalnum(void);
int input_isalpha(void);
int input_isupper(void);
int input_islower(void);
int input_isprint(void);
int input_isdigit(void);
int input_isxdigit(void);
int user_isalnum(int);
int user_isdigit(int);
int user_isalpha(int);
int user_isupper(int);
int user_islower(int);
int user_isprint(int);
int user_isxdigit(int);
int input_strcasecmp(void);
int user_strcasecmp(const char *, const char *);
int input_strspn(void);
int input_strcspn(void);
int input_strtok(void);
int input_strstr(void);
char *user_strstr(const char *, const char *);
char *user_squeeze(char *, char *);
char *user_strtok(char *, const char *);
int   user_strspn(const char*, const char *);
int   user_strcspn(const char*, const char *);
char *user_strrchr(const char *, int );
int   user_strncmp(const char*, const char *, int);
char *user_strncat(char *, const char *, int);
char *user_strncpy(char *, const char *, int);
int   user_rotator(char *str1, char *str2);

