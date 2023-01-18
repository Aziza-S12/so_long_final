/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:59:58 by asadritd          #+#    #+#             */
/*   Updated: 2023/01/18 22:04:25 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
# include "../libftprintf/ft_printf.h"
# include "../gnl/get_next_line.h"
# include "../libftprintf/libft/libft.h"

# define KEY_ESC 53
# define KEY_W	 13
# define KEY_A	 0
# define KEY_S	 1
# define KEY_D	 2

typedef struct s_game
{
	void	*mlx;
	void	*window;
	void	*floor;
	void	**wall;
	void	*image;
	char	**map;
	char	**map_cpy;
	int		moves_counter;
	int		colletbls_counter;
	int		elements_counter;
	int		reachble_elements_counter;
	int		players_counter;
	int		exits_counter;
	int		map_columns_count;
	int		map_rows_count;
	int		tile_dimension;
	int		player_x;
	int		player_y;
}				t_game;

void	initial_the_game(t_game *game);
void	mallocing_maps(t_game *game);
void	reading_map(t_game *game, char *map_file);
void	map_filling(t_game *game, char *map_file);
void	display_map(t_game *game);
void	initialise_num_of_elements(t_game *game);
void	counting_elements(t_game *game);
void	reachables_counting_in_map(t_game *game, int x, int y);
void	move_down(t_game *game);
void	move_up(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);
char	*display_tile(t_game *game, int j, int i);
int		key_hooks(int keycode, t_game *game);
int		closing_window(t_game *game);
int		valid_num_of_elements(t_game *game);
int		valid_extension_check(char *path);
int		valid_characters_check(t_game *game);
int		rectangular_map_check(t_game *game);
int		valid_path(t_game *game);
int		upper_lower_wall_check(t_game *game);
int		side_walls_check(t_game *game);
int		all_map_checks(t_game *game, char *path);

#endif