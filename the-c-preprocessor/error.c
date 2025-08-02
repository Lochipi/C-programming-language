// This directive causes the compiler to error out as soon as it sees it.
// Commonly, this is used inside a conditional to prevent compilation unless some prerequisites are met:

#ifndef __STDC_IEC_559__
  #error I really need IEEE-754 floating point to compile. Sorry!
#endif