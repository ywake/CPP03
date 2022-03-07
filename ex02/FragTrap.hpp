/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:03:17 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 15:21:30 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
  void _initialize(void);

public:
  FragTrap(void);
  // FragTrap(FragTrap const &copy);
  FragTrap(std::string const &name);
  ~FragTrap(void);

  void highFivesGuys(void);
};

#endif
