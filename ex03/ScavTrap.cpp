/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:36:28 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 17:19:23 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

void ScavTrap::_initialize()
{
  std::cout << "[ScavTrap constructor] " << this->_name << std::endl;
  this->_hitPoint = 100;
  this->_energyPoint = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(void) : ClapTrap("noname") { _initialize(); }

// ScavTrap::ScavTrap(ScavTrap const &copy)
// {
//   *this = copy;
//   std::cout << "[ScavTrap copy constructor] " << _name << std::endl;
// }

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) { _initialize(); }

ScavTrap::~ScavTrap(void)
{
  std::cout << "[ScavTrap destructor]" << this->_name << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " enterred in Gate keeper mode."
            << std::endl;
  this->_showStatus();
}
