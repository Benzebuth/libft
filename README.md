# libft
library of basic C functions

### fonctions man (lite)
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
