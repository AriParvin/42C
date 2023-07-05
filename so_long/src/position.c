#include "so_long.h"

size_t  get_frog_pos(t_game *game, char c)
{
    size_t  y;
    size_t  x;

    y = 0;
    while (y < game->height)
    {
        x = 0;
        while (x < game->height)
        {
            if (game->grid[y][x] == 'P')
            {
                if (c == 'x')
                    return (x);
                else
                    return (y);
            }
            x++;
        }
        y++;
    }
    return (0);
}

size_t  get_exit_pos(t_game *game, char c)
{
    size_t  y;
    size_t  x;

    y = 0;
    while (y < game->height)
    {
        x = 0;
        while (x < game->width)
        {
            if (game->grid[y][x] == 'E')
            {
                if (c == 'x')
                    return (x);
                else
                    return (y);
            }
            x++;
        }
        y++;
    }
return (0);
}
