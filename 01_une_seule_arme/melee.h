//
// Created by danix on 10/16/2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#include "weapon.h"
class Melee : public Weapon {

  public:

  Melee(std::string name, int damage, float weight, float bladeLength);
  void Swing();
  const std::string& name() const { return name_; }

  protected:
  std::string name_;
  int damage_;
  float weight_;
  float bladeLength_;

};
#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
