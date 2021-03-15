using System;

namespace Alexis {
  class Alexis {
    public string Name { get; set; }; 
    public string Swag { get; set; };

    public Alexis() {
      Name = "alexis";
      Swag = "infinity";
      ProclaimSwagness();
    }

    public void ProclaimSwagness() {
      Console.WriteLine("swag on {0}", Swag);
    }
    public static void Main(string[] args) {
      var alexis = new Alexis();
    }
  }
}