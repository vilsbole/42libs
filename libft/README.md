LIBFT

necessary files, all at the root
- one .c file per function
- one libft.h with the prototypes
- one Makefile that complies to libft.a

TESTS:
	42school: https://github.com/42School/Maintest
	Amerle + Aviala: https://intra.42.fr/forum/#!/ALGO-1-001/libft/Tests
		   https://github.com/darnuria/libft_test_fork_amerle
	Mbacoux: https://github.com/Nax/libft-test
		   
MAKEFILE
	https://intra.42.fr/forum/#!/ALGO-1-001/libft/Attention-a-vos-makefile

NORME
	norminator.clem.org
	norminette.42.fr # cat *.c > compilation.c, balancez le nouveau fichier "compilation.c" a la norminette. Rajoutez votre .h #merci adatain

###PART 1 - My Libc

1. memset # common way to set a memory region to a given value. regardless of the data type.
2. bzero # writes n zeroed bytes to string s. if n is zero bzero() does nothing.
3. memcpy # copies n bytes from s2 to s1. Returns s1.
4. memccpy # copies n bytes from s2 to s1 unless character c occurs in s2. Returns pointer to (c + 1) or NULL.
5. memmove # copies n bytes from s2 to s1. Returns s1.
6. memchr # searches s for n bytes and locates first occurence of c. Returns pointer to c or NULL.
7. memcmp # compares s1 against s2 for n bytes. Returns zero if indentical, or difference between first two differing bytes.
8. strlen # takes a string and returns number of characters that precede terminating NUL.
9. strdup # copies s1 to heap. Returns pointer to copy or NULL if error.
10. strcpy # copies s2 into s1 (including terminating '\0'). Returns s1.
11. strncpy # copies n characters from s2 into s1. if s2 < s1, remainder of s1 is filled with '\0'. else s1 is not terminated. Returns s1.
12. strcat # append s2 to s1 and add terminating '\0'. Return s1. if s1 < s1 + s2 behaviour is undefined.
13. strncat # append n character of s2 to s1 and terminate. Return s1. 
14. strlcat # append max (size - strlen(dst) - 1) characters of dst to src and NULL-terminate. Return total length of string it tried to create.
15. strchr # locates first occurence of c within s. null character is part of the string. Return pointer to character or NULL.
16. strrchr # locates last occurence of c within s. null character is part of string. Return pointer to character or NULL.
17. strstr # locates first occurence of s2 in s1. Returns s1 if s2 is empty, NULL if no match, else pointer to first occurence.
18. strnstr # same as strstr where search is limited to n characters of s1.
19. strcmp # lexicographically comparaison of s1 and s2. Returns int > < or == 0 according to s1 compared to s2.
20. strncmp # same as strcmp where comparaison is limited to n characters of s1.
21. atoi # convert string  to int.
22. isalpha # tests for any char in alphabet upper or lower.
23. isdigit # tests for decimal digit character from '0' to '9'
24. isalnum # tests for alpha or digit character
25. isascii # tests for any character between 0 and octal 0177 inclusive
26. isprint # tests for any printing character from octal 040 to 176 inclusive 
27. toupper # converts lower-case alpha to upper-case
28. tolower # comverts upper-case alpha to lower-case

###PART 2 - Fonctions supplementaires

- ft_memalloc # allocates memory in heap of size 'size'. Returns pointer to new space.
- ft_memdel # free() memory zone of pointed to by **ap. No return.
- ft_strnew # allocates new memory space of size 'size' and fills it with '\0'. Returns pointer to new space.
- ft_strdel # free() char array 'as' and places pointer to NULL. No return.
- ft_strclr # fills memory space with '\0'. No return.
- ft_striter # applies f(char *) to every character in array s. No return.
- ft_striteri # applies f(unsigned int, char *) to every character in array s. No return.
- ft_strmap # applies *f(char) to every character in array and creates new array in heap with the return of *f(). Return pointer to new array.
- ft_strmapi # applies *(unsigned int, char) to every character in array and creates new array in heap with the return of *f(). Return pointer to new array.
- ft_strequ # lexicographical comparaison between s1 and s2. Return 1 if equal, else 0.
- ft_strnequ # lexicographical comparaison until n between s1 and s2. Return 1 if equal, else 0.
- ft_strsub # allocates memory in heap and from start of s, copies len bytes. Return copy.
- ft_strjoin # allocates memory in heap and returns concatenation of s1 and s2 NULL-terminating string. Return result or NULL.
- ft_strtrim # allocates memory in heap and returns copy after removing characters ' ', '\n' and '\t' at begining or end of string. Return result or NULL.	
- ft_strsplit # takes s divides according to c and returns list of arrays. if no c, list is composed of single array. Return new or NULL.
- ft_itoa # takes int n and returns new array of chars.
- ft_putchar # puts single character on std-out.
- ft_putchar_fd # puts single charater on fd.
- ft_putstr # puts string on std-out.
- ft_putstr_fd # puts string on fd. 
- ft_putnbr 3 # puts number on std-out.
- ft_putnbr_fd # puts number on fd.
- ft_putendl # puts char s on std-out followed by '\n'.
- ft_putendl_fd # puts char s on fd followed by '\n'.

###PART 3 - Bonus

- ft_lstnew #
- ft_lstdelone #
- ft_lstdel #
- ft_lstadd #
- ft_lstiter #
- ft_lstmap #

