#include <iostream>

using namespace std;

int main()
{
   char line[100];
   int kolvo = 0;

   cout << "Vvedite stroky: ";
   cin.getline(line,100);

   for(int i =0; line[i] > 0;i++){
       if(line[i] == 33 || line[i] == 44 || line[i] == 63 || line[i] == 46 || line[i] == 58 || line[i] == 59){
           kolvo++;
       }
   }

    cout<<"kolvo= "<<kolvo;
}
