/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:02:03 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/26 08:51:19 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdio>

class Sed
{
	public :

		Sed(std::string const & filename);
		~Sed(void);
		void		ft_replace(std::string const & argv2, std::string const & argv3);
		std::string	get_file(void);
		int		check_file(void);

	private :
		void			_put_in_newfile(std::string const str_file);

		std::string const	_filename;
		std::ifstream		_file_stream;
};

#endif