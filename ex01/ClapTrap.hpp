/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:44 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 13:42:17 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
  std::string _name;
  unsigned int _hitPoint;
  unsigned int _energyPoint;
  unsigned int _attackDamage;
  void _showStatus(void);

public:
  ClapTrap(void);
  ClapTrap(ClapTrap const &copy);
  ClapTrap(std::string const &name);
  ~ClapTrap(void);

  std::string getName() const;
  unsigned int getHitPoint() const;
  unsigned int getEnergyPoint() const;
  unsigned int getAttackDamage() const;

  ClapTrap &operator=(const ClapTrap &other);

  void attack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
