/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:19:55 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/29 06:14:57 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_strsplit(char const *s, char c);
char			*ft_strtrim(char const *s);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_striter(char *s, void (*f)(char *));
void			ft_strclr(char *s);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
char			**ft_strsplit(char const *s, char c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_itoa(int n);
int				ft_len(int nb);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memccpy(void *s1, const void *s2, int c, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
void			*ft_memcpy(void *restrict dst, const void *restrict src,
				size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strstr(const char *str, const char *needle);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strdup(const char *s1);
int				ft_atoi(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *str1, const char *str2);
char			*ft_strncpy(char *dest, char const *src, size_t n);
size_t			ft_strlen(const char *str);
int				ft_isalnum(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
void			ft_putstr(const char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
char			*ft_strcpy(char *dst, const char *src);
int				ft_getnewline(char **str, char **line, int fd, int reader);

#endif
