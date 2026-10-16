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



  protected:
  std::string caliber_;
  int burstLength_;
};
#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H