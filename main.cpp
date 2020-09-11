class dsu{
    public :
    vector<int> par,sz;
    void init(int n){
        par.assign(n,0);
        sz.assign(n,1);
        for(int i = 1;i < n;i++){
            par[i] = i;
        }
    }
    int find(int a){
        if(a == par[a])
            return a;
        else
            return par[a] = find(par[a]);
    }
    int uni(int a,int b){
        a = find(a);
        b = find(b);
        if(a == b)
            return 0;
        if(sz[a] < sz[b])
            swap(a,b);
        par[b] = a;
        sz[a] += sz[b];
        return 1;
    }
};
