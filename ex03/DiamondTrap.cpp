/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:36:28 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 17:12:33 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

void DiamondTrap::_initialize()
{
  std::cout << "[DiamondTrap constructor] " << this->DiamondTrap::_name
            << std::endl;
  this->_hitPoint = FragTrap::_hitPoint;
  this->_energyPoint = ScavTrap::_energyPoint;
  this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(void) : ClapTrap("noname_clap_name"), _name("noname")
{
  _initialize();
}

DiamondTrap::DiamondTrap(std::string const &name) :
    ClapTrap(name + "_clap_name"), _name(name)
{
  _initialize();
}

DiamondTrap::~DiamondTrap(void)
{
  std::cout << "[DiamondTrap destructor]" << this->_name << std::endl;
}

void DiamondTrap::whoAmI()
{
  std::cout << "I am " << this->DiamondTrap::_name << "\n"
            << "Also I am " << this->ClapTrap::_name << std::endl;
}
