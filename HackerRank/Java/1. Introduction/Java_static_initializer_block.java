//Solution alone

private static boolean flag = false;
private static int B;
private static int H;
static {
    Scanner scan = new Scanner(System.in);
    B = scan.nextInt();
    H = scan.nextInt();
    if (B > 0 && H > 0)
    {
        flag = true;
    }
    else
    {
        flag = false;
        System.out.println("java.lang.Exception: Breadth and height must be positive");
    }
    scan.close();
}
