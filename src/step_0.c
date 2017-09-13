#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

extern inline void _repl ();

char *
_read () {
  char *line = readline ("user>");
  return line;
}

char *
_eval (char *eq) {
  return eq;
}

void
_print (char *res) {
  printf ("%s\n", res);
}

void
_repl () {
  while (1)
    {
      _print (_eval (_read ()));
    }
}

int
main (int argc, char *argv[]) {
  _repl ();
  return 0;
}
