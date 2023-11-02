/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:46 by kburalek          #+#    #+#             */
/*   Updated: 2023/02/22 13:03:52 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int val, size_t num);
void	ft_bzero(void *str, size_t num);
void	*ft_memcpy(void *dst, const void *src, size_t num);
void	*ft_memchr(const void *str, int val, size_t num);
void	*ft_memmove(void *dst, const void *src, size_t num);
int		ft_memcmp(const void *s1, const void *s2, size_t num);
char	*ft_strchr(const char *str, int val);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_substr(char const *str, unsigned int start, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *str, int val);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *str, const char *val, size_t num);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int num);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int num, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char val);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	*malloczero(size_t size);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int val);
char	*ft_substr(char const *str, unsigned int start, size_t num);
char	*get_next_line(int fd);

#endif
