class Node{
    public:
    // class members
    Node(){
        // constructor values
    }
    
};

class SegTree{
    public:

    vector<Node> tree;
    vector<int> arr;
    int n;

    SegTree(vector<int> &arr){
        n=arr.size();
        this->arr=arr;
        tree.resize(4*n);
        build(0,0,n-1);
    }

    Node merge(Node &a, Node &b){
        Node c;
        // code for merge
        return c;
    }
    
    void build(int idx, int l, int r){
        if(l==r){
            Node a;
            //put intitial value of a;
            tree[idx]=a;
            return;
            
        }
      
        int mid=(l+r)/2;
        build((2*idx)+1,l,mid);
        build((2*idx)+2,mid+1,r);
        
        tree[idx]=merge(tree[(2*idx)+1],tree[(2*idx)+2]);
        
    }
    Node query(int idx,int l, int r, int ql, int qr){
        if(qr<l || ql>r){
            return //case for no overlap
        }
        if(ql<=l && qr>=r){
            return  //case for full overlap
        }
        int mid=(l+r)/2;
        Node a=query((2*idx)+1,l,mid,ql,qr);
        Node b=query((2*idx)+2,mid+1,r,ql,qr);
        return merge(&a,&b);
    }

    void update(int idx, int l, int r, int pos,Node &val){
        if(l==r){
            tree[idx]=val;
            // arr[l]=val;
            return;
        }
        int mid=(l+r)/2;
        if(pos<=mid){
        update((2*idx)+1,l,mid,pos,val);
        }
        else{
        update((2*idx)+2,mid+1,r,pos,val);
        }
        tree[idx]=merge(tree[(2*idx)+1],tree[(2*idx)+2]);
        
        
    }
    
    
};
