//
// Created by danix on 10/15/2026.

#include "SemiAutomatic.h"

#include <print>

SemiAutomatic::SemiAutomatic(std::string name, std::string caliber, int damage,
                             float weight, int magazine_capacity)
    : Firearm(std::move(name), std::move(caliber), damage, weight,
              magazine_capacity) {}

  void SemiAutomatic::SingleShotMode()
{
  Fire();
  std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
               magazine_capacity_);
}