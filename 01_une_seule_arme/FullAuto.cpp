//
// Created by danix on 10/16/2026.
//
#include "FullAuto.h"

#include <print>

#include "firearm.h"
FullAuto::FullAuto(std::string name, std::string caliber ,int damage,
  float weight, int magazine_capacity, int burstLength)
  :Firearm(std::move(name), std::move(caliber), damage, weight,
              magazine_capacity),
    burstLength_(burstLength){}

void FullAuto::FireFullAuto() {
  if (ammo_ == 0) {
    std::println("chargeur vide.");
    return;
  }
  for (int i = 0; i < burstLength_; i++) {
    Fire();
  }
  std::println("{} : {} projectile, {} degats. ({}/{})", name_,  burstLength_, damage_*burstLength_,ammo_,
              magazine_capacity_);
}

