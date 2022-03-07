/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:38:15 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 15:43:29 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
  DiamondTrap trapA("A");

  trapA.attack("Torneko");
  trapA.takeDamage(5);
  trapA.beRepaired(3);
  trapA.whoAmI();
  trapA.highFivesGuys();
  trapA.guardGate();

  DiamondTrap trapB;
  trapB = trapA;
  trapB.takeDamage(5);

  DiamondTrap trapC(trapB);
  trapB.takeDamage(5);

  trapA.attack("Torneko");
}
