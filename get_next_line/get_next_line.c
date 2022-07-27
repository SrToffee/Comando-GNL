#include "get_next_line.h"

char *get_next_line(int fd)
{
    char        *value;
    char        *line;
    static char *remain;
    int         i;

    if(fd < 0 || BUFFER_SIZE < 1)
        return(NULL);
    value = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!value)
        return (NULL);
    i = read(fd, value, BUFFER_SIZE); 
    if(value[0] == '\0')
        return(0);
    if(remain != NULL)      
    {
        value = ft_strjoin(remain, value);
        free(remain);
    }
    i = findliner(value) + 1;
    line = ft_substr(value, 0, i);
    if(i < BUFFER_SIZE)
        remain = ft_substr(value, i, ft_strlen(value));
    free(value);
    return(line);
}

/*int main()
{
    int fd;
    char *path = "liroliro.txt";
    int i = 0;
    fd = open(path, O_RDONLY);

    printf("fd = %d \n", fd);

    while(++i < 4)
        printf("|%s|\n", get_next_line(fd));
}*/