// Source - https://stackoverflow.com/a/29439816
// Posted by David C. Rankin, modified by community. See post 'Timeline' for change history
// Retrieved 2026-06-25, License - CC BY-SA 3.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substr (char* src, size_t start, size_t len)
{
    /* validate indexes */
    if (start + len > strlen (src)) {
        fprintf (stderr, "%s() error: invalid substring index (start+len > length).\n", __func__);
        return NULL;
    }

    char* sub = calloc (1, len + 1);

    /* validate allocation */
    if (!sub) {
        fprintf (stderr, "%s() error: memory allocation failed.\n", __func__);
        return NULL;
    }

    memcpy (sub, src + start, len);
    // sub[len] = '\0';             /* by using calloc, sub is filled with 0 (null) */

    return sub;
}

int main (int argc, char **argv) {

    if (argc < 4 ) {
        fprintf (stderr, "error: insufficient input, usage: %s string ss_start ss_length\n", argv[0]);
        return 1;
    }

    char* test = argv[1];           /* no need to allocate test, a pointer is fine  */

    size_t ss_start  = (size_t)atoi (argv[2]);      /* convert start & length from  */
    size_t ss_lenght = (size_t)atoi (argv[3]);      /* the command line arguments   */

    char* sub = substr (test, ss_start, ss_lenght);

    if (sub)                                        /* validate sub before use  */
        printf("\n sub: %s\n\n", sub);

    if (sub)                                        /* validate sub before free */
        free(sub);

    return 0;
}

