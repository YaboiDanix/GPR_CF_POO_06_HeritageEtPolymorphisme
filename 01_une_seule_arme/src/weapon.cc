#include "weapon.h"

#include <print>
#include <utility>

Weapon::Weapon(std::string name, int damage, float weight)
    : name_(name), damage_(damage), weight_(weight) {}
void Weapon::Fire() {
  std::println("{} degats", damage_);
}