#include <iostream>

class Alexis {
  public:
    std::string alexis;
    std::string swag;
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
  Alexis alexis;
}