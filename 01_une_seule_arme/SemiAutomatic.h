//
// Created by danix on 10/15/2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#include "firearm.h"
class SemiAutomatic : public Firearm {

public:
  SemiAutomatic(std::string name, std::string caliber, int damage , float weight,int magazine_capacity);
  void SingleShotMode();
  const std::string& name() const override { return name_; }

protected :
  std::string caliber_;
  std::string name_;
  int damage_;
  float weight_ = 0.0f;
  int magazine_capacity_ = 0;
  int ammo_ = 0;
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
