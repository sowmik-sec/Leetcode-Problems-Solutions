class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0, cnt = 0;
        for(;i<name.size();) {
            int cnt2 = 1;
            for(int k = i+1;k<name.size();k++) {
                if(name[i]==name[k]) ++cnt2;
                else break;
            }
            int cnt3 = 0;
            cout<<"name[i] = "<<name[i]<<endl;
            for(;j<typed.size();) {
                if(name[i]==typed[j]) j++,cnt3++;
                else if(cnt3==0 and name[i]!=typed[j]) return false;
                else if(i==name.size()-1 and name[i]!=typed[j]) return false;
                else break;
            }
            cout<<"i = "<<i<<" name[i] == "<<name[i]<<" cnt2,cnt3 = "<<cnt2<<" "<<cnt3<<endl;
            if(cnt2>1) i+=cnt2;
            else i++;
            if(cnt3<cnt2) return false;
        }
        return true;
    }
};