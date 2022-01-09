class Solution {
public:
    
        bool isRobotBounded(string instructions) {
        int x=0, y=0, angle=0;
        static struct {int dx; int dy;} delta[4] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        for (auto& c: instructions)
            switch (c) {
                case 'G': x+=delta[angle].dx; y+=delta[angle].dy; break;
                case 'L': angle=(angle-1)&3; break;
                case 'R': angle=(angle+1)&3; break;
            }
        return angle || (!x && !y);        
    
        
    }
};
