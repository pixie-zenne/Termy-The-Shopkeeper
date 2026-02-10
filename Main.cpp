#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>

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

void day0(void) {
  using namespace std;

  char tmp = {'\0'};
  uint8_t choice = 0;

  system("clear");
  cout << "You (Termy) are preparing to open up your dream shop in a small town" << endl;
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  system("clear");
  cout << "You currently have" << character[0].money << "money and your shop is empty" << endl;
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  system("clear");
  cout << "You decided to travel to a supplier in the city with you friend, Yunna" << endl;
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  system("clear");
  cout << "Yunna says that the supplier has eight shapes available" << endl;
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  system("clear");
  cout << "She'll be describing each one" << endl;
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  system("clear");
  cout << "Yunna:" << endl;
  cout << "How many circles would you like to buy?" << endl;
  cout << "The ones that is smooth and circular" << endl;
  cout << "A single piece costs 5 bucks" << endl;
  cout << endl;
  cout << "How many would you like to buy?" << endl;
  cout << "[1] Buy none (Default)" << endl;
  cout << "[2] Buy 5 pieces" << endl;
  cout << "[3] Buy 10 pieces" << endl;
  cout << "> " << endl;
  cin >> choice;
  switch (choice) {
    case 2:
      cout << "You bought 5 circles!" << endl;
      character[0].money -= 25;
      break;
    case 3:
      cout << "You bought 10 circles!" << endl;
      character[0].money -= 50;
      break;
    default:
      cout << "You bought no circle!" << endl;
      break;
  }
  cout << "Press Enter to continue..."<< endl;
  cin.get(tmp);

  // To be continued

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

void title(void) {
  using namespace std;

  cout << "Termy The Shopkeeper" << endl;
  cout << "--------------------" << endl;;
  cout << "[1] Play" << endl;
  cout << "[2] Help" << endl;
  cout << "[3] Credits" << endl;
  cout << "[4] Exit" << endl;
  
  return;
}

int main(void) {
  uint8_t IsGameRunning = 1;
  uint8_t UserInput = 0

  while (IsGameRunning != 0) {
    system("clear");

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

    uint8_t UserInput = 0
  }

  return 0;
}
