#include <cstring>
#include <iostream>

struct CHARACTER {
  char name[6];
  uint16_t money;
};

struct CHARACTER character[8];

character[0].name = "Termy";
character[1].name = "Yunna";
character[2].name = "Doiko";
character[3].name = "Tei";
character[4].name = "Atru";
character[5].name = "Cinni";
character[6].name = "Bopt";
character[7].name = "Zeec";

character[0].money = 20;
character[1].money = 100;
character[2].money = 100;
character[3].money = 100;
character[4].money = 100;
character[5].money = 100;
character[6].money = 100;
character[7].money = 100;

struct ITEM {
  char name[10];
  uint16_t price;
};

struct ITEM item[8];

item[0].name = "Circle";
item[1].name = "Triangle";
item[2].name = "Square";
item[3].name = "Rectangle";
item[4].name = "Arrow";
item[5].name = "Heart";
item[6].name = "Crescent";
item[7].name = "Star";

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

  while (IsGameRunning == 1) {

  }

  return 0;
}
