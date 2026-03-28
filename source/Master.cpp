#define master main

/*************************************
 * @author pixie-zenne
 * @version 0.0.0 WIP 
 * @license Apache License Version 2.0
 *************************************/

#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>

/**************************************
 * The essential variables for the game
 * CHARACTER
 * SUPPLIER
 * TERMY_INVENTORY
 **************************************/

struct CHARACTER {
  char name[6];
  uint16_t money;
};

struct CHARACTER character[8] = {
  {"Termy", 100},
  {"Yunna", 2000},
  {"Doiko", 500},
  {"Tei", 80},
  {"Atru", 70},
  {"Cinni", 50},
  {"Bopt", 20},
  {"Zeec", 250}
};

struct SUPPLIER {
  char name[10];
  uint8_t quantity;
  uint8_t price;
};

struct SUPPLIER supplier[8] = {
  {"Circle", 10, 5},
  {"Triangle", 10, 10},
  {"Square", 10, 20},
  {"Rectangle", 10, 20},
  {"Arrow", 3, 100},
  {"Heart", 1, 200},
  {"Crescent", 1, 50},
  {"Star", 1, 50}
};

struct TERMY_INVENTORY {
  char name[10];
  uint8_t quantity;
  uint16_t price;
};

struct TERMY_INVENTORY inventory[8] = {
  {"Circle", 0, 0},
  {"Triangle", 0, 0},
  {"Square", 0, 0},
  {"Rectangle", 0, 0},
  {"Arrow", 0, 0},
  {"Heart", 0, 0},
  {"Crescent", 0, 0},
  {"Star", 0, 0}
};

/* To avoid scrolling through lines of dialogue */
#include "Day0_TTS.cpp"
#include "Day1_TTS.cpp"
#include "Day2_TTS.cpp"
#include "Day3_TTS.cpp"
#include "Day4_TTS.cpp"

/********************
 * The game functions
 ********************/

void title(void) {
  using namespace std;

  cout << "Termy The Shopkeeper" << endl;
  cout << "--------------------" << endl;;
  cout << "[0] Story" << endl;
  cout << "[1] Play" << endl;
  cout << "[2] Help" << endl;
  cout << "[3] Credits" << endl;
  cout << "[4] Exit" << endl;
  
  return;
}
void story(void) {
  day0_tts();
  day1_tts();
  day2_tts();
  day3_tts();
  day4_tts();
  return;
}

void play(void) {
  return;
}

void help(void) {
  char tmp = {'\0'};

  system("clear");
  std::cout << "Select a number that appears to interact" << std::endl;
  cout << "Press Enter to go back..."<< endl;
  cin.get(tmp);

  return;
}

void credits(void) {
  char tmp = {'\0'};

  system("clear");
  std::cout << "Developer: Pixie-Zenne" << std::endl;
  cout << "Press Enter to go back..."<< endl;
  cin.get(tmp);

  return;
}

int master(void) {
  bool IsGameRunning = true;
  uint8_t UserInput = 0

  while (IsGameRunning == true) {
    system("clear");

    title();
    std::cout << "> ";
    std::cin >> UserInput;

    switch (UserInput) {
      case 0:
        story();
        break;

      case 1:
        play();
        break;

      case 2:
        help();
        break;

      case 3:
        credits();
        break;

      case 4:
        std::cout << "Goodbye player" << std::endl;
        IsGameRunning = false;
        break;

      default:
        std::cout << "Invalid input" << std::endl;
        break;
    }

    uint8_t UserInput = 0
  }

  return 0;
}
