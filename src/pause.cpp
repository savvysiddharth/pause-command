#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  for(int i=1; i<argc; i++) {
    cout << argv[i] << " ";
  }
  if(argc == 1) {
    cout << "Press enter key to continue..";
  }
  int temp;
  temp = getc(stdin);
}