#ifndef GPR_CF_POO_06_HERITAGE_WEAPON_H
#define GPR_CF_POO_06_HERITAGE_WEAPON_H

#include <string>

// Une arme, une classe, aucun heritage. C'est le point de depart : le stand de
// tir n'en connait qu'une, et Fire() sait faire une seule chose.
class Weapon {

 public:

  Weapon(std::string name, int damage, float weight);
  virtual void Fire() = 0;
  const std::string& name() const { return name_; }

 protected:
  std::string name_;
  int damage_;
  float weight_ ;

};


#endif  // GPR_CF_POO_06_HERITAGE_WEAPON_H
