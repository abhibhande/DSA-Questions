// Given n friends, each one can remain single or can be paired up with some other friends. Each friend can be paired only once. Find our the total number of ways in which friends can ermain single or can be paired up.


public class Friends_pairing_Problem {
    public static int findPairCount(int n)
    {
        if(n <= 2)
        {
            return n;
        }
        int c1 = findPairCount(n - 1);
        int c2 = findPairCount(n - 2);
        return c1 + ((n-1) * c2);
    }

    //print n binary string without consecutive ones
    public static void printBinary(boolean pre,int n,String str)
    {
        if(n == 0)
        {
            System.out.println(str);
            return;
        }

        printBinary(false, n - 1, str + "0");

        if(pre == false)
        {
            // printBinary(false, n - 1, str + "0");
            printBinary(true, n - 1, str+"1");
        }
        // if(pre == true)
        // {
        //     printBinary(false, n - 1, str + "0");
        // }
        
    }
    
    public static void main(String[] args) {
        // System.out.println(findPairCount(3));
        StringBuffer str=new StringBuffer("");
        printBinary(false, 5, "");
    }
}
