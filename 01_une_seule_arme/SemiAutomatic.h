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


protected :
  std::string caliber_;
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
