/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd_built_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <plertsir@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:31:01 by plertsir          #+#    #+#             */
/*   Updated: 2023/11/05 11:31:21 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//pwd
int	get_curr_dir(t_data *data)
{
	char	curr_dir[PATH_MAX];

	if (!getcwd(curr_dir, PATH_MAX))
	{
		perror("getcwd");
		exit(1);
	}
	ft_putendl_fd(curr_dir, STDOUT_FILENO);
	return (data->errnum = 0, TRUE);
}
