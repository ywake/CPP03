/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:44 by ywake             #+#    #+#             */
/*   Updated: 2022/03/01 16:21:52 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
  std::string _name;
  unsigned int _hitPoint;
  unsigned int _energyPoint;
  unsigned int _attackDamage;
  void _showStatus(void);

public:
  ClapTrap(std::string const &name);
  ~ClapTrap(void);

  void attack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
