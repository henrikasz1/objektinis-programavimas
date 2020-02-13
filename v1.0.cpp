#include <iostream>
#include <string>

struct duom{
 std::string zodis;
 std::string::size_type eil;
 std::string::size_type stulp;
 int trp;
};//struktura, kurioje saugojama eilutes kintamieji kaip vienas kintamasis

int main ()
{
  duom d;//strukturos kintamasis
  std::string a;
  std::cout << "Iveskite varda: ";
  std::cin >> a;
  std::cout << "Iveskite remelio dydi: ";
  std::cin >> d.trp;
  std::cout << std::endl;
  if (a.back()=='a' || a.back()=='e')
  {
    d.zodis="Sveika, "+a+"!";
  }
  else d.zodis="Sveikas, "+a+"!";

  d.eil=d.trp*2+3; //eiluciu skaicius(*2, nes is abieju pusiu, 3, nes 1uzima vardas ir 1pradzia ir 1pabaiga)
  d.stulp=d.trp*2+2+d.zodis.size(); //bendras stulpeliu skaicius

  std::cout << std::endl;

  for (int b=0; b<d.eil; b++)//ciklas, einanatis per visas eilutes
  {
    std::string::size_type a = 0;//kintamasis, kuris pades praeiti per visus kiekvineos eilutes stulpelius
    while(a!=d.stulp)
    {
      if (b==d.trp+1 && a==d.trp+1)//randu sveikinimosi vieta
      {
        std::cout << d.zodis;
        a+=d.zodis.size();
      }
      else
      {
        if (b==0 or b==d.eil-1 or a==0 or a==d.stulp-1)//randu vietas, kuriose reikia nupiesti remeli
        {
          std::cout<<"*";
        }
        else//randu vietas, kurios nera nei krastas, nei vieta irasyti sveikinima
        {
          std::cout << " ";
        }
        a++;
      }
    }
    std::cout << std::endl;
   }
   return 0;
}
