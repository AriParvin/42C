#include "so_long.h"

void    image_select(t_game *data, size_t y, size_t x)
{
    size_t  img_size;

    img_size = 32;
    if (data->grid[y][x] == '1')
        if (mlx_image_to_window(data->mlx, data->img->wall,
                x * PIXELS, y * PIXELS) < 0)
            error_message("MAP RENDER FAILURE");
    if (data->grid[y][x] == 'C')
        if (mlx_image_to_window(data->mlx, data->img->bug,
                x * PIXELS + img_size / 2, y * PIXELS + img_size / 2) < 0)
            error_message("MAP RENDER FAILURE");
    if (data->grid[y][x] == 'P')
        if (mlx_image_to_window(data->mlx, data->img->frog,
                x * PIXELS, y * PIXELS) < 0)
            error_message("MAP RENDER FAILURE");
    if (data->grid[y][x] == 'E')
        if (mlx_image_to_window(data->mlx, data->img->exit_off,
                x * PIXELS, y * PIXELS) < 0)
            error_message("MAP RENDER FAILURE");
}

void    fill_background(t_game *data)
{
    size_t  x;
    size_t  y;

    x = 0;
    y = 0;
    while (y < data->height)
    {
        x = 0;
        while (x < data->width)
        {
            if (mlx_image_to_window(data->mlx, data->img->floor,
                    x * PIXELS, y * PIXELS) < 0)
            error_message("MAP RENDER FAILURE");
            x++;
        }
        y++;
    }
}

void    render_map(t_game *data)
{
    size_t  x;
    size_t  y;

    x = 0;
    y = 0;
    while (y < data->height)
    {
        x = 0;
        while (x < data->width)
        {
            image_select(data, y, x);
            x++;
        }
        y++;
    }
}
