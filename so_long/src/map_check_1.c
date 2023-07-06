#include "so_long.h"

void    check_invalid_content(int i)
{
    if (!(ft_strchr("PEC01X\n", i)))
    {
        error_message("INVALID CHARACTERS IN MAP FILE");
    }
}

void    check_map_content(char *map)
{
    int     player;
    int     exit;
    int     bugs;

    player = 0;
    exit = 0;
    bugs = 0;

    while (*map)
    {
        if (*map == 'P')
            player++;
        if (*map == 'E')
            exit++;
        if (*map == 'C')
            bugs++;
        else
            check_invalid_content(*map);
    }
    if (player != 1 || exit != 1 || bugs < 1)
    {
        error_message("MAP INVALID");
    }
}

void    check_file_extension(char *file)
{
    size_t  len;

    len = ft_strlen(file);
    if (len < 4 || ft_strncmp(file + len - 4, ".ber", 4))
        error_message("INVALID FILE SUFFIX");
}

void    check_map_shape(char **grid)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = ft_strlen(grid[i]);
    while (grid[i])
    {
        if (ft_strlen(grid[i]) != len)
            error_message("INVALID MAP DIMENSIONS");
        i++;
    }
}