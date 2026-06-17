// using recursion

int[] arr = {4, 2, 6, 8, 1, 9, 0, 7, 0};

f(arr, 0, arr.Length-1);

foreach(int element in arr)
{
    Console.Write($"{element} ");
}

void f(int[] a, int l, int r)
{
    if(l >= r) return;

    (a[l], a[r]) = (a[r], a[l]);
    
    f(a, l+1, r-1);
}