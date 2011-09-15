#include "log.h"
#include <android/log.h>

void log_write(int prio, const char * tag, const char *text) {
    __android_log_write(prio, tag, text);
}
