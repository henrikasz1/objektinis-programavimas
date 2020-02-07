#include <iostream>
#include <string>

int main ()
{
  std::string a;
  std::cout << "Iveskite varda" << std::endl;
  std::cin >> a;
  std::cout << std::endl;
  std::string zodis="Sveikas, ";
  zodis+=a+"!";
  std::string spaces(zodis.size(), ' ');
  std::string s="* "+spaces+" *";
  std::string zv(s.size(),'*');
  std::cout << zv << std::endl;
  std::cout << s << std::endl;
  std::cout << "* " << zodis << " *" << std::endl;
  std::cout << s << std::endl;
  std::cout << zv << std::endl;
  return 0;
}
