// Print Linearly from 1 to N

Console.Write("Enter value of N: ");
int N = Convert.ToInt32(Console.ReadLine());

f(1, N);

void f(int i, int N)
{
    if(i > N) return;
    
    Console.WriteLine(i);
    f(i+1, N);
}
