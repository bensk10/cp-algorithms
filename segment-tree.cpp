const int N = 100005;

int t[4 * N];

void build(vector<int> V, int i, int ti, int tj){
    if(ti == tj){
        t[i] = V[ti];
        return;
    }
    int tm = (ti + tj) >> 1;
    build(V, 2 * i, ti, tm);
    build(v, 2 * i + 1, tm + 1, tj);
    t[i] = t[2 * i] + t[2 * i + 1];
}

// call: build(V, 1, 0, V.size() - 1);