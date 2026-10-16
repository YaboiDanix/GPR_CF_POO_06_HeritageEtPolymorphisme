//
// Created by danix on 10/16/2026.
//

#include "melee.h"

#include <print>
Melee::Melee(std::string name, int damage, float weight, float bladeLength)
  :Weapon(std::move(name), damage, weight),
  bladeLength_(bladeLength) {}

void Melee::Swing() {
  std::println("un Swing de {}", name_);
Fire();
}