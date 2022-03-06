/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:38:15 by ywake             #+#    #+#             */
/*   Updated: 2022/03/07 14:34:19 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap trapA("A");

  trapA.attack("Torneko");
  trapA.takeDamage(5);
  trapA.beRepaired(3);

  ClapTrap trapB;
  trapB = trapA;
  trapB.takeDamage(5);

  ClapTrap trapC(trapB);
  trapC.takeDamage(5);

  trapA.attack("Torneko");
}
