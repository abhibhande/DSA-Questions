import java.util.*;

public class Tiling_Problem{
    public static int countOfWays(int n)
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }
        int n1 = countOfWays(n - 2);
        int n2 = countOfWays(n - 1);
        return n1+n2;
    }
    public static void main(String[] args) {
        System.out.println(countOfWays(4));
    }
}