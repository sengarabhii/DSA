class Robot {
public:
    int x = 0;
    int y = 0;
    int width,height;
    string currmov = "East";
    Robot(int width, int height) {
        this->width = width;
        this->height = height;
    }
    
    void step(int num) {
        int k = 0;
        if(num%(2*width + 2*height - 4)==0 && x==0 &&y==0){//have to change direction
            if(currmov=="East") currmov = "South";
        }
        num = num%(2*width + 2*height - 4);
        while(k<num){
            if(currmov=="East"){
                if(x+1==width){
                    currmov = "North";
                }
                else{
                    k++;
                    x++;
                }
            }
            if(currmov=="West"){
                if(x-1<0){
                    currmov = "South";
                }
                else{
                    k++;
                    x--;
                }
            }
            if(currmov=="North"){
                if(y+1==height){
                    currmov = "West";
                }
                else{
                    k++;
                    y++;
                }
            }
            if(currmov=="South"){
                if(y-1<0){
                    currmov = "East";
                }
                else{
                    k++;
                    y--;
                }
            }
        }
    }
    
    vector<int> getPos() {
        return {x,y};
    }
    
    string getDir() {
        return currmov;
    }
};

/**
 * Your Robot object will be instantiated and called as such:






 
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */