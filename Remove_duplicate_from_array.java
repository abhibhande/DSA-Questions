public class Remove_duplicate_from_array {

    public static void removeDuplicate(String s,int i,int[] alpha,StringBuffer str)
    {
        if(i >= s.length())
        {
            System.out.println(str);
            return;
        }

        if(alpha[s.charAt(i) - 'a'] == 1)
        {
            removeDuplicate(s, i+1, alpha, str);
        }
        else{
            
            alpha[s.charAt(i) - 'a']=1;
            removeDuplicate(s, i + 1, alpha, str.append(s.charAt(i)));
        }
    }
    public static void main(String[] args) {
        int n[]=new int[26];
        removeDuplicate("hiiimynameisabhishek",0,n,new StringBuffer());
    }
}
