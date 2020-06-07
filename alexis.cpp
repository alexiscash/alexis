#include <iostream>

class Alexis {
  public:
    char[] alexis;
    char[] swag;
    Alexis() {
      alexis = "alexis";
      swag = "infinity";
      proclaimSwagness();
    }
    proclaimSwagness() {
      cout << "swag on " << swag << endl;
    }
}

int main() {
  Alexis alexis = new Alexis();

  return 0;
}