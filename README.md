# libft_v2
Inspired by the challenges and learnings from the [**42 School**](https://42.fr/en/homepage/) curriculum, **libft_v2** seeks to further enhance the utility of the original libft while providing a platform for exploration and innovation in C programming.

## Part 1 - Functions of libc
It consists of remaking the functions of **libc** with the same prototypes and implementing the same behaviors as the original functions.

```int	ft_isalpha(int c);```  
```int	ft_isdigit(int c);```  
```int	ft_isalnum(int c);```  
```int	ft_isascii(int c);```  
```int	ft_isprint(int c);```  
```size_t	ft_strlen(const char *s);```  
```void	*ft_memset(void *b, int c, size_t n);```  
```void	ft_bzero(char *s, size_t n);```  
```void	*ft_memcpy(void *dst, const void *src, size_t n);```  
```void	*ft_memmove(void *dest, const void *src, size_t n);```  
```size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);```  
```size_t	ft_strlcat(char *dst, const char *src, size_t size);```  
```int	ft_toupper(int c);```  
```int	ft_tolower(int c);```  
```char	*ft_strchr(const char *s, int c);```  
```char	*ft_strrchr(const char *s, int c);```  
```int	ft_strncmp(const char *s1, const char *s2, size_t n);```  
```void	*ft_memchr(const void *s, int c, size_t n);```  
```int	ft_memcmp(const void *s1, const void *s2, size_t n);```  
```char	*ft_strnstr(const char *big, const char *little, size_t len);```  
```int	ft_atoi(const char *nptr);```  
```void	*ft_calloc(size_t nmemb, size_t size);```  
```char	*ft_strdup(const char *s);```  

## Part 2 - Additional functions
```char	*ft_substr(char const *s, unsigned int start, size_t len);```  
```char	*ft_strjoin(char const *s1, char const *s2);```  
```char	*ft_strtrim(char const *s1, char const *set);```  
```char	**ft_split(char const *s, char c);```  
```char	*ft_itoa(int n);```  
```char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));```  
```void    ft_striteri(char *s, void (*f)(unsigned int, char*));```  
```void	ft_putchar_fd(char c, int fd);```  
```void	ft_putstr_fd(char *s, int fd);```  
```void	ft_putendl_fd(char *s, int fd);```  
```void	ft_putnbr_fd(int n, int fd);```  

## Part 3 - List manipulation
```
typedef struct	s_list
{
	void		*content;
 	struct s_list	*next;
}			t_list;
```
```t_list	*ft_lstnew(void *content);```  
```void	ft_lstadd_front(t_list **lst, t_list *new);```  
```int	ft_lstsize(t_list *lst);```  
```t_list	*ft_lstlast(t_list *lst);```  
```void	ft_lstadd_back(t_list **lst, t_list *new);```  
```void	ft_lstdelone(t_list *lst, void (*del)(void *));```  
```void	ft_lstclear(t_list **lst, void (*del)(void *));```  
```void	ft_lstiter(t_list *lst, void (*f)(void *));```  
```t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));```  

## Part 3 - ft_printf
**ft_printf** is a 42 School project that aims to recreate the functionality of the standard C library's **printf()** function.
## Features
-  Support for basic conversion specifiers: **%c**, **%s**, **%p**, **%d**, **%i**, **%u**, **%x**, **%X**, and **%%**.
-  Support for handling variadic arguments.
-  Return value indicating the number of characters written.

## Part 4 - get_next_line
- [get_next_line | 42 School] A utility for reading and processing input from a file or stream, one line at a time.
- [Rank 01] 42 Common Core
## Description
Function that returns the line read from a file descriptor.
- Repeatedly calling **get_next_line** allows reading the content of the file pointed to by the file descriptor line by line until the end.
- The function should return the line just read. If there's nothing more to read or an error occurs, it should return NULL.
- Can read from both a file and from stdin.
- The returned line should end with the newline character ('\n'), except when the end of the file is reached, and it does not end with a newline character.


