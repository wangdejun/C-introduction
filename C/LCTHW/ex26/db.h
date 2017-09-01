#ifndef _db_h
#define _db_h

#define DB_FILE "/Users/wangdejun/LE/C++/C/LCTHW/ex24/.devpkg/db"
#define DB_DIR "/Users/wangdejun/LE/C++/C/LCTHW/ex24/.devpkg"

int DB_init();
int DB_list();
int DB_update(const char *url);
int DB_find(const char *url);

#endif