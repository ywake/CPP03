/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:38:15 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 15:21:18 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
  FragTrap trapA("A");

  trapA.attack("Torneko");
  trapA.takeDamage(5);
  trapA.beRepaired(3);
  trapA.highFivesGuys();

  FragTrap trapB;
  trapB = trapA;
  trapB.takeDamage(5);

  FragTrap trapC(trapB);
  trapB.takeDamage(5);

  trapA.attack("Torneko");
}
