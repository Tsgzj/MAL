#include <readline/history.h>
#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern inline void _repl();

char *
_read() {
    static char *line = (char *)NULL;

    if (line) {
        free(line);
        line = (char *)NULL;
    }

    line = readline("user> ");

    if (line && *line) {
        add_history(line);
    }
    return line;
}

char *
_eval(char *eq) {
    return eq;
}

void
_print(char *res) {
    printf("here %s\n", res);
}

void
_repl() {
    while (1) {
        char *eq = _read();
        if (!strncmp(eq, "(exit)", 6)) {
            break;
        } else {
            _print(_eval(eq));
        }
    }
}

int
main(int argc, char *argv[]) {
    _repl();
    return 0;
}
