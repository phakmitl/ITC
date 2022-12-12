struct g{
  int state;
  int wait;
  int next[2];
};

typedef struct g m;

m fsm[2]= {
           {1, 1000, {0, 1}},
           {2, 1000, {0, 1}}
};

void setup(){
  
}

void loop(){

}
