// Copied function definitions

#ifndef LOCAL_H
#define LOCAL_H
void *
reallocarray(void *optr, size_t nmemb, size_t size);
size_t
strlcpy(char *dst, const char *src, size_t dsize);
size_t
strlcat(char *dst, const char *src, size_t dsize);
long long
strtonum(const char *numstr, long long minval, long long maxval,
    const char **errstrp);
char *
fgetln(FILE *fp, size_t *len);

#define __dead 
#define pledge
#endif
