#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (!result)
		return (0);
	i = 0;
	while (s1[i])
	{
		result[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i] = (char)s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return ((char *)result);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sub_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		sub_len = 0;
	else if (ft_strlen(s) <= len)
		sub_len = ft_strlen(s) - start;
	else
		sub_len = len;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < sub_len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}

