/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 06:50:14 by aparvin           #+#    #+#             */
/*   Updated: 2023/05/22 07:07:56 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char		*get_env_path(char **envp)
{
	char	*path;
	int		i;

	i = 0;
	path = NULL;
	while (envp[i] != NULL && envp[i][0] != '\0')
	{
		path = ft_strnstr(envp[i], "PATH=", 5);
		if (path)
		{
			path = ft_substr(path, 5, ft_strlen(path));
			break ;
		}
		i++;
	}
	return (path);
}

static char		**make_usable_paths(char **paths)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (paths[i])
	{
		tmp = paths[i];
		paths[i] = ft_strjoin(paths[i], "/");
		free_strs(tmp, NULL);
		i++;
	}
	return (paths);
}

static char		**get_env_paths(char **envp)
{
	char	*env_path_str;
	char	**paths;

	env_path_str = get_env_path(envp);
	if (!env_path_str)
		return (NULL);
	paths = ft_split(env_path_str, ':');
	free_strs(env_path_str, NULL);
	if (!paths)
		return (NULL);
	paths = make_usable_paths(paths);
	if (!paths)
		return (NULL);
	return (paths);
}

static char		*get_cmd_path(char *cmd, char **paths)
{
	int		i;
	char	*cmd_path;

	cmd_path = NULL;
	i = 0;
	while (paths[i])
	{
		cmd_path = ft_strjoin(paths[i], cmd);
		if (!cmd_path)
		{
			free_strs(NULL, paths);
			exit_error(msg("unexpected error", "", "", 1), NULL);
		}
		if (access(cmd_path, F_OK | X_OK) == 0)
			return (cmd_path);
		free_strs(cmd_path, NULL);
		i++;
	}
	return (NULL);
}

char			*get_cmd(char *cmd, t_data *data)
{
	char	**env_paths;
	char	*cmd_path;

	if (access(cmd, F_OK | X_OK) == 0)
			return (ft_strdup(cmd));
		env_paths = get_env_paths(data->envp);
		if (!env_paths)
			return (NULL);
		cmd_path = get_cmd_path(cmd, env_paths);
		if (!cmd_path)
			msg("command not found", ": ", data->av[data->child + 2], 1);
		free_strs(NULL, env_paths);
		return (cmd_path);
}
