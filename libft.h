#ifdef LIBFT_H

#define LIBFT_H
int     ft_isalpha(int n);
int     ft_isdigit(int n);
int     ft_isalnum(int n);
int     ft_isascii(int n);
int     ft_isprint(int n);
size_t  ft_strlen(const char *str);
void    *memset(void *s, int c, size_t len);
void    bzero(void *s, size_t len);

#endif // LIBFT_H