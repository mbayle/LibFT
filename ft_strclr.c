void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		++i;
	}
}
