//
// Created by danix on 10/16/2026.
//
#include "firearm.h"
#include "FullAuto.h"
FullAuto::FullAuto(std::string name, std::string caliber ,int damage,
  float weight, int magazine_capacity, int burstLength)
  :Firearm(std::move(name), std::move(caliber), damage, weight,
              magazine_capacity),
    burstLength_(burstLength){}

void FullAuto::FireFullAuto() {
  for (int i = 0; i < burstLength_; i++) {
    Fire();
    if (ammo_ == 0)
    
      break;{

    }
  }
}