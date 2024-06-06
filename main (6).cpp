#include<iostream>
using namespace std;
int main()
{
   float  hajmebak,masrafsookht,masafat;
   cin>> hajmebak>>masrafsookht;
   masafat=(hajmebak/masrafsookht)*100;
   if(masrafsookht<100){
       cout<<"pleas full back";
   }
   cout<<"Masafat"<<masafat;
   return 0;
}
  