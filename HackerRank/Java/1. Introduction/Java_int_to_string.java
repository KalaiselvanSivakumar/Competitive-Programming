//Write your code here
String s = "";
if (n == 0)
{
    s = "0";
}
else
{
    int temp = n;
    if(temp < 0)
    {
        temp = -temp;
    }
    while (temp != 0)
    {
        s = temp%10 + s;
        temp /= 10;
    }
    if(n < 0)
    {
        s = "-" + s;
    }
}
