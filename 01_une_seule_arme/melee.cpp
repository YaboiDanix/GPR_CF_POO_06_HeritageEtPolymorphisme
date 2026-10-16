//
// Created by danix on 10/16/2026.
//

#include "melee.h"

#include <print>
Melee::Melee(std::string name, int damage, float weight, float bladeLength)
  :Weapon(name, damage, weight),
  bladeLength_(bladeLength) {}
void Melee::Fire() {
  std::println("un swing de {} : {} degats", name_, damage_);
}
void Melee::Swing() {
Fire();
}