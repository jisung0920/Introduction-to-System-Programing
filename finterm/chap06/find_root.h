#include <stdio.h>
#include <assert.h>

typedef double dbl;
extern int cnt;
extern const dbl eps;
dbl bisection(dbl f(dbl),dbl, dbl);
dbl f(dbl);
