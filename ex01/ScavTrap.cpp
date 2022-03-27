/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:36:28 by ywake             #+#    #+#             */
/*   Updated: 2022/03/27 18:19:21 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

void ScavTrap::_initialize()
{
  std::cout << "[scav constructor] " << this->_name << std::endl;
  this->_hitPoint = 100;
  this->_energyPoint = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(void) : ClapTrap("noname") { _initialize(); }

// ScavTrap::ScavTrap(ScavTrap const &copy)
// {
//   *this = copy;
//   std::cout << "[scav copy constructor] " << _name << std::endl;
// }

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) { _initialize(); }

ScavTrap::~ScavTrap(void)
{
  std::cout << "[scav destructor]" << this->_name << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
  std::cout << "ScavTrap " << _name << " attack " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
  _showStatus();
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " enterred in Gate keeper mode."
            << std::endl;
  this->_showStatus();
}
