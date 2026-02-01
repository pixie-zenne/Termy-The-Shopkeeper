#include <cstring>
#include <iostream>

struct CHARACTER {
  char name[10];
  uint16_t money;
};

struct CHARACTER character[8];

character[0].name = "Termy";
character[1].name = "";
character[2].name = "";
character[3].name = "";
character[4].name = "";
character[5].name = "";
character[6].name = "";
character[7].name = "";

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

int main(void) {
  uint8_t IsGameRunning = 1;

  while (IsGameRunning == 1) {

  }

  return 0;
}
