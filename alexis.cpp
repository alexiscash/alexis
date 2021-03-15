#include <iostream>

using std::string;
using std::cout;
using std::endl; 

class Alexis {
  public:
    string name;
    string swag;
    Alexis() {
      name = "alexis";
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