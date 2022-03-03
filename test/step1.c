#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#include "driver/dummy.h"
#include "net.h"
#include "test.h"
#include "util.h"

static volatile sig_atomic_t terminate;

static void on_signal(int s) {
  (void)s;
  terminate = 1;
}

int main(int argc, char *argv[]) {}
