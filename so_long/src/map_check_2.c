#include "so_long.h"

void    check_empty(char *map)
{ 
    if (!*map)
        error_message("EMPTY MAP");
}

void    check_empty_lines(char *map)
{
    size_t i;

    i = 0;
    while (map[i])
    {
        if (map[0] == '\n' || (map[i] == '\n' && (map[i + 1]) == '\n'))
            error_message("EMPTY LINES IN MAP FILE");
        i++;
    }
}

void    check_horizontal(t_game *game)
{
    size_t i;
    
    i = 0;
    while (game->grid[0][i])
    {
        if (game->grid[0][i] != '1')
            error_message("MAP NOT SURROUNDED BY WALLS");
        if (game->grid[game->height -1][0] != '1')
            error_message("MAP NOT SURROUNDED BY WALLS");
        i++;
    }
}

void    check_vertical(t_game *game)
{
    size_t  i;

    i = 0;
    while (game->grid[i])
    {
        if(game->grid[i][0] != '1')
            error_message("MAP NOT SURROUNDED BY WALLS");
        if(game->grid[i][game->width -1] != '1')
            error_message("MAP NOT SURROUNDED BY WALLS");
        i++;
    }
}

void    check_walls(t_game *game)
{
    check_horizontal(game);
    check_vertical(game);
}