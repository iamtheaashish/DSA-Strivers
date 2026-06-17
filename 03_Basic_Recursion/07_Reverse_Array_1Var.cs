// using recursion

int[] arr = {4, 2, 6, 8, 1, 9, 0, 7, 0};

f(arr, 0);

foreach(int element in arr)
{
    Console.Write($"{element} ");
}

void f(int[] a, int i)
{
    if (i >= a.Length / 2) return;

    (a[i], a[a.Length - i - 1]) = (a[a.Length - i - 1], a[i]);

    f(a, i + 1);
}