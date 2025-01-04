import java.util.Scanner;
class largest
{
    public static void main(String[]args)
    {
        int a,b,c;
        try (Scanner s = new Scanner(System.in)) {
            a=s.nextInt();
            b=s.nextInt();
            c=s.nextInt();
        }
        if(a>b)
        {
            if(a>c)
            {
                System.out.println("Largest number:"+a);
            }
            else
            {
                System.out.println("Largest number:"+c);
            }
        }
        else
        {
            if(b>c)
            {
                System.out.println("Largest number:"+b);
            }
            else
            {
                System.out.println("Largest number:"+c);
            }
        }
    }
}