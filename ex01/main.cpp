/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:38:15 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 14:35:15 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap trapA("A");

  trapA.attack("Torneko");
  trapA.takeDamage(5);
  trapA.beRepaired(3);
  trapA.guardGate();

  ScavTrap trapB;
  trapB = trapA;
  trapB.takeDamage(5);

  ScavTrap trapC(trapB);
  trapB.takeDamage(5);

  trapA.attack("Torneko");
}
