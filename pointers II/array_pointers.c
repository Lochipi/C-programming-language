// a[b] == *(a + b);

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int *p = a; // Pointer to the first element of the array, 1

    //print all elements of the array a variety of ways 

    for(int i=0; i < 5; i++){
        printf("%d\n", a[i]); // array notation with a
    };

    for(int i=0; i < 5; i++){
        printf("d\n", p[i]); // pointer notation with p
    };

    for(int i=0; i < 5; i++){
        printf("%d\n", *(a + i)); // pointer notation with a
    };

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i)); // pointer notation with p
    };

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p++)); // pointer notation with p, incrementing p
        // printf("%d\n", *(a++)); // Moving array variable a--ERROR!
    };
}

// So you can see that in general, if you have an array variable, you can use pointer or array notion to access
// elements. Same with a pointer variable.
// The one big difference is that you can modify a pointer to point to a different address, but you can’t do that
// with an array variable.