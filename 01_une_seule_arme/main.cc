#include <iostream>
#include <print>
#include "FullAuto.h"
#include "SemiAutomatic.h"
#include "melee.h"

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
      pistolet.SingleShotMode();
    } else {
      std::println("Touche inconnue.");
    }
  }

  FullAuto Assaultrifle("AR 90","20mm", 30, 5.2f, 20,5);
  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  2  {}  {}/{}", Assaultrifle.name(), Assaultrifle.ammo(),
                 Assaultrifle.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      Assaultrifle.Reload();
    } else if (choix == '1') {
      Assaultrifle.FireFullAuto();
    } else {
      std::println("Touche inconnue.");
    }
  }

  Melee epee("sword", 20, 1.1f, 12);
  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  3  {}  ", epee.name());
    std::println(" q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') {
      break;
    }
    if (choix == '1') {
      epee.Swing();
    } else {
      std::println("Touche inconnue.");
    }
  }

  SemiAutomatic Sniper("Sniper","40mm", 200, 10.1f, 10);
  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  4  {}  {}/{}", Sniper.name(), Sniper.ammo(),
                 Sniper.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      Sniper.Reload();
    } else if (choix == '1') {
      Sniper.SingleShotMode();
    } else {
      std::println("Touche inconnue.");
    }
  }
  FullAuto smg("mitraillette","5mm", 15, 5.2f, 30,30);

  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  5  {}  {}/{}", smg.name(), smg.ammo(),
                 smg.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      smg.Reload();
    } else if (choix == '1') {
      smg.FireFullAuto();
    } else {
      std::println("Touche inconnue.");
    }
  }

  Melee Lance("Lance", 30, 1.8f, 20);
  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  3  {}  ", Lance.name());
    std::println(" q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') {
      break;
    }
    if (choix == '1') {
      Lance.Swing();
    } else {
      std::println("Touche inconnue.");
    }
  }
  return 0;
}
