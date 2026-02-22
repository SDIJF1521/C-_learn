  #include <iostream>
  int main(void)
  {
    int carrorts;
    carrorts = 25;
    std::cout << "I have ";
    std::cout << carrorts;
    std::cout << " carrorts."; 
    std::cout << std::endl;
    carrorts = carrorts - 1;
    std::cout << "Crunch, crunch, Now I have " << carrorts << " carrorts." << std::endl;
  }