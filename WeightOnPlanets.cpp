#include <iostream>

int main() {
  
  // initialize variables
  double EarthWeight, NewPlanetWeight;
  int planet;
  
  // Ask user to type in their weight
  std::cout << "Enter your weight on Earth (lbs): ";
  std::cin >> EarthWeight;
  
  // List the planets out
  std::cout << "Venus = 1\n";
  std::cout << "Mars = 2\n";
  std::cout << "Jupiter = 3\n";
  std::cout << "Saturn = 4\n";
  std::cout << "Uranus = 5\n";
  std::cout << "Neptune = 6\n";
  
  // Ask user which planet they want to visit
  std::cout << "Which planet do you want to visit: ";
  std::cin >> planet;
  
  // Calculate depending on the user's input
  if (planet == 1) {
    
      NewPlanetWeight = EarthWeight * 0.78;
      std::cout << "Your weight on Venus is: ";
      std::cout << NewPlanetWeight << "\n";
    
  }
  else if (planet == 2) {
    
    NewPlanetWeight = EarthWeight * 0.39;
    std::cout << "Your weight on Mars is: ";
    std::cout << NewPlanetWeight << "\n";
    
  }
  else if (planet == 3) {
    
    NewPlanetWeight = EarthWeight * 2.65;
    std::cout << "Your weight on Jupiter is: ";
    std::cout << NewPlanetWeight << "\n";
    
  }
  else if (planet == 4) {
    
    NewPlanetWeight = EarthWeight * 1.17;
    std::cout << "Your weight on Saturn is: ";
    std::cout << NewPlanetWeight << "\n";
    
  }
  else if (planet == 5) {
    
    NewPlanetWeight = EarthWeight * 1.05;
    std::cout << "Your weight on Uranus is: ";
    std::cout << NewPlanetWeight << "\n";
    
  }
  else if (planet == 6) {
    
    NewPlanetWeight = EarthWeight * 1.23;
    std::cout << "Your weight on Neptune is: ";
    std::cout << NewPlanetWeight << "\n";
    
  }
  
  std::cout << "\n\n\n";
  
  return main();
}
