/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:16:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 18:58:32 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define LIBFT_NULL (void *)0

typedef unsigned char		t_uint8;
typedef unsigned int		t_uint32;
typedef unsigned long		t_size;
typedef long long			t_int64;

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
	t_size			size;
}	t_list;

/////////////////////////////////////
//
//	FUNCTION BONUS
//
/////////////////////////////////////

t_list			*ft_lstnew(void *content);
t_list			*ft_lstadd_back(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

char			**ft_split(char const *s, char c);
void			*ft_calloc(t_size nmemb, t_size size);
void			*ft_memccpy(void *dest, const void *src, int c, t_size n);
void			*ft_memchr(const void *s, int c, t_size n);
void			*ft_memcpy(void *dest, const void *src, t_size n);
void			*ft_memmove(void *dest, const void *src, t_size n);
void			*ft_memset(void *s, int c, t_size n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
char			*ft_strncat(char *dest, char *src, t_size n);
char			*ft_strndup(char *src, int n);
char			*ft_strnstr(const char *str, const char *to_find, t_size n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_itoa(int nb);
char			*ft_substr(char const *s, unsigned int start, t_size len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s1, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
t_uint32		ft_strlcat(char *dest, const char *src, t_size size);
t_uint32		ft_strlcpy(char *dest, const char *src, t_size size);
int				ft_atoi(const char *nptr);
int				ft_get_words(char const *str, char c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, t_size n);
int				ft_nbrlen(long int nb);
int				ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, t_size n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strcchr(char *str, char c);
void			ft_bzero(void *s, t_size n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif