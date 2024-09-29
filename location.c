#include <stdio.h>
#include <string.h>

struct location {
    const char *description;
    const char *tag;
}

locs[] = {
    {"an open field", "field"},
    {"a little cave", "cave"}
};

#define numberOfLocations (sizeof locs / sizeof *locs)

static unsigned locationOfPlayser = 0;

void executeLook(const char *noun){

}