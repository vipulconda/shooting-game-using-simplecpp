#include<simplecpp>

main_program{
//Write your code here
int i,x=160,h,k,y=0;
 int id=4456,a=0,h1=0;
int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0,j9=0,j10=0,j11=0,j12=0,j13=0,j14=0,j15=0,j16=0,j17=0,j18=0,j19=0,j20=0;
double m;
while(a<1){cout<<"\n                                HIT THE BUBBLE"<<endl<<"                                 START THE GAME"<<endl;
cout<<"                            ENTER YOUR ID :";
cin>>id;

if(id!=4456){cout<<"\n                          ID INVALID";break;}
else{cout<<"\n                        LOADING....."<<endl;wait(2);

initCanvas("sooting",1300,700);
Rectangle r1(80,302.5,140,30),r2(155,302.5,15,40),r3(80,273,80,40),r4(850,410,500,500);r1.setColor(COLOR(250,100,50));r1.setFill(true);
r4.setColor(COLOR(250,10,250));r4.setFill(true);
r2.setColor(COLOR(100,200,150));r2.setFill(true);r3.setColor(COLOR(25,200,50));r3.setFill(true);Text tank(95,405,"TANK");
Circle c3(95,350,40),c4(95,350,25),c1(60,350,40),c2(60,350,25);
c3.setColor(COLOR(255,10,50));c3.setFill(true);
c1.setColor(COLOR(255,10,50));c1.setFill(true);
c2.setColor(COLOR("blue"));c2.setFill(true);
c4.setColor(COLOR("blue"));c4.setFill(true);
Circle bullet(160,302,15);bullet.hide();
bullet.setColor(COLOR(300,250,0));bullet.setFill(true);
Circle t1(900,300,30),t2(900,400,30),t3(900,500,30),t4(900,600,30),t5(900,200,30),
t6(800,200,30),t7(800,300,30),t8(800,400,30),t9(800,500,30),t10(800,600,30),
t11(700,200,30),t12(700,300,30),t13(700,400,30),t14(700,500,30),t15(700,600,30),
t16(1000,200,30),t17(1000,300,30),t18(1000,400,30),t19(1000,500,30),t20(1000,600,30);
t1.setColor(COLOR(10,10,10));t1.setFill(true);
t2.setColor(COLOR(200,0,50));t2.setFill(true);t3.setColor(COLOR(50,250,43));t3.setFill(true);
t4.setColor(COLOR(0,0,255));t4.setFill(true);
t5.setColor(COLOR(100,10,50));t5.setFill(true);
t6.setColor(COLOR(10,10,10));t6.setFill(true);t7.setColor(COLOR(10,10,10));t7.setFill(true);
t8.setColor(COLOR(10,10,10));t8.setFill(true);t9.setColor(COLOR(10,10,10));t9.setFill(true);
t10.setColor(COLOR(100,10,10));t10.setFill(true);t11.setColor(COLOR(10,100,10));t11.setFill(true);
t12.setColor(COLOR(100,10,0));t12.setFill(true);t13.setColor(COLOR(10,10,100));t13.setFill(true);
t14.setColor(COLOR(110,210,10));t14.setFill(true);t15.setColor(COLOR(10,10,10));t15.setFill(true);
t16.setColor(COLOR(160,190,310));t16.setFill(true);t17.setColor(COLOR(10,10,310));t17.setFill(true);
t18.setColor(COLOR(10,100,180));t18.setFill(true);t19.setColor(COLOR(102,176,190));t19.setFill(true);
t20.setColor(COLOR(10,10,0));t20.setFill(true);
Text a1(600,100," SELECT TARGET and Hit the Ball");
repeat(30){
i=getClick();
h=i/65536;k=i%65536;
Rectangle target(h-5,k-5,50,50);target.setColor(COLOR(255,0,0));
m=(k-302.0)/(h-160.0);r1.forward(10);r2.forward(10);r3.forward(10);wait(0.2);
r1.forward(-10);r2.forward(-10);r3.forward(-10);
bullet.show();while(x<=h){
bullet.moveTo(x,302+m*(x-160.0));
x+=30;
}

target.hide();
bullet.hide();
repeat(1){
if((900-h)*(900-h)+(300-k)*(300-k)<=900){
if(j1<1){
t1.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t1.hide();s1.hide();y++;}
if(j1>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j1++;break;}
if((900-h)*(900-h)+(400-k)*(400-k)<=900){
if(j2<1){
t2.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t2.hide();s1.hide();y++;}
if(j2>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j2++;break;}

if((900-h)*(900-h)+(500-k)*(500-k)<=900){
if(j3<1){t3.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t3.hide();s1.hide();y++;}
if(j3>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j3++;break;}

if((900-h)*(900-h)+(600-k)*(600-k)<=900){
if(j4<1){t4.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t4.hide();s1.hide();y++;}
if(j4>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j4++;break;}

if((900-h)*(900-h)+(200-k)*(200-k)<=900){
if(j5<1){t5.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t5.hide();s1.hide();y++;}
if(j5>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j5++;break;}

if((800-h)*(800-h)+(200-k)*(200-k)<=900){
if(j6<1){
t6.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t6.hide();s1.hide();y++;}
if(j6>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j6++;break;}

if((800-h)*(800-h)+(300-k)*(300-k)<=900){
if(j7<1){t7.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t7.hide();s1.hide();y++;}
if(j7>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j7++;break;}

if((800-h)*(800-h)+(400-k)*(400-k)<=900){
if(j8<1){t8.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t8.hide();s1.hide();y++;}
if(j8>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j8++;break;}

if((800-h)*(800-h)+(500-k)*(500-k)<=900){
if(j9<1){t9.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t9.hide();s1.hide();y++;}
if(j9>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j9++;break;}

if((800-h)*(800-h)+(600-k)*(600-k)<=900){
if(j10<1){t10.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t10.hide();s1.hide();y++;}
if(j10>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j10++;break;}

if((700-h)*(700-h)+(200-k)*(200-k)<=900){
if(j11<1){t11.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t11.hide();s1.hide();y++;}
if(j11>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j11++;break;}

if((700-h)*(700-h)+(300-k)*(300-k)<=900){
if(j12<1){t12.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t12.hide();s1.hide();y++;}
if(j12>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j12++;break;}

if((700-h)*(700-h)+(400-k)*(400-k)<=900){
if(j13<1){t13.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t13.hide();s1.hide();y++;}
if(j13>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j13++;break;}

if((700-h)*(700-h)+(500-k)*(500-k)<=900){
if(j14<1){t14.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t14.hide();s1.hide();y++;}
if(j14>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j14++;break;}

if((700-h)*(700-h)+(600-k)*(600-k)<=900){
if(j15<1){t15.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t15.hide();s1.hide();y++;}
if(j15>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j15++;break;}

if((1000-h)*(1000-h)+(200-k)*(200-k)<=900){
if(j16<1){t16.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t16.hide();s1.hide();y++;}
if(j16>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j16++;break;}

if((1000-h)*(1000-h)+(300-k)*(300-k)<=900){
if(j17<1){t17.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t17.hide();s1.hide();y++;}
if(j17>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j17++;break;}

if((1000-h)*(1000-h)+(400-k)*(400-k)<=900){
if(j18<1){t18.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t18.hide();s1.hide();y++;}
if(j18>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}j18++;break;}

if((1000-h)*(1000-h)+(500-k)*(500-k)<=900){
if(j19<1){t19.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t19.hide();s1.hide();y++;}
if(j19>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}
j19++;break;}

if((1000-h)*(1000-h)+(600-k)*(600-k)<=900){
if(j20<1){t20.setScale(2);Text s1(h,k,"GOOD SHOT");wait(1);t20.hide();s1.hide();y++;}
if(j20>=1){Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}
j20++;break;}
else{Text s2(h,k,"YOU MISSED");wait(1);s2.hide();}
}
x=160;
bullet.moveTo(160,302);
h1++;
if(y>=20){break;}
}
a1.hide();
repeat(4){
Text a2(600,400,"GAME OVER");wait(0.2);a2.hide();wait(0.2);
}
cout<<"              YOUR SCORE : "<<y<<" hits out of "<<h1<<" shots"<<endl;
}
a++;
}
}
