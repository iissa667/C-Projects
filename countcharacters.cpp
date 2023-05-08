

#include <iostream>

#include <string>

using namespace std;



int main() {



string userString;

char userChar;

cin>>userChar;

getline(cin,userString);

int result = 0;

for(int i = 0;i<userString.length();i++){

if(userString[i] == userChar){

result++;

}

}

if (result != 1){

cout<<result<< " " << userChar << "'s" <<endl;

}

else { cout<<result<< " " << userChar <<endl;}

return 0;

}