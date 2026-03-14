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

  // Circle
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

  /*
  TO BE CHANGED LATER
  */

  // Triangle
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

  // Square
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

  // Rectangle
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

  // Arrow
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

  // Heart
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

  // Crescent
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

  // Star
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

  return;
}
