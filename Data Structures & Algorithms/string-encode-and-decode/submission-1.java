class Solution {

    public String encode(List<String> strs) {
       String result=""; 
        for(String str : strs)
        {
            result+=str.length()+"#"+str;
        }
        return result;
    }

    public List<String> decode(String str) 
    {
        List<String> result = new ArrayList<>();
        int i=0;
        while(i<str.length())
        {
        String numstr="";
        while(str.charAt(i)!='#')
        {
        numstr=numstr+str.charAt(i);
        i++;
        }
        int len=Integer.parseInt(numstr);
        result.add(str.substring(i+1,i+1+len));
        i=i+1+len;
        }
        return result;

    }
}