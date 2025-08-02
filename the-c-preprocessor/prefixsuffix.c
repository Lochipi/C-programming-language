int x[] = {
#embed "/dev/urandom" limit(3) prefix(11,) suffix(,99)
}
// result: int x[] = {11,135,116,220,99};


int y[] = {
#embed "foo.dat" suffix(,0)
};

// int y[] = {11,22,33,0};

// what if foo.dat empty?

int z[] = {
    #embed foo.dat suffix(,)
    0
}

// result: int x[] = {0};