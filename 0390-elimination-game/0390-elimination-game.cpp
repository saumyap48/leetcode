class Solution {
public:
    int lastRemaining(int n) {
        if(n==1) return 1;
        int current_size=1;
        int remaining=n;
        int ans=1;
        bool left=0;
        while(remaining>1){
            if(left==0 || remaining%2==1){
            ans=ans+current_size;
            cout<<ans;
        }
        current_size=current_size*2;
        remaining=remaining/2;
        left=!left;
    }
    return ans;
}
};