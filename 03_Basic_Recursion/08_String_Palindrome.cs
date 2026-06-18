Console.Write("Enter a string: ");
string input = Console.ReadLine();

Console.WriteLine($"Is the string a palindrome? : {f(input, 0, input.Length - 1)}");

bool f(string s,int l, int r)
{
    if(l>=r) return true;
    if(s[l] != s[r]) return false;

    return f(s, l+1, r-1);
}