/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:37:13 by ywake             #+#    #+#             */
/*   Updated: 2022/03/27 18:09:56 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
  void _initialize(void);

public:
  ScavTrap(void);
  // ScavTrap(ScavTrap const &copy);
  ScavTrap(std::string const &name);
  ~ScavTrap(void);

  void attack(std::string const &target);
  void guardGate();
};

#endif
