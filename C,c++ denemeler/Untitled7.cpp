#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
 
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;
 
   // str1 de�erini str3 i�ine kopyalar
   str3 = str1;
   cout << "str3 : " << str3 << endl;
 
   // str1 ve str2 de�erlerini birle�tirir.
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
 
   // str3 de�erinin boyutunu verir.
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
 
   return 0;
}
