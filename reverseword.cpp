#include <iostream>
using namespace std;

int main() {
   string inputText;
   int i; 
   
   getline(cin, inputText);
   
   while (inputText != "Done" && inputText != "done" && inputText != "d"){
           for ((i = (inputText.length() - 1)); i >= 0; i--){
                 cout << inputText[i];
            }
            cout << endl;
            cin >> inputText;
   }
   
   while ((inputText == "done") || (inputText == "Done") || (inputText == "d") ){
      break;
   }

   return 0;
}