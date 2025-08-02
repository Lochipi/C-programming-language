// escape sequence \

char *s = "Hello!";
chat t = 'c';

// But what if we want some special characters in there that we can’t type on the keyboard because they don’t
// exist (e.g. “€”), or even if we want a character that’s a single quote? We clearly can’t do this:

chat y = '\'';


// numeric escapes

// CodeDescription
// \123           Embed the byte with octal value 123, 3 digits exactly.
// \x4D           Embed the byte with hex value 4D, 2 digits.
// \u2620         Embed the Unicode character at code point with hex value 2620, 4 digits.
// \U0001243F     Embed the Unicode character at code point with hex value 1243F, 8 digits.


