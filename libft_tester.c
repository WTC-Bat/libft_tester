/*
 *	NOTE: 
 *	Comparison functions (ft_strcmp, ft_memcmp, etc.) may FAIL depending on how the function was written.
 *	Comparison are checked by checking if the output is [>, < or == 0]. Additional testing for these
 *	functions may be required, as the signs may need to be reversed.
 *
 *	Also, allocation functions (ft_strnew, ft_bzero, etc.) may be incorrectly tested.
 *
 *	Put* functions are used to write output string (apart from putnbr). If a put* funtion fails, no
 *	ouput will be given or an error will occur
 */

#include "libft.h"
#include <stdio.h>

static int		slen(char *s)
{
	int		cnt = 0;
	while (s[cnt])
		cnt++;
	return (cnt);
}

static int		as_int(char *s)
{
	int		cnt;
	int		out_int;
	
	cnt = 0;
	out_int = 0;
	while (s[cnt])
	{
		out_int = out_int * 10 + (s[cnt] - '0');
		cnt++;
	}
	return (out_int);
}

static int		scmp(char const *s1, char const *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		cnt;
	int		ok;

	if (argc > 1)
	{
		if (argv[1][0] != 'o')
		{
			printf("Invalid option\n");
			return (1);
		}
	}

	printf("libft_tester by mvanwyk\n\n");
	printf("Beware of incorrect results on comparison functions (ft_strcmp, ft_memcmp, etc.) and\nallocation functions (ft_strnew, ft_bzero, etc.)\n\n");
	printf("ft_strdel test is not tested, you may want to fix it or comment it out.\n\n");
	printf("Functions currently excluded from test:\n");
	printf("\tft_strmap\n\tft_strmapi\n\tft_strsplit (present, commented out)\n");
	printf("\tft_memcmp\n\tft_strlcat\n\tft_memalloc (present, commented out)");
	printf("\n\tft_striter\n\tft_striteri\n\tft_memdel\n\n\n");
	printf("TESTS:\n------\n\n");

	/*ft_atoi*/
	if (ft_atoi("42") == 42)
		printf("ft_atoi:\t\tOK\n");
	else
		printf("ft_atoi\t\tFAIL\n");

	/*ft_itoa*/
	if (as_int(ft_itoa(42)) == 42)
		printf("ft_itoa:\t\tOK\n");
	else
		printf("ft_itoa:\t\tFAIL\n");
			
	/*ft_strcat*/
	char	strcat1[] = "Mat";
	char	*strcat2 = "thew";
	//printf("ft_strcat(\"Mat\", \"thew\"):\t[\"Matthew\"]\n\t%s\n\n", ft_strcat(strcat1, strcat2));
	if (scmp(ft_strcat(strcat1, strcat2), "Matthew") == 0)
		printf("ft_strcat:\t\tOK\n");
	else
		printf("ft_strcat:\t\tFAIL\n");

	/*ft_strchr*/	
	//printf("ft_strchr(\"abcdefg\", \'d\'):\t[\"defg\"]\n\t%s\n\n", ft_strchr("abcdefg", 'd'));
	if (scmp(ft_strchr("abcdefg", 'd'), "defg") == 0)
		printf("ft_strchr:\t\tOK\n");
	else
		printf("ft_strchr:\t\tFAIL\n");

	/*ft_strcpy*/
	char	strcpy1[] = "bat";
	char	*strcpy2 = "tab";
	//printf("ft_strcpy(\"bat\", \"tab\"):\t[\"tab\"]\n\t%s\n\n", ft_strcpy(strcpy1, strcpy2));
	if (scmp(ft_strcpy(strcpy1, strcpy2), "tab") == 0)
		printf("ft_strcpy:\t\tOK\n");
	else
		printf("ft_strcpy:\t\tFAIL\n");

	/*ft_strdup*/
	//printf("ft_strdup(\"cheese\"):\t[\"cheese\"]\n\t%s\n\n", ft_strdup("cheese"));
	if (scmp(ft_strdup("cheese"), "cheese") == 0)
		printf("ft_strdup:\t\tOK\n");
	else
		printf("ft_strdup:\t\tFAIL\n");

	/*ft_strjoin*/
	//printf("ft_strjoin(\"Fat\", \"Bat\"):\t[\"FatBat\"]\n\t%s\n\n", ft_strjoin("Fat", "Bat"));
	if (scmp(ft_strjoin("Fat", "Bat"), "FatBat") == 0)
		printf("ft_strjoin:\t\tOK\n");
	else
		printf("ft_strjoin:\t\tFAIL\n");

	/*ft_strmap*/


	/*ft_strmapi*/


	/*ft_strncat*/
	char	strncat1[] = "Mat";
	char	*strncat2 = "thew";
	//printf("ft_strncat(\"Mat\", \"thew\", 4):\t[\"Matthew\"]\n\t%s\n\n", ft_strncat(strncat1, strncat2, 4));
	if (scmp(ft_strncat(strncat1, strncat2, 4), "Matthew") == 0)
		printf("ft_strncat:\t\tOK\n");
	else
		printf("ft_strncat:\t\tFAIL\n");

	/*ft_strncpy*/
	char	strncpy1[] = "Fat";
	char	*strncpy2 = "Bat";
	//printf("ft_strncpy(\"Fat\", \"Bat\", 1):\t[\"Bat\"]\n\t%s\n\n", ft_strncpy(strncpy1, strncpy2, 1));
	if (scmp(ft_strncpy(strncpy1, strncpy2, 1), "Bat") == 0)
		printf("ft_strncpy:\t\tOK\n");
	else
		printf("ft_strncpy:\t\tFAIL\n");
	
	/*ft_strnew*/	//!!
	if (!ft_strnew(6))
		printf("ft_strnew:\t\tFAIL\n");
	else
		printf("ft_strnew:\t\tOK\n");

	/*ft_strnstr*/
	if (scmp(ft_strnstr("superkalafrajalistic", "kala", 11), "kalafrajalistic") == 0)
		printf("ft_strnstr:\t\tOK\n");
	else
		printf("ft_strnstr:\t\tFAIL\n");

	/*ft_strrchr*/
	if (scmp(ft_strrchr("abcdefedcba", 'd'), "dcba") == 0)
		printf("ft_strrchr:\t\tOK\n");
	else
		printf("ft_strrchr:\t\tFAIL\n");

	/*ft_strsplit*/
	/*
	char	strsplit1[] = "*hello*fellow***students*";
	char	**strsplit2;
	strsplit2 = (char **)malloc(sizeof(char *) * 3);
	strsplit2 = ft_strsplit(strsplit1, '*');
	cnt = 0;
	ok = 1;
	while (cnt < 3)
	{
		switch cnt:
		{
			case 0:
				if (scmp(strsplit2[0], "hello") != 0)
					ok = 0;
				break;
			case 1:
				if (scmp(strsplit2[1], "fellow") != 0)
					ok = 0;
				break;
			case 2:
				if (scmp(strsplit2[2], "students") != 0)
					ok = 0;
				break;
		}
	}
	if (ok == 1)
		printf("ft_strsplit:\t\tOK\n");
	else
		printf("ft_strsplit:\t\tFAIL\n");
	*/

	/*ft_strstr*/
	if (scmp(ft_strstr("superkalafrajalistic", "perk"), "perkalafrajalistic") == 0)
		printf("ft_strstr:\t\tOK\n");
	else
		printf("ft_strstr:\t\tFAIL\n");

	/*ft_strsub*/
	if (scmp(ft_strsub("!#*FatBatABBACAB", 3, 6), "FatBat") == 0)
		printf("ft_strsub:\t\tOK\n");
	else
		printf("ft_strsub:\t\tFAIL\n");	

	/*ft_strtrim*/	
	if (scmp(ft_strtrim("  \t Fat B at  \t\n\n"), "Fat B at") == 0)
		printf("ft_strtrim:\t\tOK\n");
	else
		printf("ft_strtrim:\t\tFAIL\n");

	/*ft_tolower*/
	//printf("ft_tolower(\'A\'):\t[\'a\']\n\t%c\n", ft_tolower('A'));
	if (ft_tolower('A') == 'a' &&
		ft_tolower('Z') == 'z')
		printf("ft_tolower:\t\tOK\n");
	else
		printf("ft_tolower:\t\tFAIL\n");

	/*ft_toupper*/
	//printf("ft_toupper(\'a\'):\t[\'A\']\n\t%c\n", ft_toupper('a'));
	if (ft_toupper('a') == 'A' &&
		ft_toupper('z') == 'Z')
		printf("ft_toupper:\t\tOK\n");
	else
		printf("ft_toupper:\t\tFAIL\n");

	/*ft_isalnum*/
	if (ft_isalnum('0') == 1 &&
		ft_isalnum('9') == 1 &&
		ft_isalnum('A') == 1 &&
		ft_isalnum('Z') == 1 &&
		ft_isalnum('a') == 1 &&
		ft_isalnum('z') == 1 &&
		ft_isalnum('!') == 0)
		printf("ft_isalnum:\t\tOK\n");
	else
		printf("ft_isalnum:\t\tFAIL\n");
	
	/*ft_isalpha*/
	if (ft_isalpha('A') == 1 &&
		ft_isalpha('Z')	== 1 &&
		ft_isalpha('a') == 1 &&
		ft_isalpha('z') == 1 &&
		ft_isalpha('0') == 0 &&
		ft_isalpha('!') == 0)
		printf("ft_isalpha:\t\tOK\n");
	else
		printf("ft_isalpha:\t\tFAIL\n");
	
	/*ft_isascii*/
	if (ft_isascii('!') == 1 &&
		ft_isascii('A') == 1 &&
		ft_isascii('0') == 1)
		printf("ft_isascii:\t\tOK\n");
	else
		printf("ft_isascii:\t\tFAIL\n");
	
	/*ft_isdigit*/
	if (ft_isdigit('0') == 1 &&
		ft_isdigit('9') == 1 &&
		ft_isdigit('a') == 0 &&
		ft_isdigit('!') == 0)
		printf("ft_isdigit:\t\tOK\n");
	else
		printf("ft_isdigit:\t\tFAIL\n");
	
	/*ft_isprint*/
	if (ft_isprint('0') == 1 &&
		ft_isprint('9') == 1 &&
		ft_isprint('A') == 1 &&
		ft_isprint('Z') == 1 &&
		ft_isprint('a') == 1 &&
		ft_isprint('z') == 1 &&
		ft_isprint(' ')	== 1 &&
		ft_isprint('@') == 1)
		printf("ft_isprint:\t\tOK\n");
	else
		printf("ft_isprint:\t\tFAIL\n");

	/*ft_memcmp*/


	/*ft_strcmp*/
	//Loose test//
	if (ft_strcmp("cheese", "cheesy") < 0 &&
		ft_strcmp("cheesy", "cheese") > 0 &&
		ft_strcmp("cheese", "cheese") == 0)
		printf("ft_strcmp:\t\tOK\n");
	else
		printf("ft_strcmp:\t\tFAIL\n");
	
	/*ft_strequ*/
	if (ft_strequ("cheese", "cheese") == 1 &&
		ft_strequ("cheese", "cheesy") == 0)
		printf("ft_strequ:\t\tOK\n");
	else
		printf("ft_strequ:\t\tFAIL\n");

	/*ft_strncmp*/
	//Loose test//
	if (ft_strncmp("cheese", "cheasy", 4) > 0 &&
		ft_strncmp("cheasy", "cheese", 4) < 0 &&
		ft_strncmp("cheese", "cheese", 3) == 0)
		printf("ft_strncmp:\t\tOK\n");
	else
		printf("ft_strncmp:\t\tFAIL\n");

	/*ft_strnequ*/
	if (ft_strnequ("crackers", "crack", 5) == 1 &&
		ft_strnequ("crackers", "craca", 5) == 0)	//!!
		printf("ft_strnequ:\t\tOK\n");
	else
		printf("ft_strnequ:\t\tFAIL\n");
	
	/*ft_strlcat*/
	

	/*ft_strlen*/
	if (ft_strlen("FatBat") == 6)
		printf("ft_strlen:\t\tOK\n");
	else
		printf("ft_strlen:\t\tFAIL\n");

	/*ft_bzero*/
	char	bzero1[] = "bzerotest";
	ft_bzero((void *)bzero1, sizeof(bzero1));
	cnt = 0;
	ok = 1;
	while (bzero1[cnt])
	{
		if (bzero1[cnt] != 0)
		{
			ok = 0;
			continue;
		}
	}
	if (ok == 1)
		printf("ft_bzero:\t\tOK\n");
	else
		printf("ft_bzero:\t\tFAIL\n");

	/*ft_memalloc*/
	//void	*memalloc1 = ft_memalloc(6);
	//if (memalloc1)
	//	printf("ft_memalloc:\t\tFAIL\n");
	//else
	//	printf("ft_memalloc:\t\tOK\n");

	/*ft_memccpy*/
	char	memccpy1[] = "abcdefg";
	char	*memccpy2;
	memccpy2 = (char *)malloc(sizeof(char) * 4);
	memccpy2 = (char *)ft_memccpy(memccpy2, memccpy1, 'd', 4);
	if (scmp(memccpy2, "efg") == 0)
		printf("ft_memccpy:\t\tOK\n");
	else
		printf("ft_memccpy:\t\tFAIL\n");

	/*ft_memchr*/
	if (scmp(ft_memchr("abcdefg", 'c', 4), "cdefg") == 0)
		printf("ft_memchr:\t\tOK\n");
	else
		printf("ft_memchr:\t\tFAIL\n");

	/*ft_memcpy*/
	char	memcpy1[] = "FatBatABBACAB";
	char	*memcpy2;
	memcpy2 = (char *)malloc(sizeof(char) * 8);
	memcpy2 = ft_memcpy(memcpy2, memcpy1, 6);
	if (scmp(memcpy2, "FatBat") == 0)
		printf("ft_memcpy:\t\tOK\n");
	else
		printf("ft_memcpy:\t\tFAIL\n");

	/*ft_memdel*/


	/*ft_memmove*/
	char	s1[] = "cheese";
	char	s2[] = "crackers";
	if (scmp((char *)ft_memmove(s1, s2, 5), "cracke") == 0)
		printf("ft_memmove:\t\tOK\n");
	else
		printf("ft_memmove:\t\tFAIL\n");

	/*ft_memset*/
	char	*memset1;
	memset1 = (char *)malloc(sizeof(char) * 7);
	ft_memset(memset1, '@', 6);
	cnt = 0;
	ok = 1;
	while (cnt < 6)
	{
		if (memset1[cnt] != '@')
		{
			ok = 0;
			continue;
		}
		cnt++;
	}
	if (ok == 1)
		printf("ft_memset:\t\tOK\n");
	else
		printf("ft_memset:\t\tFAIL\n");

	/*ft_putchar*/
	char	*pchar = "ft_putchar:\t\tOK\n";
	while (*pchar)
		ft_putchar(*pchar++);

	/*ft_putchar_fd*/
	char	*pcharfd = "ft_putchar_fd:\t\tOK\t(stderr)\n";
	while (*pcharfd)
		ft_putchar_fd(*pcharfd++, 2);

	/*ft_putendl*/
	ft_putendl("ft_putendl:\t\tOK");

	/*ft_putendl_fd*/
	ft_putendl_fd("ft_putendl_fd:\t\tOK\t(stderr)", 2);

	/*ft_putnbr*/
	printf("ft_putnbr:\t\tOK\t(if next line reads 42)\n");
	ft_putnbr(42);
	printf("\n");

	/*ft_putnbr_fd*/
	printf("ft_putnbr_fd:\t\tOK\t(stderr) (if next line reads 42)\n");
	ft_putnbr_fd(42, 2);
	printf("\n");

	/*ft_putstr*/
	ft_putstr("ft_putstr:\t\tOK\n");

	/*ft_putstr_fd*/
	ft_putstr_fd("ft_putstr:\t\tOK\t(stderr)\n", 2);

	/*ft_strclr*/
	char	strclr1[] = "clear";
	ft_strclr(strclr1);
	if (strclr1[0] == '\0')
		printf("ft_strclr:\t\tOK\n");
	else
		printf("ft_strclr:\t\tFAIL\n");

	/*ft_strdel*/
	char	*strdel1 = "delete";
	ft_strdel(&strdel1);

	/*ft_striter*/


	/*ft_striteri*/


	/*
	 *	Ouputs below are incomplete
	 *
	 *	Below are the outputs for the various functions. They would usually be accessed by using the 'o' option [./a.out o].
	 *	However, if there is a critial error in one of the checks above, these outputs will never be reached.
	 */


	if (argc == 1)
		return (0);


	printf("\n\n");


	/*ft_atoi*/
	printf("ft_atoi(\"42\"):\t[42]\n\t%i\n\n", ft_atoi("42"));

	/*ft_itoa*/
	printf("ft_itoa(42):\t[\"42\"]\n\t%s\n\n", ft_itoa(42));

	/*ft_strnstr*/
	printf("ft_strnstr(\"superkalafrajalistic\", \"kalafr\", 11):\t[\"kala\"]\n\t%s\n\n", ft_strnstr("superkalafrajalistic", "kala", 11));

	/*ft_strrchr*/
	printf("ft_strrchr(\"abcdefedcba\", 'd'):\t[\"dcba\"]\n\t%s\n\n", ft_strrchr("abcdefedcba", 'd'));

	/*ft_strstr*/
	printf("ft_strstr(\"superkalafrajalistic\", \"perk\"):\t[\"perkalafrajalistic\"]\n\t%s\n\n", ft_strstr("superkalafrajalistic", "perk"));

	/*ft_strsub*/
	printf("ft_stsub(\"!#*FatBatABBACAB\", 3, 6):\t[\"FatBat\"]\n\t%s\n\n", ft_strsub("!#*FatBatABBACAB", 3, 6));

	/*ft_strtrim*/	
	char	*trim = ft_strtrim("  \t Fat B at  \t\n\n");
	printf("ft_strtrim(\"  \t Fat B at  \t\n\n\"):\t[\"Fat B at\"]\n\t%s\n", trim);
	printf("Initial length:\t\t%i\n", slen("  \t Fat B at  \t\n\n"));
	printf("Trimmed length:\t\t%i\n\n", slen(trim));

	/*ft_tolower*/
	printf("ft_tolower(\'A\'):\t[\'a\']\n\t%c\n", ft_tolower('A'));

	/*ft_toupper*/
	printf("ft_toupper(\'a\'):\t[\'A\']\n\t%c\n", ft_toupper('a'));

	/*ft_strcat*/
	printf("ft_strcat(\"Mat\", \"thew\"):\t[\"Matthew\"]\n\t%s\n\n", ft_strcat(strcat1, strcat2));	

	/*ft_strchr*/	
	printf("ft_strchr(\"abcdefg\", \'d\'):\t[\"defg\"]\n\t%s\n\n", ft_strchr("abcdefg", 'd'));	

	/*ft_strcmp*/
	char	*strcmp1 = "cheese";
	char	*strcmp2 = "cheesy";
	char	*strcmp3 = "crackers";
	printf("ft_strcmp(\"cheese\", \"cheesy\"):\n\t%i\n", ft_strcmp(strcmp1, strcmp2));
	printf("ft_strcmp(\"cheese\", \"crackers\"):\n\t%i\n\n", ft_strcmp(strcmp1, strcmp3));	

	/*ft_strcpy*/
	printf("ft_strcpy(\"bat\", \"tab\"):\t[\"tab\"]\n\t%s\n\n", ft_strcpy(strcpy1, strcpy2));	

	/*ft_strdup*/
	printf("ft_strdup(\"cheese\"):\t[\"cheese\"]\n\t%s\n\n", ft_strdup("cheese"));

	/*ft_strjoin*/
	printf("ft_strjoin(\"Fat\", \"Bat\"):\t[\"FatBat\"]\n\t%s\n\n", ft_strjoin("Fat", "Bat"));

	/*ft_strncat*/
	printf("ft_strncat(\"Mat\", \"thew\", 3):\t[\"Matthew\"]\n\t%s\n\n", ft_strncat(strncat1, strncat2, 4));

	/*ft_strncpy*/
	printf("ft_strncpy(\"Fat\", \"Bat\", 1):\t[\"Bat\"]\n\t%s\n\n", ft_strncpy(strncpy1, strncpy2, 1));

	/*ft_isalnum*/
	printf("ft_isalnum(\'A\'):\t[1]\n\t%i\n", ft_isalnum('A'));
	printf("ft_isalnum(\'0\'):\t[1]\n\t%i\n", ft_isalnum('0'));
	printf("ft_isalnum(\'!\'):\t[0]\n\t%i\n\n", ft_isalnum('!'));
	
	/*ft_isalpha*/
	printf("ft_isalpha(\'A\'):\t[1]'n\t%i\n\n", ft_isalpha('A'));
	printf("ft_isalpha(\'0\'):\t[0]'n\t%i\n\n", ft_isalpha('0'));
	
	/*ft_isascii*/

	
	/*ft_isdigit*/

	
	/*ft_isprint*/

	
	/*ft_strequ*/

	
	/*ft_strlen*/

	
	/*ft_strnequ*/


	return (0);
}
