# libft
library of basic C functions

### manual fonctions (lite)
| Fonction | Description | Prototype |
| --- | --- | --- |
| **ft_atoi** | `convert ASCII to integer` | int ft_atoi(const char *nptr) |
| **ft_bzero** | `write 0 in the *s for n time` | void ft_bzero(void *s, size_t n) |
| **ft_calloc** | `init memory and write 0 for size * format (nmemb)` | void ft_calloc(size_t nmemb, size_t size) |
| **ft_isalnum** | `check if c is alpha or digital` | int ft_isalnum(int c) |
| **ft_isalpha** | `check if c is alphanumeric` | int ft_isalpha(int c) |
| **ft_isascii** | `check if c is ASCII` | int ft_isascii(int c) |
| **ft_isdigit** | `check if c is digital` | int ft_isdigit(int c) |
| **ft_islower** | `check if c is lowercase` | int ft_islower(int c) |
| **ft_isprint** | `check if c is printable` | int ft_isprint(int c) |
| **ft_isupper** | `check if c is uppercase` | int ft_isupper(int c) |
| **ft_itoa** | `convert integer to ASCII` | char *ft_itoa(int c) |
| **ft_lstadd_back** | `add new cell to the end of list` | void ft_lstadd_back(t_list **alst, t_list *new) |
| **ft_lstadd_front** | `add new cell at the begin of the list` | void ft_lstadd_front(t_list **alst, t_list *new) |
| **ft_lstclear** | `clear all cells of list with fonction *del` | void ft_lstclear(t_list **lst, void (*del)(void *)) |
| **ft_lstdelone** | `clear the content of the cell` | void ft_lstdelone(t_list *lst, void (*del)(void *)) |
| **ft_lstiter** | `apply fonction (f) to every cells of list` | void ft_lstiter(t_list *lst, void (f)(void *)) |
| **ft_lstlast** | `return the last cell of list` | t_list *ft_lstlast(t_list *lst) |
| **ft_lstmap** | `return a copy of a list with fonction (f) apply on each cells` | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) |
| **ft_lstnew** | `create a new cell with *content inside` | t_list *ft_lstnew(void *content) |
| **ft_lstsize** | `return the number of cells inside the list` | int ft_lstsize(t_list *lst) |
| **ft_memccpy** | `copy *src until c is found or for n time in *dest ` | void ft_memccpy(void *dest, const void *src, int c, size_t n) |
| **ft_memchr** | `search c inside *s for n` | void *ft_memchr(const void *s, int c, size_t n) |
| **ft_memcmp** | `return value from difference between *s1 and *s2 until difference occure or n` | int ft_memcmp(const void *s1, const void *s2, size_t n) |
| **ft_memcpy** | `copy *src for n in *dest` | void ft_memcpy(void *dest, const void *src, size_t n) |
| **ft_memmove** | `move memory *src for n to memory *dest` | void	*ft_memmove(void *dest, const void *src, size_t n) |
| **ft_memset** | `init area of memory *b for len with c` | void	*ft_memset(void *b, int c, size_t len) |
| **ft_putchar_fd** | `write c inside file descriptor fd` | void	ft_putchar_fd(char c, int fd) |
| **ft_putendl_fd** | `write *s inside file descriptor fd with \n at the end` | void	ft_putendl_fd(char *s, int fd) |
| **ft_putnbr_fd** | `write n inside file descriptor fd` | void	ft_putnbr_fd(int n, int fd) |
| **ft_putstr_fd** | `write *s inside file descriptor fd` | void	ft_putstr_fd(int n, int fd) |
| **ft_split** | `cut *s with separator c and return result inside array that finish by NULL` | char	**ft_split(const char *s, char c) |
| **ft_strchr** | `search c inside *s` | char	*ft_strchr(const char *s, int c) |
| **ft_strdup** | `return a copy of *s` | char	*ft_strdup(const char *s) |
| **ft_striteri** | `apply fonction (*f) to *s` | void	ft_striteri(char *s, void (*f)(unsigned int, char *)) |
| **ft_strjoin** | `join *s1 with *s2 inside new allocate memory` | char	*ft_strjoin(char const *s1, char const *s2) |
| **ft_strlcat** | `join *src inside *dst for size, return the length of string they try to create` | size_t	ft_strlcat(char *dst, const char *src, size_t size) |
| **ft_strlcpy** | `copy *src inside *dest and return length of *src` | size_t	ft_strlcpy(char *dest, const char *src, size_t size) |
| **ft_strlen** | `return the length of *s` | char	*ft_strlen(const char *s) |
| **ft_strmapi** | `apply fonction (*f) to *s and return the result inside a new string` | char	*ft_strmapi(const char *s, char (*f)(unsigned int, char)) |
| **ft_strncmp** | `compare *s1 to *s2 for n` | int	ft_strncmp(const char *s1, const char *s2, size_t n) |
| **ft_strnstr** | `search *s2 inside *s1 for n, return the address of first cara. if found or NULL` | char	*ft_strnstr(const char *s1, const char *s2, size_t n) |
| **ft_strrchr** | `search c inside *s and return first occurence or NULL` | char	*ft_strrchr(const char *s, int c) |
| **ft_strtrim** | `remove leading and ending of string if *set is found` | char	*ft_strtrim(char const *s1, char const *set) |
| **ft_substr** | `return new string from *s starting from start for len` | char	*ft_substr(char const *s, unsigned int start, size_t len) |
| **ft_tolower** | `convert c to lowercase` | int ft_tolower(int c) |
| **ft_toupper** | `convert c to UPPERCASE` | int ft_toupper(int c) |
