class Solution {
    public List<String> letterCombinations(String s) {
        String[] keyarr = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        List<String> ans = pad(s,"",keyarr);
        return ans;
    }
    static List<String> pad(String s, String ans, String[] arr) {
        List<String> list = new ArrayList<>();
        if(s.isEmpty()) {
            if(s.isEmpty() && ans.isEmpty()) {
                return list;
            }
            list.add(ans);
            return list;
        }
        char c = s.charAt(0);
        String code = arr[c-'0'];
        String ros = s.substring(1);
        for (int i = 0; i < code.length(); i++) {
            list.addAll(pad(ros,ans+Character.toString(code.charAt(i)),arr));
        }
        return list;
    }
}