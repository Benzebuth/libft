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
