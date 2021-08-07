#include <stdio.h>
#include "libft.h"

char mapi_ft(unsigned int c, char n)
{
	n = n + 1;
	return (n);
}

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

	int		intitoa = 1234;
	char	*malitoa;
	malitoa = ft_itoa(intitoa);
	printf("ft_itoa: %s\n", malitoa);
	free(malitoa);

	char s[] = "abcd";
	printf("ft_memchr: %p ", (char *)ft_memchr(s, 'c', 3));
	printf("-> %p\n", s);

	char src1[] = "123456789";
	char dest1[] = "";
	printf("ft_memcpy: memory %p ", ft_memcpy(&src1[3], src1, 6));//dest 456789 src 123456789
	printf("-> src string: %s \n", &src1[3]);


	char src2[] = "123456789";
	char dest2[] = "";
	printf("ft_memmove: %p ", ft_memmove(&src2[3], src2, 6));//dest 456789 src 123456789
	printf("-> src string: %s\n", &src2[3]);

	char src3[] = "123456789";
	char dest3[] = "";
	printf("ft_memcpy: memory %p ", ft_memcpy(src3, &src3[3], 6));//dest 123456789 src 456789
	printf("-> src string: %s \n", src3);


	char src4[] = "123456789";
	char dest4[] = "";
	printf("ft_memmove: %p ", ft_memmove(src4, &src4[3], 6));//dest 123456789 src 456789 
	printf("-> src string: %s\n", src4);

	char s1[] = "adcd";
	char s2[] = "abcd";
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));

	printf("ft_memset: %p ", (char *)ft_memset(s, 'c', 3));
	printf("-> %p ", s);
	printf("-> %s\n", (char *)ft_memset(s, 'c', 3));

	char s3[] = "abcdef";
	printf("ft_strchr: %p ", (char *)ft_strchr(s3, 'c'));
	printf("->  %s ", ft_strchr(s3, 'c'));
	printf("-> %s\n", s3);	

	char src100[] = "abcdef";
	char dest100[] = "ghijk";
	printf("ft_strlcat: %ld", (size_t )ft_strlcat(dest100, src100, 5));
	printf(" -> %s\n", dest100);

	char srccpy[] = "abcdef";
	char destcpy[] = "ghijk";
	printf("ft_strlcpy: %ld", (size_t )ft_strlcpy(destcpy, srccpy, 4));
	printf(" -> %s\n", destcpy);

	char s100[] = "ghijk";
	printf("ft_strlen: %ld\n", ft_strlen(s100));

	char s4[] = "aecd";
	char s5[] = "abcd";
	printf("ft_strcmp: %d\n", ft_strncmp(s4, s5, 3));

	char hay[] = "bcaecd";
	char nee[] = "ae";
	printf("ft_strnstr: %s", (char *)ft_strnstr(hay, nee, 4));
	printf("-> %s\n", hay);

	char s6[] = "abcdef";
	printf("ft_strrchr: %s", (char *)ft_strrchr(s6, 'c'));
	printf("-> %p\n", &s6);
	
	printf("ft_tolower: %c\n", ft_tolower('L'));
	printf("ft_toupper: %c\n", ft_toupper('u'));

	char s7[] = "baby";
	printf("ft_strdup: %p", (char *)ft_strdup(s7));
	printf("-> %s\n", (char *)ft_strdup(s7));
	
	char s8[] = "baby";
	char *mal;
	mal = ft_substr(s8, 1, 2);
	printf("ft_substr: %p", mal);
	printf("-> %s\n", mal);
	free(mal);

	char dest6[] = "abc";
	char src6[] = "123";

	printf("ft_strlcat: %ld\n", ft_strlcat(dest6, src6, 3));
	printf("ft_strlcpy: %ld\n", ft_strlcpy(dest6, src6, 3));
	
	char s9[] = "baby";
	char s10[] = "bob";
	char *mal2;
	mal2 = ft_strjoin(s9, s10);
	printf("ft_strjoin: %p", mal2);
	printf("-> %s\n", mal2);
	free(mal2);

	char	strtrim[] = "ww1234ww";
	char	strset[] = "w";
	char	*maltrim;
	maltrim = ft_strtrim(strtrim, strset);
	printf("ft_strtrim: %s\n", maltrim);
	free(maltrim);
	
	char	strsplit[] = "agora vai dar certo";
	char	c = ' ';
	char	**retor;

	retor = ft_split(strsplit, c);

	printf("%s\n", retor[0]);
	printf("%c\n", retor[0][5]);
	printf("%s\n", retor[1]);
	printf("%c\n", retor[1][3]);
	printf("%s\n", retor[2]);
	printf("%c\n", retor[2][3]);
	printf("%s\n", retor[3]);
	printf("%c\n", retor[3][5]);

	printf("%p\n\n", retor[4]);

	printf("%p\n", &retor[0]);
	printf("%p\n", &retor[1]);
	printf("%p\n", &retor[2]);
	printf("%p\n\n", &retor[3]);
	
	printf("%p\n", &retor[0][0]);
	printf("%p\n", &retor[1][0]);
	printf("%p\n", &retor[2][0]);
	printf("%p\n", &retor[3][0]);

    free(retor);


	char	s_mapi[] = "abcd";
	char	*ret;

	ret = ft_strmapi(s_mapi, mapi_ft);
	printf("%s", ret);

	return(0);
}
