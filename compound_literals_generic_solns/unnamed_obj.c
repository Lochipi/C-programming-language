// Passing unnamed objects to functions

int sum(int p[], int count)
{
    int total = 0;

    for (int i = 0; i < count; i++)
        total += p[i];

    return total;
}

// If we wanted to call it, we’d normally have to do something like this, declaring an array and storing values
// in it to pass to the function:

int a[] = {1, 2, 3, 4};
int s = sum(a, 4);

// But unnamed objects give us a way to skip the variable by passing it directly in (parameter names listed
// above). Check it out—we’re going to replace the variable a with an unnamed array that we pass in as the
// first argument:

//                   p[]         count
//           |-----------------| | 
int s = sum((int []){1, 2, 3, 4}, 4);
