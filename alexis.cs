using System;

namespace Alexis {
  class Alexis {
    public string alexis;
    public string swag;
    Alexis() {
      alexis = "alexis";
      swag = "infinity";
      ProclaimSwagness();
    }

    public void ProclaimSwagness() {
      Console.WriteLine("swag on {0}", swag);
    }
    public static void Main(string[] args) {
      Alexis alexis = new Alexis();
    }
  }
}