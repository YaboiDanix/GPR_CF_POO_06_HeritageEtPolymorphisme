//
// Created by danix on 10/15/2026.
//

#include "firearm.h"

#include <print>
Firearm::Firearm(std::string name, std::string caliber, int damage,
                 float weight, int magazine_capacity)
    : name_(name),
      caliber_(caliber),
      damage_(damage),
      weight_(weight),
      magazine_capacity_(magazine_capacity),
      ammo_(magazine_capacity) {}


void Firearm::Reload() {
  ammo_ = magazine_capacity_;
  std::println("{} : recharge. ({}/{})", name_, ammo_, magazine_capacity_);
}

void Firearm::Fire() {
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
    return;
  }
  --ammo_;
  std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
               magazine_capacity_);

}

bool Firearm::CanFire() const { return ammo_ > 0; }
