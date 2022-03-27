/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:06:00 by ywake             #+#    #+#             */
/*   Updated: 2022/03/27 13:57:30 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iomanip>
#include <iostream>

ClapTrap::ClapTrap(void) :
    _name("NoName"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
  std::cout << "[constructor] default" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
  std::cout << "[constructor] copy" << std::endl;
  *this = copy;
}

ClapTrap::ClapTrap(std::string const &name) :
    _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
  std::cout << "[constructor] " << name << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "[destructor] " << _name << std::endl; }

std::string ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitPoint() const { return _hitPoint; }
unsigned int ClapTrap::getEnergyPoint() const { return _energyPoint; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
  std::cout << "operator=" << std::endl;
  if (this != &other) {
    _name = other.getName();
    _hitPoint = other.getHitPoint();
    _energyPoint = other.getEnergyPoint();
    _attackDamage = other.getAttackDamage();
  }
  return *this;
}

void ClapTrap::attack(std::string const &target)
{
  std::cout << "ClapTrap " << _name << " attack " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
  _showStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << _name << " take damage " << amount << "!"
            << std::endl;

  long calc = _hitPoint;
  _hitPoint = std::max(calc - amount, 0L);
  if (_hitPoint == 0)
    std::cout << _name << " is dead." << std::endl;
  _showStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "ClapTrap " << _name << " is repaired " << amount << "!"
            << std::endl;
  _hitPoint += amount;
  _showStatus();
}

void ClapTrap::_showStatus(void)
{
  std::cout << "\033[2m"
            << "+----------+\n"
            << "|" << std::setw(9) << "ClapTrap " << _name << "|\n"
            << "+----------+\n"
            << "|HP:" << std::setw(7) << _hitPoint << "|\n"
            << "|EP:" << std::setw(7) << _energyPoint << "|\n"
            << "+----------+"
            << "\033[0m" << std::endl;
}
