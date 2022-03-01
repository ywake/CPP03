/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:38:15 by ywake             #+#    #+#             */
/*   Updated: 2022/03/01 16:28:12 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap trapA("A");

  trapA.attack("Torneko");
  trapA.takeDamage(5);
  trapA.beRepaired(3);
}
