#include <stdio.h> 
#include <sqlite3.h>

int main(int argc, char* argv[]) {

    sqlite3* db;
    int c; 
    c = sqlite3_open_v2("/C:sqlite/Songs.db", &db, SQLITE_OPEN_READWRITE, NULL); 
    
    if(c != SQLITE_OK) { 
        printf("Can/’t open database! %s\n", sqlite3_errmsg(db)); 
        return(0); 
        } 
        else { 
            printf("Connect to database successfully.\n"); 
            } 
    sqlite3_close(db); 
    }
