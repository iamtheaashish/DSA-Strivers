// parameterised way

Console.Write("Enter value of N: ");
int N = Convert.ToInt32(Console.ReadLine());

f(N, 0);

void f(int i, int sum)
{
    if(i < 1)
    {
        Console.WriteLine(sum);
        return;
    }
    
    f(i-1, sum + i);
}