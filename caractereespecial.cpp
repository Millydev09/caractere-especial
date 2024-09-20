//formataçãoespecialdecar.cpp

#include <iostream>
#include <cwchar>

using namespace std;

int main (void){
  setlocale(LC_ALL, "Portuguese_Brazil.1252 ");

  wchar_t caractere1= L'\u00AE';
  wchar_t caractere2 = L'\U000000AE';
  wchar_t caractere3 = L'\ xAE';
  wchar_t frase [19] = L"marca registrada \u00AE";

  wcout << L"caractere 1 ... " << caractere1 << endl;
  wcout << L"caractere 2.. :" << caractere2 << endl;
  wcout << L"caractere 3 ... : " << caractere3 << endl;
  wcout << L"texto ...... : " << frase << endl;
  return 0;

}
