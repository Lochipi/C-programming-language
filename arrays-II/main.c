// type qualifiers for arrays in parameter lists

int func(int *const volatile p) {...}
int func(int p[const volatile]) {...}
int func(int p[const volatile 10]) {...}

// static arrays in parameter lists
int func(int p[static 4]) {...}

int main(void){
    int a[] = {11, 22, 33, 44}
    int b[] = {11, 22, 33, 44, 55}
    int c[] = {11, 22}

    func(a); // ok! a is 4 elements, the minimum required
    func(b); // ok! b is at least 4 elements
    func(c); // undefined behavior! c is under 4 elements
}