#include <iostream>
#include <print>

#include "SemiAutomatic.h"
#include "firearm.h"
#include "weapon.h"

// Le stand de tir. Il ne connait qu'une arme, et il l'appelle directement.
// A vous de lui en donner cinq, de cinq types differents, sans qu'il ait a
// savoir laquelle il tient.
int main() {
  SemiAutomatic pistolet("Pistolet","9mm", 24, 1.1f, 12);

  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", pistolet.name(), pistolet.ammo(),
                 pistolet.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      pistolet.Reload();
    } else if (choix == '1') {
      pistolet.Fire();
    } else {
      std::println("Touche inconnue.");
    }
  }
  Firearm Assaultrifle("AR 90","5", 30, 5.2f, 20);

  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", Assaultrifle.name(), Assaultrifle.ammo(),
                 Assaultrifle.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      Assaultrifle.Reload();
    } else if (choix == '1') {
      Assaultrifle.Fire();
    } else {
      std::println("Touche inconnue.");
    }
  }
  SemiAutomatic pistolet3("Pistolet","4", 24, 1.1f, 12);

  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", pistolet3.name(), pistolet3.ammo(),
                 pistolet3.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      pistolet3.Reload();
    } else if (choix == '1') {
      pistolet3.Fire();
    } else {
      std::println("Touche inconnue.");
    }
  }
  return 0;
}
