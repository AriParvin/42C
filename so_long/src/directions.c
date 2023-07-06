#include "so_long.h"

void    remove_bug(t_game *game, int y, int x)
{
    int     i;

    i = 0;
    x = x * 64 + 16;
    y = y * 64 + 16;
    while (i < game->img->bug->count)
    {
        if (game->img->bug->instances[i].x == x
            && game->img->bug->instances[i].y == y)
        {
            game->img->bug->instances[i].enabled = false;
        }
        i++;
    }
}

t_game  *move_N(t_game *game)
{
    if (game->grid[game->frog_y - 1][game->frog_x] != '1'
       && game->grid[game->frog_y - 1][game->frog_x] != 'E')
    {
        if(game->grid[game->frog_y - 1][game->frog_x] == 'C')
        {
            remove_bug(game, game->frog_y - 1, game->frog_x);
            print_bugs(game);
            game->grid[game->frog_y - 1][game->frog_x] = '0';
            game->collected += 1;
        }
        game->frog_y -= 1;
        game->img->frog->instances[0].y -= 1 * PIXELS;
        game->steps += 1;
    }
    check_game_status(game);
    return(game);
}

t_game  *move_S(t_game *game)
{
    if (game->grid[game->frog_y + 1][game->frog_x] != '1'
       && game->grid[game->frog_y + 1][game->frog_x] != 'E')
    {
        if(game->grid[game->frog_y + 1][game->frog_x] == 'C')
        {
            remove_bug(game, game->frog_y + 1, game->frog_x);
            print_bugs(game);
            game->grid[game->frog_y + 1][game->frog_x] = '0';
            game->collected += 1;
        }
        game->frog_y += 1;
        game->img->frog->instances[0].y += 1 * PIXELS;
        game->steps += 1;
    }
    check_game_status(game);
    return (game);
}

t_game  *move_E(t_game *game)
{
    if (game->grid[game->frog_y][game->frog_x + 1] != '1'
       && game->grid[game->frog_y][game->frog_x + 1] != 'E')
    {
        if(game->grid[game->frog_y][game->frog_x + 1] == 'C')
        {
            remove_bug(game, game->frog_y, game->frog_x + 1);
            print_bugs(game);
            game->grid[game->frog_y][game->frog_x + 1] = '0';
            game->collected += 1;
        }
        game->frog_y += 1;
        game->img->frog->instances[0].y += 1 * PIXELS;
        game->steps += 1;
    }
    check_game_status(game);
    return (game);
}

t_game  *move_W(t_game *game)
{
    if (game->grid[game->frog_y][game->frog_x - 1] != '1'
       && game->grid[game->frog_y][game->frog_x - 1] != 'E')
    {
        if(game->grid[game->frog_y][game->frog_x - 1] == 'C')
        {
            remove_bug(game, game->frog_y, game->frog_x - 1);
            print_bugs(game);
            game->grid[game->frog_y][game->frog_x - 1] = '0';
            game->collected += 1;
        }
        game->frog_y += 1;
        game->img->frog->instances[0].y += 1 * PIXELS;
        game->steps += 1;
    }
    check_game_status(game);
    return (game);
}