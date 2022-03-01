/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:06:00 by ywake             #+#    #+#             */
/*   Updated: 2022/03/01 16:29:40 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>
#include <iomanip>

ClapTrap::ClapTrap(std::string const &name) :
  _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
  std::cout << "[constructor] " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << "[destructor] " << _name << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
  std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
  _showStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << _name << " take damage " << amount << "!" << std::endl;
  _hitPoint -= amount;
  _showStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "ClapTrap " << _name << " is repaired " << amount << "!" << std::endl;
  _hitPoint += amount;
  _showStatus();
}

void ClapTrap::_showStatus(void)
{
  std::cout << "\033[2m"
    << "+----------+" << std::endl
    << "|" << std::setw(9) << "ClapTrap " << _name << "|" << std::endl
    << "+----------+" << std::endl
    << "|" << "HP:" << std::setw(7) << _hitPoint << "|" << std::endl
    << "|" << "EP:" << std::setw(7) << _energyPoint << "|" << std::endl
    << "+----------+"
    << "\033[0m" << std::endl;
}
