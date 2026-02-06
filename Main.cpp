#include <cstdint>
#include <cstring>
#include <iostream>

struct CHARACTER {
  char name[6];
  uint16_t money;
};

struct CHARACTER character[8] = {
  {"Termy", 1000},
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

void day0(void) {
  std::cout << "You (Termy) are preparing to open up your dream shop" << std::endl;
  return;
}

void day1(void) {
  return;
}

void day2(void) {
  return;
}

void day3(void) {
  return;
}

void day4(void) {
  return;
}

void play(void) {
  day0();
  day1();
  day2();
  day3();
  day4();
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
