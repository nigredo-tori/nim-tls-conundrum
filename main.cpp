#include <thread>

extern "C" {
  #include "nimcache/lib.h"
}

void threadFunc() {
  nimWorker();
  nimWorker();
}

int main(int argc, char** argv) {
  NimMain();

  std::thread t(threadFunc);
  t.join();
}
