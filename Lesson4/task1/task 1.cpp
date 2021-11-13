#include <iostream>

using namespace std;

int main()
{
   char line[100];
   int kolvo = 0;

   cout << "Vvedite stroky: ";
   cin.getline(line,100);

   for(int i =0; line[i] > 0;i++){
       if(line[i] == '!' || line[i] == ',' || line[i] == '?' || line[i] == '.' || line[i] == ':' || line[i] == ';'){
           kolvo++;
       }
   }

    cout<<"kolvo= "<<kolvo;
}
