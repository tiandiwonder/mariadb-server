#include <test.h>

int main() {
    int r;
    toku_lock_tree* lt = NULL;
    DB* db;
    BOOL duplicates = FALSE;

    r = toku_lt_create(&lt, db, duplicates, dbcmp, dbcmp, toku_malloc, toku_free,
                       toku_realloc);
    CKERR(r);
    assert(lt);

    r = toku_lt_close(lt);
    CKERR(r);

    return 0;
}

