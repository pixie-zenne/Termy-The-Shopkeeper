#include <cstdint>
#include <cstring>
#include <iostream>

struct CHARACTER {
  char name[6];
  uint16_t money;
};

struct CHARACTER character[8] = {
  {"Termy", 20},
  {"Yunna", 100},
  {"Doiko", 100},
  {"Tei", 100},
  {"Atru", 100},
  {"Cinni", 100},
  {"Bopt", 100},
  {"Zeec", 100}
};

struct ITEM {
  char name[10];
  uint16_t price;
};

struct ITEM item[8] = {
  {"Circle", 100},
  {"Triangle", 100},
  {"Square", 100},
  {"Rectangle", 100},
  {"Arrow", 100},
  {"Heart", 100},
  {"Crescent", 100},
  {"Star", 100}
};

void play(void) {
  return;
}

void help(void) {
  std::cout << "Select a number that appears to interact" << std::endl;
  return;
}

void credits(void) {
  std::cout << "Developer: Pixie-Zenne" << std::endl;
  return;
}

void title(void) {
  std::cout << "Termy The Shopkeeper" << std::endl;
  std::cout << "--------------------" << std::endl;
  std::cout << "[1] Play" << std::endl;
  std::cout << "[2] Help" << std::endl;
  std::cout << "[3] Credits" << std::endl;
  std::cout << "[4] Exit" << std::endl;
  
  return;
}

int main(void) {
  uint8_t IsGameRunning = 1;
  uint8_t UserInput = 0

  while (IsGameRunning != 0) {
    title();
    std::cout << "> ";
    std::cin >> UserInput;

    switch (UserInput) {
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
        IsGameRunning = 0;
        break;

      default:
        std::cout << "Invalid input" << std::endl;
        break;
    }
  }

  return 0;
}
