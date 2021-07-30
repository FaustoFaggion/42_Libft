#ifndef LIBFT_H

# define LIBFT_H
#include <stdlib.h>
#include <limits.h> // header of function calloc to call the function INT_MAX.

/**
 * @brief convert string to integer. The string should contain numbers.
 * @param (char *ptr) pointer to a string.
 * @return (sign * res) a integer.  
**/
int ft_atoi(const char *ptr);

/**
 * @brief 	erases the data in the n bytes of the memory starting at
 			the location pointed to by s, by writing zeros (bytes 
	   		containing '\0')  to  that area.
 * @param 1 pointer to a string.
 * @param 2 number of bytes to be converted to 0.
 * @return  
**/
void    ft_bzero(void *s, size_t n);

/**
 * @brief 	allocates memory for an array of nmemb elements of size   
       		bytes each and returns a pointer to the allocated memory.  The memory is set  to   
       		zero.  
 * @param 1 number of members of the array
 * @param 2 bytes size of the each member of the array (ex: sizeof(int)).
 * @return  The malloc() and calloc() functions return a pointer to the allocated memory, 
       		which is suitably aligned for any built-in type.
			If the multiplication of nmemb and size would result in integer overflow, then calloc() returns   
       		an error.
			If  nmemb  or  size is 0, returns either NULL, or a unique pointer 
			value that can later be successfully passed to free().
**/
void *ft_calloc(size_t nmemb, size_t size);

/**
 * @brief 	checks for an alphanumeric character; it is equivalent 
			to (isalpha(c) || isdigit(c)).
 * @param 1 a integer
 * @return  The  values returned are nonzero if the character c 
			falls into the tested class, and zero if not.
**/
int ft_isalnum(int c);

/**
 * @brief	checks for an alphabetic character; in the standard  "C"  locale, 
			it is equivalent  to (isupper(c) || islower(c)).
 * @param 1 parameteer that will be checked.
 * @return  The  values returned are nonzero if the character c 
			falls into the tested class, and zero if not.
**/
int ft_isalpha(int c);

/**
 * @brief 	checks whether c is a 7-bit unsigned char value that fits 
			into the ASCII character set.
 * @param 1 parameter that will be checked
 * @return  The  values returned are nonzero if the character c 
			falls into the tested class, and zero if not.
**/
int	ft_isascii(int c);

/**
 * @brief	checks for a digit (0 through 9).
 * @param 1 a charactere
 * @return  The  values returned are nonzero if the character c 
			falls into the tested class, and zero if not.
**/
int ft_isdigit(char c);

/**
 * @brief 	checks for any printable character including space.
 * @param 1 A integer. 
 * @return  The  values returned are nonzero if the character c 
			falls into the tested class, and zero if not.
**/
int	ft_isprint(int c);

/**
 * @brief	Scans the inicial n bytes of the memory arrea pointed to 
 			by s for the first instance of c. Both are interpreted 
			as unsigned char.
 * @param 1 *s	-pointer too a memory area.
 * @param 2 unsigned char c
 * @param 3 number of bytes to looking for.
 * @return  return a pointer to the matching byte or NULL if the character
 			does not occur in the given memory area.
**/
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief	compares the first n bytes (each interpreted as unsigned char)
 * 			of the memory area s1 and s2. 	
 * @param 1 s1	-memory area 1
 * @param 2 s2	-memory area 2
 * @return  integer < 0	-n bytes of s1 < bytes of s2
  			integer = 0	-n bytes of s1 = bytes of s2
			integer > 0	-n bytes of s1 > bytes of s2
			The sign of the return is determined by the sign of the
			difference between the first pair of bytes (interpreted as unsigned char)
			that differ in s1 and s2.
			If n is 0, the return value is 0
**/
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief	Copies n bytes from memory area src to memory area dest.
			The memory areas must not overlap.
			Use memmove(3) if the memory areas do over‐lap.
 * @param 1 *dest	- destiny memory area. 
 * @param 2 *src	- source memory area.
 * @param 4 size_t n- number of bytes to be copied.
 * @return  Returns a pointer to dest
**/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 	copies n bytes from memory area src to memory area dest.  The memory areas may
			overlap: copying takes place as though the bytes in src are first copied into a 
	   		temporary array that does not overlap src or dest, and the bytes are then copied 
			from the temporary array to dest.
 * @param 1 *dest	-memory area where is going to be copied to.
 * @param 2 *src	-memory area where is going to be copied by.
 * @return  A pointer to dest.
**/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief 	Fills the first n bytes of the memory area pointed to by s
			with the constant byte c. #include <string.h>
 * @param 1 void *s	- pointer to a memory área. 
 * @param 2	int c'	- any constant.
 * @param 3 size_t n- number of bytes.
 * @return  A pointer to the memory area s.
**/
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief	returns a pointer to the first occurrence of the character c in the string s. 	
 * @param 1 pointer to the string
 * @param 2 character c
 * @return  return a pointer to the matched character or NULL if the character is not found.
			The terminating null byte is considered part of the string, so that if c is 
			specified as '\0', these functions return a pointer to the terminator.
**/
char	*ft_strchr(const char *s, int c);

/**
 * @brief	returns a pointer to the last occurrence of the character c in the string s.
 * @param 1	pointer to the string
 * @param 2 character c
 * @return  returns a pointer to the matched character, or a pointer to the null byte at the   
       		end of s (i.e., s+strlen(s)) if the character is not found.
**/
char	*ft_strrchr(const char *s, int c);

/**
 * @brief 	appends  the  src string to the dest string, overwriting the terminating null byte   
       		('\0') at the end of dest at most n bytes from src, and then adds a terminating
			null byte.
			The strings may not overlap, and the dest string must have enough space for the result.
			If dest is not large enough, program behavior is unpredictable.
			src does not need to be null-terminated if it contains n or more bytes.
 * @param 1 
 * @param 2 
 * @param 3
 * @return  return a pointer to the resulting string dest.
**/
char	*ft_strlcat(char *dest, const char *src, size_t n);

/**
 * @brief 	
 * @param 1 
 * @param 2 
 * @return  
**/
char	*ft_strlcpy(char *dest, const char *src, size_t n);

/**
 * @brief	compares the first at most n bytes from two strings s1 and s2.  The locale is 
			not taken into account.
 * @param 1 
 * @param 2 
 * @return  return an integer less than, equal to, or greater than zero if s1 (or the first n
 			bytes thereof) is found, respectively, to be less than, to match, or be greater
			than s2.
**/
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief	calculates the length of the string pointed to by s, excluding the terminating null   
			byte ('\0').	
 * @param 1 
 * @return  the number of bytes in the string pointed to by s.
**/
size_t ft_strlen(const char *s);

/**
 * @brief 	
 * @param 1 
 * @param 2 
 * @return  
**/

#endif