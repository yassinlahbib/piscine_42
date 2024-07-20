#include <unistd.h>

int     check_befor(char c, char *s1, int index)
{
        int     i;

        i = 0;
        while(i < index) 
        {               
                if (c == s1[i])
                        return (1);
                i ++;
        }
        return (0);
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);

}


void	ft_rev(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check_befor(s1[i], s1,i) == 0)
			write(1, &s1[i], 1);
		i ++;
	}
	i = 0;
	while (s2[i])
	{
	  	if ((check_befor(s2[i],s2, i) == 0) && (check_befor(s2[i], s1,ft_strlen(s1)) == 0 ))
           	 	write(1, &s2[i], 1);
           	i ++;
	}
}

int	main(int argc, char *argv[])
{

	ft_rev(argv[1], argv[2]);
	return (0);
}
