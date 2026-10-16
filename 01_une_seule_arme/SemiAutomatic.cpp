//
// Created by danix on 10/15/2026.

#include "SemiAutomatic.h"

SemiAutomatic::SemiAutomatic(std::string name, std::string caliber, int damage,
                             float weight, int magazine_capacity)
    : Firearm(std::move(name), std::move(caliber), damage, weight,
              magazine_capacity) {}

  void SemiAutomatic::SingleShotMode()
{
  Fire();
}