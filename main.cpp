#include <iostream>

int main(){
  
  char c;
    cin >> c;
    funzione (c);
  
  if ( ((funzione (c) == true)) and ((c>=65) and (c<=90)) ){
        c=c+32;
        cout << c << endl;
    }else if ( ((funzione (c) == true)) and ((c>=97) and (c<=122)) ){
        c=c-32;
        cout << c << endl;
    }else {
        cout << "errore" << endl;
    }
  
  return 0;
}
