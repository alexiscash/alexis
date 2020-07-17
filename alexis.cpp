#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Alexis {
  public:
    string alexis;
    string swag;
    Alexis() {
      alexis = "alexis";
      swag = "infinity";
      proclaimSwagness();
    }
    void proclaimSwagness() {
      cout << "swag on " << swag << endl;
    }
}

int main() {
  Alexis alexis;
}