int count = 0;
f();

void f()
{
    Console.WriteLine(count);
    if (count == 99) return;
    else
    {
        count++;
        f();
    }
}