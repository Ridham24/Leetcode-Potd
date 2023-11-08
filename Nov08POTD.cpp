bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int ty=max(abs(fx-sx),abs(fy-sy));
        if(ty==0&&t==1)
            return false;
        if(ty<=t)
            return true;
        return false;
    }