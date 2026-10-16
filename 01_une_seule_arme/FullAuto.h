//
// Created by danix on 10/16/2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#include "firearm.h"


class FullAuto : public Firearm {

  public:
  FullAuto(std::string name, std::string caliber ,int damage, float weight, int magazine_capacity, int burstLength);
  void FireFullAuto();
  const std::string& name() const override { return name_; }


  protected:
  std::string name_;
  std::string caliber_;
  int damage_;
  float weight_;
  int magazine_capacity_;
  int ammo_;
  int burstLength_;
};
#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H