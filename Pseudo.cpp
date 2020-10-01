#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int wynik = 0;
	int wyn(int i)
	
	{
		if(i<3){
			wynik +=1;
			return 1;
		}
		else
		{
			if (i % 2 == 0) {
                return wyn(i - 3) + wyn(i - 1) + 1;
                
                }
                else {
                return wyn(i - 1) % 7;

			}	
		}
}
/////////////////////////////////////////////////
int wyliczMax(){
   int W[1000];
   int max_wart = 1;
   
   W[0] = 1;
   W[1] = 1;
   W[2] = 1;

   for(int i = 3;i<=1000;i++)
   {
        if(i%2==0)
                W[i] = W[i-3] + W[i-1] + 1;
        else
                W[i] = W[i-1]%7;
        if(W[i]>max_wart)
                max_wart = W[i];
   }
   return max_wart;
}
////////////////////////////////////////////
int main(int argc, char** argv) {

	 int i = 0;
	        for(i = 0; i<11; i++){
                wynik = 0;
      cout << i;
      cout << " / ";
      cout << wyn(i);
      cout << " / ";
	  cout << wynik << "\n";
}
        cout << wyliczMax(); //podpunkt 1.3

	return 0;
}
