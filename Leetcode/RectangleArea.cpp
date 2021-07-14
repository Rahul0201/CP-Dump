class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int area_a = (ax2-ax1)*(ay2-ay1);
        int area_b = (bx2-bx1)*(by2-by1);
        
        int xoverlap = 0, yoverlap = 0;
        int xtot = (ax2-ax1)+(bx2-bx1);
        int ytot = (ay2-ay1)+(by2-by1);
        int xmax,xmin,ymax,ymin;
        
        if(ax2>bx2) xmax = ax2; else xmax = bx2;
        if(ax1<bx1) xmin = ax1; else xmin = bx1;
        if(ay2>by2) ymax = ay2; else ymax = by2;
        if(ay1<by1) ymin = ay1; else ymin = by1;
        
        
        if(xtot > (xmax-xmin)) xoverlap = (xtot - xmax + xmin);
        if(ytot > (ymax-ymin)) yoverlap = (ytot - ymax + ymin);
        
        return area_a+area_b-(xoverlap*yoverlap);
    }
};