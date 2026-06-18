int n = Convert.ToInt32(Console.ReadLine());
Console.WriteLine(f(n));

int f(int n)
{
    if(n <= 1) return n;

    return f(n-1) + f(n-2); // this is synchronous and not parallel or concurrent.
}