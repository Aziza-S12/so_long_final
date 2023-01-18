/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_so_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:30:12 by asadritd          #+#    #+#             */
/*   Updated: 2023/01/18 20:59:30 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	initial_the_game(t_game *game)
{
	game->mlx = mlx_init();
	game->tile_dimension = 64;
	game->window = mlx_new_window(game->mlx, game->map_columns_count * \
	game->tile_dimension, game->map_rows_count \
	* game->tile_dimension, "so_long");
}

int	closing_window(t_game *game)
{
	mlx_destroy_image(game->mlx, game->image);
	mlx_destroy_window(game->mlx, game->window);
	ft_printf("Game exited");
	exit(0);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		ft_printf("Error: Number of arguments should be 1\n");
		return (0);
	}
	reading_map(&game, argv[1]);
	map_filling(&game, argv[1]);
	if (all_map_checks(&game, argv[1]) == 0)
	{
		initial_the_game(&game);
		display_map(&game);
		mlx_hook(game.window, 17, 0, closing_window, &game);
		mlx_key_hook(game.window, key_hooks, &game);
		mlx_loop(game.mlx);
	}
	return (0);
}

// int main(int argc, char **argv)
// {
// 	t_game	game;

// 	if (argc != 2)
// 	{
// 		ft_printf("Error: Number of arguments should be 1\n");
// 		return (0);
// 	}
// 	initial_the_game(&game);
// 	argv = 0;
// 	return (0);

// }