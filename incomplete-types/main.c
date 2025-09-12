struct antelope {           //  
    int leg_count;          // Still incomplete
    float stomach_fullness; // Still incomplete
    float top_speed;        // Still incomplete
    char *nickname;         // Still incomplete
}; // Now it's complete


// Node

struct a
{
    struct b *x; // Refers to a `struct b`
};

struct b {
    struct a *x; // Refers to a `struct a`
}

struct foo; // incomplete type
struct foo *p; // pointer, no problem
// struct foo f; // Error: incomplete type!

struct foo {
   int x, y, z;
}; // Now the struct foo is complete!

struct foo f; // Success!

void *p; // OK: pointer to incomplete type

void v; // Error: declare variable of incomplete type
printf("%d\n", *p); // Error: dereference incomplete type