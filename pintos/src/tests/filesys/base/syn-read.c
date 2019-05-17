/* Spawns 10 child processes, all of which read from the same
   file and make sure that the contents are what they should
   be. */

#include <random.h>
#include <stdio.h>
#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"
#include "tests/filesys/base/syn-read.h"
#include "<stdlib.h>"

static char buf[BUF_SIZE];

#define CHILD_CNT 10

void
test_main (void)
{
  int rand_num = rand() % 2;
  msg("num=%d", rand_num);
}
