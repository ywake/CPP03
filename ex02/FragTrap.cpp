/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:36:28 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 15:22:24 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

void FragTrap::_initialize()
{
  std::cout << "[FragTrap constructor] " << this->_name << std::endl;
  this->_hitPoint = 100;
  this->_energyPoint = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(void) : ClapTrap("noname") { _initialize(); }
FragTrap::FragTrap(std::string const &name) : ClapTrap(name) { _initialize(); }

FragTrap::~FragTrap(void)
{
  std::cout << "[FragTrap destructor]" << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << this->_name << " \"high fives!\"" << std::endl;
}
