//
// Created by danix on 10/15/2026.
//
#include <string>
#include "weapon.h"
#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
class Firearm : public Weapon {

public:
  Firearm(std::string name, std::string caliber ,int damage, float weight, int magazine_capacity);
  void Reload();
  void Fire() override;
  bool CanFire() const;
   int ammo() const { return ammo_; }
   int magazine_capacity() const { return magazine_capacity_; }

protected:
  std::string caliber_;
  int magazine_capacity_;
  int ammo_;
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
