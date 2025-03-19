//week05-5-heart
size(300,300);
stroke(255,0,0);
translate(150,150);
for(int i=-150;i<150;i++){
  for(int j=-150;j<150;j++){
    float x=j/100.0,y=-i/100.0;
    float d=x*x+y*y-1;
    if(d*d*d-x*x*y*y*y<0) point(j,i);
  }
}
