#include <stdio.h>
#include "libft.h"

int main()
{

	printf("ft_atoi: %d\n", ft_atoi("-3456"));

	char _bzero[4] = "1234";
	ft_bzero(&_bzero, 2);
    printf("ft_bzero: %c\n", _bzero[1]);

	printf("ft_calloc: %p\n", ft_calloc(10, sizeof(char)));

	printf("ft_isalnum: %d\n", ft_isalnum('2'));

	printf("ft_isalpha: %d\n", ft_isalpha('2'));

	printf("ft_isascii: %d\n", ft_isascii('2'));

	printf("ft_isdigit: %d\n", ft_isdigit('2'));

	printf("ft_isprint: %d\n", ft_isprint('2'));

	char s[] = "abcd";
	printf("ft_memchr: %p\n", (char *)ft_memchr(s, 'c', 3));
	printf("ft_memchr: %p\n", s);

	char src1[] = "abcdefghij";
	char dest1[] = "klmnopqr";
	printf("ft_memcpy: memory %p\n", ft_memcpy(&src1[2], src1, 8));
	printf("-> src string: %s\n", src1);
	printf("-> dest string: %s\n", dest1);

	char src2[] = "abcdefghij";
	char dest2[] = "klmnopqr";
	printf("ft_memmove: memory %p\n", ft_memmove(&src2[2], src2, 8));
	printf("-> src string: %s\n", src2);

	char s1[] = "adcd";
	char s2[] = "abcd";
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));

	printf("ft_memset: %p ->", (char *)ft_memset(s, 'c', 3));
	printf("ft_memset: %p ->", s);
	printf("ft_memset: %s\n", (char *)ft_memset(s, 'c', 3));
    
	char s3[] = "abcdef";
	printf("ft_strchr: %p\n", (char *)ft_strchr(s3, 'c'));
	printf("ft_strchr: %s\n", ft_strchr(s3, 'c'));
	printf("ft_strchr: %s\n", s3);	

	char src3[] = "abcdef";
	char dest3[] = "ghijk";
	printf("ft_strlen: %ld\n", ft_strlen(dest3));
	printf("ft_strcat: %s\n", (char *)ft_strlcat(dest3, src3, 4));

	//char src4[] = "abcdef";
	//char dest4[] = "ghijk";
	//printf("ft_strlcpy: %s\n", (char *)ft_strlcpy(dest4, src4, 4);

	char s4[] = "aecd";
	char s5[] = "abcd";
	printf("ft_strcmp: %d\n", ft_strncmp(s4, s5, 3));

	char hay[] = "bcaecd";
	char nee[] = "'\0";
	printf("ft_strnstr: %s\n", (char *)ft_strnstr(hay, nee, 4));
	printf("ft_strnstr: %s\n", hay);

	char s6[] = "abcdef";
	printf("ft_strrchr: %p\n", (char *)ft_strrchr(s6, 'd'));
	printf("ft_strrchr: %p\n", &s6);
	
	printf("ft_tolower: %c\n", ft_tolower('L'));
	printf("ft_toupper: %c\n", ft_toupper('u'));

	char s7[] = "baby";
	printf("ft_strdup: %p\n", (char *)ft_strdup(s7));
	printf("ft_strdup: %s\n", (char *)ft_strdup(s7));
	
	char s8[] = "baby";
	printf("ft_substr: %p\n", (char *)ft_substr(s7, 1, 3));
	printf("ft_substr: %s\n", (char *)ft_substr(s7, 1, 3));
	
	return(0);
}
