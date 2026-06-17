// Print Linearly from N to 1

Console.Write("Enter value of N: ");
int N = Convert.ToInt32(Console.ReadLine());

f(N, 1);

void f(int N, int i)
{
    if(N < i) return;
    
    Console.WriteLine(N);
    f(N-1, i);
}
