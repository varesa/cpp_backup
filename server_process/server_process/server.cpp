#include <stdlib.h>
#include <Windows.h>
#include <signal.h>
#include <iostream>

void sighandler(int signum) {
  std::cout << "Received signal " << signum << std::endl;
  if (signum == 9) exit(42);
}

int main()
{
  for (int i = 1; i <= 5; ++i )
    signal(2, sighandler);
  for(;;) Sleep(10);
  exit(0);
}
