#include <iostream>
 
using namespace std;

void hello();
void question();
  
int main()
{
    void (*message)();
      
    message=hello;
    message();
    message = question;
    message();
      
    return 0;
}
void hello()
{
    cout << "Hello, my name is Zhenya!" << endl;
}
void question()
{
    cout << "What is your name?" << endl;
}