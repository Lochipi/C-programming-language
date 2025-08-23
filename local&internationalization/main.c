#include <locale.h>

setlocale(LC_ALL, "C"); // use this environment's locale for everything

// Monerary local settings
struct lconv *x = localeconv();
