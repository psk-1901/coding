import java.util.*;
public class fibonacci {

    public static void main(String args[])
    {
        int i=0,j=1,nextTerm;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("enter a number");
            int n=sc.nextInt();
            for(int c=0;c<=n;c++)
            {
                if(c<=1)
                
                    nextTerm=c;
                else
                {
                    nextTerm=i+j;
                    i=j;
                    j=nextTerm;
                }
                System.out.println(nextTerm);
            }
        }
    }
    
}
