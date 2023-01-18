/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:32:56 by asadritd          #+#    #+#             */
/*   Updated: 2023/01/18 16:50:09 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	move_down(t_game *game)
{
	if (game->map[game->player_x + 1][game->player_y] == '1' || \
	(game->map[game->player_x + 1][game->player_y] == 'E' && \
game->colletbls_counter != 0))
		return ;
	if (game->map[game->player_x + 1][game->player_y] == 'C')
		game->colletbls_counter--;
	if (game->map[game->player_x + 1][game->player_y] == 'E' && \
game->colletbls_counter == 0)
	{
		ft_printf("You won! The window will be closed now\n");
		closing_window(game);
	}
	game->map[game->player_x][game->player_y] = '0';
	game->map[game->player_x + 1][game->player_y] = 'P';
	game->player_x = game->player_x + 1;
	display_map(game);
	game->moves_counter++;
	ft_printf("Number of moves is: %d \n", game->moves_counter);
}

void	move_up(t_game *game)
{
	if (game->map[game->player_x - 1][game->player_y] == '1' || \
	(game->map[game->player_x - 1][game->player_y] == 'E' && \
game->colletbls_counter != 0))
		return ;
	if (game->map[game->player_x - 1][game->player_y] == 'C')
		game->colletbls_counter--;
	if (game->map[game->player_x - 1][game->player_y] == 'E' && \
game->colletbls_counter == 0)
	{
		ft_printf("You won! The window will be closed now\n");
		closing_window(game);
	}
	game->map[game->player_x][game->player_y] = '0';
	game->map[game->player_x - 1][game->player_y] = 'P';
	game->player_x = game->player_x - 1;
	display_map(game);
	game->moves_counter++;
	ft_printf("Number of moves: %d \n", game->moves_counter);
}

void	move_left(t_game *game)
{
	if (game->map[game->player_x][game->player_y - 1] == '1' || \
	(game->map[game->player_x][game->player_y - 1] == 'E' && \
game->colletbls_counter != 0))
		return ;
	if (game->map[game->player_x][game->player_y - 1] == 'C')
		game->colletbls_counter--;
	if (game->map[game->player_x][game->player_y - 1] == 'E' && \
game->colletbls_counter == 0)
	{
		ft_printf("You won! The window will be closed now\n");
		closing_window(game);
	}
	game->map[game->player_x][game->player_y] = '0';
	game->map[game->player_x][game->player_y - 1] = 'P';
	game->player_y = game->player_y - 1;
	display_map(game);
	game->moves_counter++;
	ft_printf("Number of moves: %d \n", game->moves_counter);
}

void	move_right(t_game *game)
{
	if (game->map[game->player_x][game->player_y + 1] == '1' || \
	(game->map[game->player_x][game->player_y + 1] == 'E' && \
game->colletbls_counter != 0))
		return ;
	if (game->map[game->player_x][game->player_y + 1] == 'C')
		game->colletbls_counter--;
	if (game->map[game->player_x][game->player_y + 1] == 'E' && \
game->colletbls_counter == 0)
	{
		ft_printf("You won! The window will be closed now\n");
		closing_window(game);
	}
	game->map[game->player_x][game->player_y] = '0';
	game->map[game->player_x][game->player_y + 1] = 'P';
	game->player_y = game->player_y + 1;
	display_map(game);
	game->moves_counter++;
	ft_printf("Number of moves: %d \n", game->moves_counter);
}

int	key_hooks(int keycode, t_game *game)
{
	if (keycode == KEY_ESC)
		return (closing_window(game));
	if (keycode == KEY_W)
		move_up(game);
	if (keycode == KEY_S)
		move_down(game);
	if (keycode == KEY_A)
		move_left(game);
	if (keycode == KEY_D)
		move_right(game);
	return (0);
}
