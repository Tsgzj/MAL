#include <glib.h>

typedef struct {
    GArray *tokens;
    int pos;
} Reader;

Reader *
init_reader() {
    Reader *reader = malloc(sizeof(Reader));
    reader->tokens = g_array_sized_new(false, false, sizeof(char *), 16);
    reader->pos = 0;
    return Reader;
}

void *
reader_append(Reader *r, char *token) {
    g_array_append_val(r->tokens, token);
}

char *
reader_next(Reader *r) {
    return g_array_index(r->tokens, (char *), r->pos++);
}

char *
reader_peek(Reader *r) {
    return g_array_index(r->tokens, (char *), r->pos);
}

Reader *
reader_str() {}

GArray *
tokenizer() {}
