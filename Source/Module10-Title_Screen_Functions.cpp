void story(void) {
  day0();
  day1();
  day2();
  day3();
  day4();
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
