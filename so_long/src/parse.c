#include "so_long.h"

size_t      count_rows(char **grid)
{
    size_t  y;

    y = 0;
    while (grid[y])
        y++;
    return (y)
}

size_t      count_bugs(t_game *game)
{
    size_t  y;
    size_t  x;
    size_t  i;

    y = 0;
    i = 0;
    while (y < game->height)
    {
        x = 0;
        while (x < game->width)
        {
            if (game->grid[y][x] == 'C')
                i++;
            x++;
        }
    }
}