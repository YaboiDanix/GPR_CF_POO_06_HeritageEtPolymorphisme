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
  virtual const std::string& name() const { return name_; }
  virtual int ammo() const { return ammo_; }
  virtual int magazine_capacity() const { return magazine_capacity_; }

protected:
  std::string caliber_;
  std::string name_;
  int damage_ = 0;
  float weight_ = 0.0f;
  int magazine_capacity_ = 0;
  int ammo_ = 0;
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
