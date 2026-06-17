// functional way

Console.Write("Enter value of N: ");
int N = Convert.ToInt32(Console.ReadLine());

Console.WriteLine(f(N));

int f(int n)
{
    if(n==0) return 0;

    return n + f(n-1);
}