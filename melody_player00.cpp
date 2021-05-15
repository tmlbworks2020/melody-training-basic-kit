//--- Melody Training Basic Kit ver1.1  ---
//
// C++ Builder10.3 Community Edition  (win32)
//
// 1.0 : 2020/05/05  (C)  tmlbworks
// 1.1 : 2021/06/05  (C)  tmlbworks
// e-mail: tmlb_wks00@yahoo.co.jp
//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>
#include <iostream>
#include "melody_player00.h"

#pragma hdrstop
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------

TForm2 *Form2;
TStrings *StringList;
TStrings *StringList2;
TStrings *StringList3;
TStrings *StringList4;
TStrings *StringList5;

//---------------------------------------------------------------------------
int loop_;
int bs;

UnicodeString cdf[30][4];
UnicodeString cds[30][4];

//ビープ音出力
void beepsound(UnicodeString s2, int t){

int p;

if (s2=="c-") {
	 p=523;
}else if(s2=="c#" || s2=="db")
 {
	 p=554;
}else if(s2=="d-")
 {
	 p=587;
}else if(s2=="d#" || s2=="eb")
 {
	 p=622;
}else if(s2=="e-")
 {
	 p=659;

}else if(s2=="f-")
 {
	 p=698;
}else if(s2=="f#" || s2=="gb")
 {
	 p=740;
 }else if(s2=="g-")
 {
	 p=784;
 }else if(s2=="g#" || s2=="ab")
 {
	 p=831;
 }else if(s2=="a-")
 {
	 p=880;
 }else if(s2=="a#" || s2=="bb")
 {
	 p=932;
 }else if(s2=="b-")
 {
	 p=988;
 }else if(s2=="C-")
 {
	 p=1047;
 }

   Beep(p,t);
}

/*
523.251	C5
554.365	C#5
587.330	D5
622.254	D#5
659.255	E5
698.456	F5
739.989	F#5
783.991	G5
830.609 G#5
880.000	A5
932.328	A#5
987.767	B5
1046.502 C6
*/


// 4 beat melody make (random)
UnicodeString upline(int n){

int j=0,k=0;
//UnicodeString s4="\0";
UnicodeString cd="\0";

// b
if(bs==1){

if(n==0){//C

cd += cdf[0][0];//"c-";
cd += cdf[0][1];//"e-";
cd += cdf[0][2];//"g-";
cd += cdf[0][3];//"bb";

}else if(n==1){//Cm

cd += cdf[1][0];// "c-";
cd += cdf[1][1];// "eb";
cd += cdf[1][2];// "g-";
cd += cdf[1][3];// "bb";

}else if(n==2){//Db

cd += cdf[2][0];//"db";
cd += cdf[2][1];//"f-";
cd += cdf[2][2];//"ab";
cd += cdf[2][3];//"b-";

} else if(n==3){//Dbm

cd += cdf[3][0];//"db";
cd += cdf[3][1];//"e-";
cd += cdf[3][2];//"ab";
cd += cdf[3][3];//"b-";

}else if(n==4){//D

cd += cdf[4][0];//"d-";
cd += cdf[4][1];//"gb";
cd += cdf[4][2];//"a-";
cd += cdf[4][3];//"c-";

}else if(n==5){//Dm

cd += cdf[5][0];//"d-";
cd += cdf[5][1];//"f-";
cd += cdf[5][2];//"a-";
cd += cdf[5][3];//"c-";

}else if(n==6){//Eb

cd += cdf[6][0];//"eb";
cd += cdf[6][1];//"g-";
cd += cdf[6][2];//"bb";
cd += cdf[6][3];//"db";

}else if(n==7){//Ebm

cd += cdf[7][0];//"eb";
cd += cdf[7][1];//"gb";
cd += cdf[7][2];//"bb";
cd += cdf[7][3];//"db";

}else if(n==8){//E

cd += cdf[8][0];//"e-";
cd += cdf[8][1];//"ab";
cd += cdf[8][2];//"b-";
cd += cdf[8][3];//"d-";

}else if(n==9){//Em

cd += cdf[9][0];//"e-";
cd += cdf[9][1];//"g-";
cd += cdf[9][2];//"b-";
cd += cdf[9][3];//"d-";

}else if(n==10){//F

cd += cdf[10][0];//"f-";
cd += cdf[10][1];//"a-";
cd += cdf[10][2];//"c-";
cd += cdf[10][3];//"eb";

}else if(n==11){//Fm

cd += cdf[11][0];//"f-";
cd += cdf[11][1];//"ab";
cd += cdf[11][2];//"c-";
cd += cdf[11][3];//"eb";

}else if(n==12){//Gb

cd += cdf[12][0];//"gb";
cd += cdf[12][1];//"bb";
cd += cdf[12][2];//"db";
cd += cdf[12][3];//"e-";

}else if(n==13){//Gbm

cd += cdf[13][0];//"gb";
cd += cdf[13][1];//"a-";
cd += cdf[13][2];//"db";
cd += cdf[13][3];//"e-";

}else if(n==14){//G

cd += cdf[14][0];//"g-";
cd += cdf[14][1];//"b-";
cd += cdf[14][2];//"d-";
cd += cdf[14][3];//"f-";

}else if(n==15){//Gm

cd += cdf[15][0];//"g-";
cd += cdf[15][1];//"bb";
cd += cdf[15][2];//"d-";
cd += cdf[15][3];//"f-";

} else if(n==16){//Ab

cd += cdf[16][0];//"ab";
cd += cdf[16][1];//"c-";
cd += cdf[16][2];//"eb";
cd += cdf[16][3];//"gb";

} else if(n==17){//Abm

cd += cdf[17][0];//"ab";
cd += cdf[17][1];//"b-";
cd += cdf[17][2];//"eb";
cd += cdf[17][3];//"gb";

} else if(n==18){//A

cd += cdf[18][0];//"a-";
cd += cdf[18][1];//"db";
cd += cdf[18][2];//"e-";
cd += cdf[18][3];//"g-";

} else if(n==19){//Am

cd += cdf[19][0];//"a-";
cd += cdf[19][1];//"c-";
cd += cdf[19][2];//"e-";
cd += cdf[19][3];//"g-";

}else if(n==20){//Bb

cd += cdf[20][0];//"bb";
cd += cdf[20][1];//"d-";
cd += cdf[20][2];//"f-";
cd += cdf[20][3];//"ab";

}else if(n==21){//Bbm

cd += cdf[21][0];//"bb";
cd += cdf[21][1];//"db";
cd += cdf[21][2];//"f-";
cd += cdf[21][3];//"ab";

}else if(n==22){//B

cd += cdf[22][0];//"b-";
cd += cdf[22][1];//"eb";
cd += cdf[22][2];//"gb";
cd += cdf[22][3];//"a-";

}else if(n==23){//Bm

cd += cdf[23][0];//"b-";
cd += cdf[23][1];//"d-";
cd += cdf[23][2];//"gb";
cd += cdf[23][3];//"a-";

}


// #

}else if (bs==2) {


if(n==0){//C
cd += cds[0][0];//"c-";
cd += cds[0][1];//"e-";
cd += cds[0][2];//"g-";
cd += cds[0][3];//"a#";

}else if(n==1){//Cm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[1][0];//"c-";
break;
case 1:
cd += cds[1][1];//"d#";
break;
case 2:
cd += cds[1][2];//"g-";
break;
case 3:
cd += cds[1][3];//"a#";
break;

}
}

} else if(n==2){//C#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[2][0];//"c#";
break;
case 1:
cd += cds[2][1];//"f-";
break;
case 2:
cd += cds[2][2];//"g#";
break;
case 3:
cd += cds[2][3];//"b-";
break;

}
}

} else if(n==3){//C#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[3][0];//"c#";
break;
case 1:
cd += cds[3][1];//"e-";
break;
case 2:
cd += cds[3][2];//"g#";
break;
case 3:
cd += cds[3][3];//"b-";
break;

}
}


}else if(n==4){//D

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[4][0];//"d-";
break;
case 1:
cd += cds[4][1];//"f#";
break;
case 2:
cd += cds[4][2];//"a-";
break;
case 3:
cd += cds[4][3];//"c-";
break;

}
}


}else if(n==5){//Dm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[5][0];//"d-";
break;
case 1:
cd += cds[5][1];//"f-";
break;
case 2:
cd += cds[5][2];//"a-";
break;
case 3:
cd += cds[5][3];//"c-";
break;

}
}


}else if(n==6){//D#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[6][0];//"d#";
break;
case 1:
cd += cds[6][1];//"g-";
break;
case 2:
cd += cds[6][2];//"a#";
break;
case 3:
cd += cds[6][3];//"c#";
break;

}
}


}else if(n==7){//D#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[7][0];//"d#";
break;
case 1:
cd += cds[7][1];//"f#";
break;
case 2:
cd += cds[7][2];//"a#";
break;
case 3:
cd += cds[7][3];//"c#";
break;

}
}



}else if(n==8){//E

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[8][0];//"e-";
break;
case 1:
cd += cds[8][1];//"g#";
break;
case 2:
cd += cds[8][2];//"b-";
break;
case 3:
cd += cds[8][3];//"d-";
break;

}
}


}else if(n==9){//Em

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[9][0];//"e-";
break;
case 1:
cd += cds[9][1];//"g-";
break;
case 2:
cd += cds[9][2];//"b-";
break;
case 3:
cd += cds[9][3];//"d-";
break;

}
}


}else if(n==10){//F

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[10][0];//"f-";
break;
case 1:
cd += cds[10][1];//"a-";
break;
case 2:
cd += cds[10][2];//"c-";
break;
case 3:
cd += cds[10][3];//"d#";
break;

}
}


}else if(n==11){//Fm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[11][0];//"f-";
break;
case 1:
cd += cds[11][1];//"g#";
break;
case 2:
cd += cds[11][2];//"c-";
break;
case 3:
cd += cds[11][3];//"d#";
break;

}
}


}else if(n==12){//F#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[12][0];//"f#";
break;
case 1:
cd += cds[12][1];//"a#";
break;
case 2:
cd += cds[12][2];//"c#";
break;
case 3:
cd += cds[12][3];//"e-";
break;

}
}


}else if(n==13){//F#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[13][0];//"f#";
break;
case 1:
cd += cds[13][1];//"a-";
break;
case 2:
cd += cds[13][2];//"c#";
break;
case 3:
cd += cds[13][3];//"e-";
break;

}
}



}else if(n==14){//G

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[14][0];//"g-";
break;
case 1:
cd += cds[14][1];//"b-";
break;
case 2:
cd += cds[14][2];//"d-";
break;
case 3:
cd += cds[14][3];//"f-";
break;

}
}


}else if(n==15){//Gm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[15][0];//"g-";
break;
case 1:
cd += cds[15][1];//"a#";
break;
case 2:
cd += cds[15][2];//"d-";
break;
case 3:
cd += cds[15][3];//"f-";
break;

}
}


} else if(n==16){//G#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[16][0];//"g#";
break;
case 1:
cd += cds[16][1];//"c-";
break;
case 2:
cd += cds[16][2];//"d#";
break;
case 3:
cd += cds[16][3];//"f#";
break;

}
}


} else if(n==17){//G#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[17][0];//"g#";
break;
case 1:
cd += cds[17][1];//"b-";
break;
case 2:
cd += cds[17][2];//"d#";
break;
case 3:
cd += cds[17][3];//"f#";
break;

}
}



} else if(n==18){//A

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[18][0];//"a-";
break;
case 1:
cd += cds[18][1];//"c#";
break;
case 2:
cd += cds[18][2];//"e-";
break;
case 3:
cd += cds[18][3];//"g-";
break;

}
}



} else if(n==19){//Am

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[19][0];//"a-";
break;
case 1:
cd += cds[19][1];//"c-";
break;
case 2:
cd += cds[19][2];//"e-";
break;
case 3:
cd += cds[19][3];//"g-";
break;

}
}



}else if(n==20){//A#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[20][0];//"a#";
break;
case 1:
cd += cds[20][1];//"d-";
break;
case 2:
cd += cds[20][2];//"f-";
break;
case 3:
cd += cds[20][3];//"g#";
break;

}
}


}else if(n==21){//A#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[21][0];//"a#";
break;
case 1:
cd += cds[21][1];//"c#";
break;
case 2:
cd += cds[21][2];//"f-";
break;
case 3:
cd += cds[21][3];//"g#";
break;

}
}



}else if(n==22){//B

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[22][0];//"b-";
break;
case 1:
cd += cds[22][1];//"d#";
break;
case 2:
cd += cds[22][2];//"f#";
break;
case 3:
cd += cds[22][3];//"a-";
break;

}
}

}else if(n==23){//Bm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[23][0];//"b-";
break;
case 1:
cd += cds[23][1];//"d-";
break;
case 2:
cd += cds[23][2];//"f#";
break;
case 3:
cd += cds[23][3];//"a-";
break;

}
}

}


 }


return cd;



}






// 4 beat melody make (random)
UnicodeString rndline(int n){

int j=0,k=0;
UnicodeString s4="\0";
UnicodeString cd="\0";

// b
if(bs==1){


if(n==0){//C

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[0][0];//"c-";

break;
case 1:
cd += cdf[0][1];//"e-";
break;
case 2:
cd += cdf[0][2];//"g-";
break;
case 3:
cd += cdf[0][3];//"bb";
break;

}
}

}else if(n==1){//Cm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[1][0];// "c-";
break;
case 1:
cd += cdf[1][1];// "eb";
break;
case 2:
cd += cdf[1][2];// "g-";
break;
case 3:
cd += cdf[1][3];// "bb";
break;

}
}

} else if(n==2){//Db

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[2][0];//"db";
break;
case 1:
cd += cdf[2][1];//"f-";
break;
case 2:
cd += cdf[2][2];//"ab";
break;
case 3:
cd += cdf[2][3];//"b-";
break;

}
}


} else if(n==3){//Dbm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[3][0];//"db";
break;
case 1:
cd += cdf[3][1];//"e-";
break;
case 2:
cd += cdf[3][2];//"ab";
break;
case 3:
cd += cdf[3][3];//"b-";
break;

}
}


}else if(n==4){//D

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[4][0];//"d-";
break;
case 1:
cd += cdf[4][1];//"gb";
break;
case 2:
cd += cdf[4][2];//"a-";
break;
case 3:
cd += cdf[4][3];//"c-";
break;

}
}


}else if(n==5){//Dm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[5][0];//"d-";
break;
case 1:
cd += cdf[5][1];//"f-";
break;
case 2:
cd += cdf[5][2];//"a-";
break;
case 3:
cd += cdf[5][3];//"c-";
break;

}
}


}else if(n==6){//Eb

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[6][0];//"eb";
break;
case 1:
cd += cdf[6][1];//"g-";
break;
case 2:
cd += cdf[6][2];//"bb";
break;
case 3:
cd += cdf[6][3];//"db";
break;

}
}


}else if(n==7){//Ebm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[7][0];//"eb";
break;
case 1:
cd += cdf[7][1];//"gb";
break;
case 2:
cd += cdf[7][2];//"bb";
break;
case 3:
cd += cdf[7][3];//"db";
break;

}
}



}else if(n==8){//E

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[8][0];//"e-";
break;
case 1:
cd += cdf[8][1];//"ab";
break;
case 2:
cd += cdf[8][2];//"b-";
break;
case 3:
cd += cdf[8][3];//"d-";
break;

}
}


}else if(n==9){//Em

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[9][0];//"e-";
break;
case 1:
cd += cdf[9][1];//"g-";
break;
case 2:
cd += cdf[9][2];//"b-";
break;
case 3:
cd += cdf[9][3];//"d-";
break;

}
}


}else if(n==10){//F

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[10][0];//"f-";
break;
case 1:
cd += cdf[10][1];//"a-";
break;
case 2:
cd += cdf[10][2];//"c-";
break;
case 3:
cd += cdf[10][3];//"eb";
break;

}
}


}else if(n==11){//Fm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[11][0];//"f-";
break;
case 1:
cd += cdf[11][1];//"ab";
break;
case 2:
cd += cdf[11][2];//"c-";
break;
case 3:
cd += cdf[11][3];//"eb";
break;

}
}


}else if(n==12){//Gb

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[12][0];//"gb";
break;
case 1:
cd += cdf[12][1];//"bb";
break;
case 2:
cd += cdf[12][2];//"db";
break;
case 3:
cd += cdf[12][3];//"e-";
break;

}
}


}else if(n==13){//Gbm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[13][0];//"gb";
break;
case 1:
cd += cdf[13][1];//"a-";
break;
case 2:
cd += cdf[13][2];//"db";
break;
case 3:
cd += cdf[13][3];//"e-";
break;

}
}



}else if(n==14){//G

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[14][0];//"g-";
break;
case 1:
cd += cdf[14][1];//"b-";
break;
case 2:
cd += cdf[14][2];//"d-";
break;
case 3:
cd += cdf[14][3];//"f-";
break;

}
}


}else if(n==15){//Gm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[15][0];//"g-";
break;
case 1:
cd += cdf[15][1];//"bb";
break;
case 2:
cd += cdf[15][2];//"d-";
break;
case 3:
cd += cdf[15][3];//"f-";
break;

}
}


} else if(n==16){//Ab

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[16][0];//"ab";
break;
case 1:
cd += cdf[16][1];//"c-";
break;
case 2:
cd += cdf[16][2];//"eb";
break;
case 3:
cd += cdf[16][3];//"gb";
break;

}
}


} else if(n==17){//Abm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[17][0];//"ab";
break;
case 1:
cd += cdf[17][1];//"b-";
break;
case 2:
cd += cdf[17][2];//"eb";
break;
case 3:
cd += cdf[17][3];//"gb";
break;

}
}



} else if(n==18){//A

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[18][0];//"a-";
break;
case 1:
cd += cdf[18][1];//"db";
break;
case 2:
cd += cdf[18][2];//"e-";
break;
case 3:
cd += cdf[18][3];//"g-";
break;

}
}



} else if(n==19){//Am

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[19][0];//"a-";
break;
case 1:
cd += cdf[19][1];//"c-";
break;
case 2:
cd += cdf[19][2];//"e-";
break;
case 3:
cd += cdf[19][3];//"g-";
break;

}
}



}else if(n==20){//Bb

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[20][0];//"bb";
break;
case 1:
cd += cdf[20][1];//"d-";
break;
case 2:
cd += cdf[20][2];//"f-";
break;
case 3:
cd += cdf[20][3];//"ab";
break;

}
}


}else if(n==21){//Bbm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[21][0];//"bb";
break;
case 1:
cd += cdf[21][1];//"db";
break;
case 2:
cd += cdf[21][2];//"f-";
break;
case 3:
cd += cdf[21][3];//"ab";
break;

}
}



}else if(n==22){//B

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[22][0];//"b-";
break;
case 1:
cd += cdf[22][1];//"eb";
break;
case 2:
cd += cdf[22][2];//"gb";
break;
case 3:
cd += cdf[22][3];//"a-";
break;

}
}

}else if(n==23){//Bm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cdf[23][0];//"b-";
break;
case 1:
cd += cdf[23][1];//"d-";
break;
case 2:
cd += cdf[23][2];//"gb";
break;
case 3:
cd += cdf[23][3];//"a-";
break;

}
}

}


// #
}else if (bs==2) {


if(n==0){//C

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[0][0];//"c-";
break;
case 1:
cd += cds[0][1];//"e-";
break;
case 2:
cd += cds[0][2];//"g-";
break;
case 3:
cd += cds[0][3];//"a#";
break;

}
}

}else if(n==1){//Cm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[1][0];//"c-";
break;
case 1:
cd += cds[1][1];//"d#";
break;
case 2:
cd += cds[1][2];//"g-";
break;
case 3:
cd += cds[1][3];//"a#";
break;

}
}

} else if(n==2){//C#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[2][0];//"c#";
break;
case 1:
cd += cds[2][1];//"f-";
break;
case 2:
cd += cds[2][2];//"g#";
break;
case 3:
cd += cds[2][3];//"b-";
break;

}
}

} else if(n==3){//C#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[3][0];//"c#";
break;
case 1:
cd += cds[3][1];//"e-";
break;
case 2:
cd += cds[3][2];//"g#";
break;
case 3:
cd += cds[3][3];//"b-";
break;

}
}


}else if(n==4){//D

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[4][0];//"d-";
break;
case 1:
cd += cds[4][1];//"f#";
break;
case 2:
cd += cds[4][2];//"a-";
break;
case 3:
cd += cds[4][3];//"c-";
break;

}
}


}else if(n==5){//Dm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[5][0];//"d-";
break;
case 1:
cd += cds[5][1];//"f-";
break;
case 2:
cd += cds[5][2];//"a-";
break;
case 3:
cd += cds[5][3];//"c-";
break;

}
}


}else if(n==6){//D#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[6][0];//"d#";
break;
case 1:
cd += cds[6][1];//"g-";
break;
case 2:
cd += cds[6][2];//"a#";
break;
case 3:
cd += cds[6][3];//"c#";
break;

}
}


}else if(n==7){//D#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[7][0];//"d#";
break;
case 1:
cd += cds[7][1];//"f#";
break;
case 2:
cd += cds[7][2];//"a#";
break;
case 3:
cd += cds[7][3];//"c#";
break;

}
}



}else if(n==8){//E

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[8][0];//"e-";
break;
case 1:
cd += cds[8][1];//"g#";
break;
case 2:
cd += cds[8][2];//"b-";
break;
case 3:
cd += cds[8][3];//"d-";
break;

}
}


}else if(n==9){//Em

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[9][0];//"e-";
break;
case 1:
cd += cds[9][1];//"g-";
break;
case 2:
cd += cds[9][2];//"b-";
break;
case 3:
cd += cds[9][3];//"d-";
break;

}
}


}else if(n==10){//F

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[10][0];//"f-";
break;
case 1:
cd += cds[10][1];//"a-";
break;
case 2:
cd += cds[10][2];//"c-";
break;
case 3:
cd += cds[10][3];//"d#";
break;

}
}


}else if(n==11){//Fm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[11][0];//"f-";
break;
case 1:
cd += cds[11][1];//"g#";
break;
case 2:
cd += cds[11][2];//"c-";
break;
case 3:
cd += cds[11][3];//"d#";
break;

}
}


}else if(n==12){//F#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[12][0];//"f#";
break;
case 1:
cd += cds[12][1];//"a#";
break;
case 2:
cd += cds[12][2];//"c#";
break;
case 3:
cd += cds[12][3];//"e-";
break;

}
}


}else if(n==13){//F#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[13][0];//"f#";
break;
case 1:
cd += cds[13][1];//"a-";
break;
case 2:
cd += cds[13][2];//"c#";
break;
case 3:
cd += cds[13][3];//"e-";
break;

}
}



}else if(n==14){//G

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[14][0];//"g-";
break;
case 1:
cd += cds[14][1];//"b-";
break;
case 2:
cd += cds[14][2];//"d-";
break;
case 3:
cd += cds[14][3];//"f-";
break;

}
}


}else if(n==15){//Gm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[15][0];//"g-";
break;
case 1:
cd += cds[15][1];//"a#";
break;
case 2:
cd += cds[15][2];//"d-";
break;
case 3:
cd += cds[15][3];//"f-";
break;

}
}


} else if(n==16){//G#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[16][0];//"g#";
break;
case 1:
cd += cds[16][1];//"c-";
break;
case 2:
cd += cds[16][2];//"d#";
break;
case 3:
cd += cds[16][3];//"f#";
break;

}
}


} else if(n==17){//G#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[17][0];//"g#";
break;
case 1:
cd += cds[17][1];//"b-";
break;
case 2:
cd += cds[17][2];//"d#";
break;
case 3:
cd += cds[17][3];//"f#";
break;

}
}



} else if(n==18){//A

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[18][0];//"a-";
break;
case 1:
cd += cds[18][1];//"c#";
break;
case 2:
cd += cds[18][2];//"e-";
break;
case 3:
cd += cds[18][3];//"g-";
break;

}
}



} else if(n==19){//Am

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[19][0];//"a-";
break;
case 1:
cd += cds[19][1];//"c-";
break;
case 2:
cd += cds[19][2];//"e-";
break;
case 3:
cd += cds[19][3];//"g-";
break;

}
}



}else if(n==20){//A#

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[20][0];//"a#";
break;
case 1:
cd += cds[20][1];//"d-";
break;
case 2:
cd += cds[20][2];//"f-";
break;
case 3:
cd += cds[20][3];//"g#";
break;

}
}


}else if(n==21){//A#m

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[21][0];//"a#";
break;
case 1:
cd += cds[21][1];//"c#";
break;
case 2:
cd += cds[21][2];//"f-";
break;
case 3:
cd += cds[21][3];//"g#";
break;

}
}



}else if(n==22){//B

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[22][0];//"b-";
break;
case 1:
cd += cds[22][1];//"d#";
break;
case 2:
cd += cds[22][2];//"f#";
break;
case 3:
cd += cds[22][3];//"a-";
break;

}
}

}else if(n==23){//Bm

while (j<4){
j++;
k=random(4);

switch(k){

case 0:
cd += cds[23][0];//"b-";
break;
case 1:
cd += cds[23][1];//"d-";
break;
case 2:
cd += cds[23][2];//"f#";
break;
case 3:
cd += cds[23][3];//"a-";
break;

}
}

}


 }


return cd;

}


//Init 処理
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
//default
  t=60;
  loop=1;
  bs=1;

StringList = new TStringList();
try {
  StringList->Add( "C" );
  StringList->Add( "Cm" );
  StringList->Add( "Db C#" );
  StringList->Add( "Dbm C#m" );
  StringList->Add( "D" );
  StringList->Add( "Dm" );
  StringList->Add( "Eb D#" );
  StringList->Add( "Ebm D#m" );
  StringList->Add( "E" );
  StringList->Add( "Em" );
  StringList->Add( "F" );
  StringList->Add( "Fm" );
  StringList->Add( "Gb F#" );
  StringList->Add( "Gbm F#m" );
  StringList->Add( "G" );
  StringList->Add( "Gm" );
  StringList->Add( "Ab G#" );
  StringList->Add( "Abm G#m" );
  StringList->Add( "A" );
  StringList->Add( "Am" );
  StringList->Add( "Bb A#" );
  StringList->Add( "Bbm A#m" );
  StringList->Add( "B" );
  StringList->Add( "Bm" );

  ComboBox1->Items->Assign( StringList );
  ComboBox1->ItemIndex = 0;
  ComboBox2->Items->Assign( StringList );
  ComboBox2->ItemIndex = 0;
  ComboBox3->Items->Assign( StringList );
  ComboBox3->ItemIndex = 0;
  ComboBox4->Items->Assign( StringList );
  ComboBox4->ItemIndex = 0;
  ComboBox5->Items->Assign( StringList );
  ComboBox5->ItemIndex = 0;
  ComboBox6->Items->Assign( StringList );
  ComboBox6->ItemIndex = 0;
  ComboBox7->Items->Assign( StringList );
  ComboBox7->ItemIndex = 0;
  ComboBox8->Items->Assign( StringList );
  ComboBox8->ItemIndex = 0;
  ComboBox9->Items->Assign( StringList );
  ComboBox9->ItemIndex = 0;
  ComboBox10->Items->Assign( StringList );
  ComboBox10->ItemIndex = 0;
  ComboBox11->Items->Assign( StringList );
  ComboBox11->ItemIndex = 0;
  ComboBox12->Items->Assign( StringList );
  ComboBox12->ItemIndex = 0;
  ComboBox13->Items->Assign( StringList );
  ComboBox13->ItemIndex = 0;
  ComboBox14->Items->Assign( StringList );
  ComboBox14->ItemIndex = 0;
  ComboBox15->Items->Assign( StringList );
  ComboBox15->ItemIndex = 0;
  ComboBox16->Items->Assign( StringList );
  ComboBox16->ItemIndex = 0;


} __finally {
  StringList->Free();
}

StringList2 = new TStringList();
try {

StringList2->Add("60");
StringList2->Add("80");
StringList2->Add("100");
StringList2->Add("120");

ComboBox21->Items->Assign( StringList2 );
ComboBox21->ItemIndex = 0;
} __finally {
  StringList2->Free();
}


StringList3 = new TStringList();
try {
  StringList3->Add("1");
  StringList3->Add("2");
  StringList3->Add("3");
  StringList3->Add("5");
  StringList3->Add("10");

  ComboBox20->Items->Assign( StringList3 );
  ComboBox20->ItemIndex = 0;

  } __finally {
  StringList->Free();
  }

  StringList5 = new TStringList();
try {
  StringList5->Add("b");
  StringList5->Add("#");

  ComboBox22->Items->Assign( StringList5 );
  ComboBox22->ItemIndex = 0;

  } __finally {
  StringList5->Free();
  }


	StringList4 = new TStringList();
try {
  StringList4->Add("up");
  //StringList4->Add("down");
  //StringList4->Add("up-down");
  StringList4->Add("random");

  ComboBox17->Items->Assign( StringList4 );
  ComboBox17->ItemIndex = 0;

  } __finally {
  StringList4->Free();
  }


  // chord notes

  //C
	cdf[0][0]="c-";
	cdf[0][1]="e-";
	cdf[0][2]="g-";
	cdf[0][3]="bb";
  //Cm
	cdf[1][0]="c-";
	cdf[1][1]="eb";
	cdf[1][2]="g-";
	cdf[1][3]="bb";
  //Db
	cdf[2][0]="db";
	cdf[2][1]="f-";
	cdf[2][2]="ab";
	cdf[2][3]="b-";
  //Dbm
	cdf[3][0]="db";
	cdf[3][1]="e-";
	cdf[3][2]="ab";
	cdf[3][3]="b-";
  //D
	cdf[4][0]="d-";
	cdf[4][1]="gb";
	cdf[4][2]="a-";
	cdf[4][3]="c-";
  //Dm
	cdf[5][0]="d-";
	cdf[5][1]="f-";
	cdf[5][2]="a-";
	cdf[5][3]="c-";
  //Eb
	cdf[6][0]="eb";
	cdf[6][1]="g-";
	cdf[6][2]="bb";
	cdf[6][3]="db";
  //Ebm
	cdf[7][0]="eb";
	cdf[7][1]="gb";
	cdf[7][2]="bb";
	cdf[7][3]="db";
  //E
	cdf[8][0]="e-";
	cdf[8][1]="ab";
	cdf[8][2]="b-";
	cdf[8][3]="d-";
  //Em
	cdf[9][0]="e-";
	cdf[9][1]="g-";
	cdf[9][2]="b-";
	cdf[9][3]="d-";
  //F
	cdf[10][0]="f-";
	cdf[10][1]="a-";
	cdf[10][2]="c-";
	cdf[10][3]="eb";
  //Fm
	cdf[11][0]="f-";
	cdf[11][1]="ab";
	cdf[11][2]="c-";
	cdf[11][3]="eb";
  //Gb
	cdf[12][0]="gb";
	cdf[12][1]="bb";
	cdf[12][2]="db";
	cdf[12][3]="e-";
  //Gbm
	cdf[13][0]="gb";
	cdf[13][1]="a-";
	cdf[13][2]="db";
	cdf[13][3]="e-";
  //G
	cdf[14][0]="g-";
	cdf[14][1]="b-";
	cdf[14][2]="d-";
	cdf[14][3]="f-";
  //Gm
	cdf[15][0]="g-";
	cdf[15][1]="bb";
	cdf[15][2]="d-";
	cdf[15][3]="f-";
  //Ab
	cdf[16][0]="ab";
	cdf[16][1]="c-";
	cdf[16][2]="eb";
	cdf[16][3]="gb";
  //Abm
	cdf[17][0]="ab";
	cdf[17][1]="b-";
	cdf[17][2]="eb";
	cdf[17][3]="gb";
  //A
	cdf[18][0]="a-";
	cdf[18][1]="db";
	cdf[18][2]="e-";
	cdf[18][3]="g-";
  //Am
	cdf[19][0]="a-";
	cdf[19][1]="c-";
	cdf[19][2]="e-";
	cdf[19][3]="g-";
  //Bb
	cdf[20][0]="bb";
	cdf[20][1]="d-";
	cdf[20][2]="f-";
	cdf[20][3]="ab";
  //Bbm
	cdf[21][0]="bb";
	cdf[21][1]="db";
	cdf[21][2]="f-";
	cdf[21][3]="ab";
  //B
	cdf[22][0]="b-";
	cdf[22][1]="eb";
	cdf[22][2]="gb";
	cdf[22][3]="a-";
  //Bm
	cdf[23][0]="b-";
	cdf[23][1]="d-";
	cdf[23][2]="gb";
	cdf[23][3]="a-";


// #

	//C
	cds[0][0]="c-";
	cds[0][1]="e-";
	cds[0][2]="g-";
	cds[0][3]="a#";
  //Cm
	cds[1][0]="c-";
	cds[1][1]="d#";
	cds[1][2]="g-";
	cds[1][3]="a#";
  //C#
	cds[2][0]="c#";
	cds[2][1]="f-";
	cds[2][2]="g#";
	cds[2][3]="b-";
  //C#m
	cds[3][0]="c#";
	cds[3][1]="e-";
	cds[3][2]="g#";
	cds[3][3]="b-";
  //D
	cds[4][0]="d-";
	cds[4][1]="f#";
	cds[4][2]="a-";
	cds[4][3]="c-";
  //Dm
	cds[5][0]="d-";
	cds[5][1]="f-";
	cds[5][2]="a-";
	cds[5][3]="c-";
  //D#
	cds[6][0]="d#";
	cds[6][1]="g-";
	cds[6][2]="a#";
	cds[6][3]="c#";
  //D#m
	cds[7][0]="d#";
	cds[7][1]="f#";
	cds[7][2]="a#";
	cds[7][3]="c#";
  //E
	cds[8][0]="e-";
	cds[8][1]="g#";
	cds[8][2]="b-";
	cds[8][3]="d-";
  //Em
	cds[9][0]="e-";
	cds[9][1]="g-";
	cds[9][2]="b-";
	cds[9][3]="d-";
  //F
	cds[10][0]="f-";
	cds[10][1]="a-";
	cds[10][2]="c-";
	cds[10][3]="d#";
  //Fm
	cds[11][0]="f-";
	cds[11][1]="g#";
	cds[11][2]="c-";
	cds[11][3]="d#";
  //F#
	cds[12][0]="f#";
	cds[12][1]="a#";
	cds[12][2]="c#";
	cds[12][3]="e-";
  //F#m
	cds[13][0]="f#";
	cds[13][1]="a-";
	cds[13][2]="c#";
	cds[13][3]="e-";
  //G
	cds[14][0]="g-";
	cds[14][1]="b-";
	cds[14][2]="d-";
	cds[14][3]="f-";
  //Gm
	cds[15][0]="g-";
	cds[15][1]="a#";
	cds[15][2]="d-";
	cds[15][3]="f-";
  //G#
	cds[16][0]="g#";
	cds[16][1]="c-";
	cds[16][2]="d#";
	cds[16][3]="f#";
  //G#m
	cds[17][0]="g#";
	cds[17][1]="b-";
	cds[17][2]="d#";
	cds[17][3]="f#";
  //A
	cds[18][0]="a-";
	cds[18][1]="c#";
	cds[18][2]="e-";
	cds[18][3]="g-";
  //Am
	cds[19][0]="a-";
	cds[19][1]="c-";
	cds[19][2]="e-";
	cds[19][3]="g-";
  //A#
	cds[20][0]="a#";
	cds[20][1]="d-";
	cds[20][2]="f-";
	cds[20][3]="g#";
  //A#m
	cds[21][0]="a#";
	cds[21][1]="c#";
	cds[21][2]="f-";
	cds[21][3]="g#";
  //B
	cds[22][0]="b-";
	cds[22][1]="d#";
	cds[22][2]="f#";
	cds[22][3]="a-";
  //Bm
	cds[23][0]="b-";
	cds[23][1]="d-";
	cds[23][2]="f#";
	cds[23][3]="a-";

  // chord notes end

}
// melody make button -------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 int j=0;

  if(ComboBox17->ItemIndex == 0){

 if(CheckBox1->State==cbChecked){
 Edit1->Text = upline(ComboBox1->ItemIndex);
 }
 if(CheckBox2->State==cbChecked){
 Edit2->Text = upline(ComboBox2->ItemIndex);
 }
 if(CheckBox3->State==cbChecked){
 Edit3->Text = upline(ComboBox3->ItemIndex);
 }
 if(CheckBox4->State==cbChecked){
 Edit4->Text = upline(ComboBox4->ItemIndex);
 }
 if(CheckBox5->State==cbChecked){
 Edit5->Text = upline(ComboBox5->ItemIndex);
 }
 if(CheckBox6->State==cbChecked){
 Edit6->Text = upline(ComboBox6->ItemIndex);
 }
 if(CheckBox7->State==cbChecked){
 Edit7->Text = upline(ComboBox7->ItemIndex);
 }
 if(CheckBox8->State==cbChecked){
 Edit8->Text = upline(ComboBox8->ItemIndex);
 }
 if(CheckBox9->State==cbChecked){
 Edit9->Text = upline(ComboBox9->ItemIndex);
 }
 if(CheckBox10->State==cbChecked){
 Edit10->Text = upline(ComboBox10->ItemIndex);
 }
 if(CheckBox11->State==cbChecked){
 Edit11->Text = upline(ComboBox11->ItemIndex);
 }
 if(CheckBox12->State==cbChecked){
 Edit12->Text = upline(ComboBox12->ItemIndex);
 }
 if(CheckBox13->State==cbChecked){
 Edit13->Text = upline(ComboBox13->ItemIndex);
 }
 if(CheckBox14->State==cbChecked){
 Edit14->Text = upline(ComboBox14->ItemIndex);
 }
 if(CheckBox15->State==cbChecked){
 Edit15->Text = upline(ComboBox15->ItemIndex);
 }
 if(CheckBox16->State==cbChecked){
 Edit16->Text = upline(ComboBox16->ItemIndex);
 }
 }


 else if(ComboBox17->ItemIndex == 1){

 if(CheckBox1->State==cbChecked){
 Edit1->Text = rndline(ComboBox1->ItemIndex);
 }
 if(CheckBox2->State==cbChecked){
 Edit2->Text = rndline(ComboBox2->ItemIndex);
 }
 if(CheckBox3->State==cbChecked){
 Edit3->Text = rndline(ComboBox3->ItemIndex);
 }
 if(CheckBox4->State==cbChecked){
 Edit4->Text = rndline(ComboBox4->ItemIndex);
 }
 if(CheckBox5->State==cbChecked){
 Edit5->Text = rndline(ComboBox5->ItemIndex);
 }
 if(CheckBox6->State==cbChecked){
 Edit6->Text = rndline(ComboBox6->ItemIndex);
 }
 if(CheckBox7->State==cbChecked){
 Edit7->Text = rndline(ComboBox7->ItemIndex);
 }
 if(CheckBox8->State==cbChecked){
 Edit8->Text = rndline(ComboBox8->ItemIndex);
 }
 if(CheckBox9->State==cbChecked){
 Edit9->Text = rndline(ComboBox9->ItemIndex);
 }
 if(CheckBox10->State==cbChecked){
 Edit10->Text = rndline(ComboBox10->ItemIndex);
 }
 if(CheckBox11->State==cbChecked){
 Edit11->Text = rndline(ComboBox11->ItemIndex);
 }
 if(CheckBox12->State==cbChecked){
 Edit12->Text = rndline(ComboBox12->ItemIndex);
 }
 if(CheckBox13->State==cbChecked){
 Edit13->Text = rndline(ComboBox13->ItemIndex);
 }
 if(CheckBox14->State==cbChecked){
 Edit14->Text = rndline(ComboBox14->ItemIndex);
 }
 if(CheckBox15->State==cbChecked){
 Edit15->Text = rndline(ComboBox15->ItemIndex);
 }
 if(CheckBox16->State==cbChecked){
 Edit16->Text = rndline(ComboBox16->ItemIndex);
 }
 }

}



// music play button ---------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
 int p=1;
 int q=0;
 loop_=loop;
 //melody 読み込み
 String s1,s2;
 s1=Edit1->Text+Edit2->Text+Edit3->Text+Edit4->Text+Edit5->Text+Edit6->Text+Edit7->Text+Edit8->Text+Edit9->Text+Edit10->Text+Edit11->Text+Edit12->Text+Edit13->Text+Edit14->Text+Edit15->Text+Edit16->Text;

 //tempo
 switch(ComboBox21->ItemIndex)
 {
   case 0:
	 t=1000;
	 break;
   case 1:
	 t=833;
	 break;
   case 2:
	 t=667;
	 break;
   case 3:
	 t=500;
	 break;
   default:
	 t=1000;
	 break;
 }

//intro
for(q=0;q<4;q++){
Beep(349,t);
}

//該当 beep 連続出力
while (loop>0){

while(p < s1.Length()){

s2=s1.SubString(p,2);
beepsound(s2,t);
p+=2;
	}
	  loop--; p=1;
}

loop=loop_;

}

// data file open button -----------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
UnicodeString FName,buf;
TStringList *LoadText;

FName=Edit20->Text;

LoadText = new TStringList;        // オブジェクトの生成

 try {
  LoadText->LoadFromFile( FName );   // TStringListにファイルを全て読み込む

  buf=LoadText->Text;
  // ShowMessage( buf );
	int p=1;
	Edit1->Text= buf.SubString(p,8);
	p+=8;
	Edit2->Text= buf.SubString(p,8);
	p+=8;
	Edit3->Text= buf.SubString(p,8);
	p+=8;
	Edit4->Text= buf.SubString(p,8);
	p+=8;
	Edit5->Text= buf.SubString(p,8);
	p+=8;
	Edit6->Text= buf.SubString(p,8);
	p+=8;
	Edit7->Text= buf.SubString(p,8);
	p+=8;
	Edit8->Text= buf.SubString(p,8);
	p+=8;
	Edit9->Text= buf.SubString(p,8);
	p+=8;
	Edit10->Text= buf.SubString(p,8);
	p+=8;
	Edit11->Text= buf.SubString(p,8);
	p+=8;
	Edit12->Text= buf.SubString(p,8);
	p+=8;
	Edit13->Text= buf.SubString(p,8);
	p+=8;
	Edit14->Text= buf.SubString(p,8);
	p+=8;
	Edit15->Text= buf.SubString(p,8);
	p+=8;
	Edit16->Text= buf.SubString(p,8);
	p+=9;
	ComboBox1->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox2->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox3->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox4->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox5->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox6->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox7->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox8->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox9->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox10->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox11->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox12->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox13->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox14->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox15->ItemIndex= StrToInt(buf.SubString(p,2))-10;
	p+=3;
	ComboBox16->ItemIndex= StrToInt(buf.SubString(p,2))-10;

		ShowMessage( "Load OK!" );

		} catch (Exception &exc) {

		ShowMessage(exc.Message);

	}

  delete LoadText;

	}

// data file save ------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
  UnicodeString FName,buf,cmb[16];
  TStringList *SaveText;

  FName=Edit20->Text;

  int j=0;
  cmb[0]=ComboBox1->ItemIndex + 10;
  cmb[1]=ComboBox2->ItemIndex + 10;
  cmb[2]=ComboBox3->ItemIndex + 10;
  cmb[3]=ComboBox4->ItemIndex + 10;
  cmb[4]=ComboBox5->ItemIndex + 10;
  cmb[5]=ComboBox6->ItemIndex + 10;
  cmb[6]=ComboBox7->ItemIndex + 10;
  cmb[7]=ComboBox8->ItemIndex + 10;
  cmb[8]=ComboBox9->ItemIndex + 10;
  cmb[9]=ComboBox10->ItemIndex + 10;
  cmb[10]=ComboBox11->ItemIndex + 10;
  cmb[11]=ComboBox12->ItemIndex + 10;
  cmb[12]=ComboBox13->ItemIndex + 10;
  cmb[13]=ComboBox14->ItemIndex + 10;
  cmb[14]=ComboBox15->ItemIndex + 10;
  cmb[15]=ComboBox16->ItemIndex + 10;

  buf= Edit1->Text + Edit2->Text + Edit3->Text + Edit4->Text + Edit5->Text + Edit6->Text + Edit7->Text + Edit8->Text + Edit9->Text + Edit10->Text + Edit11->Text + Edit12->Text + Edit13->Text + Edit14->Text + Edit15->Text + Edit16->Text + "," + cmb[0] + "," + cmb[1] + "," + cmb[2] + "," + cmb[3] + "," + cmb[4] + "," + cmb[5] + "," + cmb[6] + "," + cmb[7] + "," + cmb[8] + "," + cmb[9] + "," + cmb[10] + "," + cmb[11] + "," + cmb[12] + "," + cmb[13] + "," + cmb[14] + "," + cmb[15];

  SaveText=new TStringList;
  SaveText->Text=buf;

	 try {
		SaveText->SaveToFile( FName );   // TStringListの内容を全て書き込む
		ShowMessage( "Save OK!" );

	} catch (Exception &exc) {
		ShowMessage(exc.Message);
	}

	delete SaveText;
}

// Loop select ------------------------------------------------------

//int loop_select(){
void __fastcall TForm2::ComboBox20Select(TObject *Sender){

 int ind=ComboBox20->ItemIndex;
 switch(ind)
 {
   case 0:
	 loop=1;
	 break;
   case 1:
	 loop=2;
	 break;
   case 2:
	 loop=3;
	 break;
   case 3:
	 loop=5;
	 break;
   case 4:
	 loop=10;
	 break;
   default:
	 loop=1;
	 break;
 }
//   return loop;
}


// flat sharp select ---------------------------------------------
void __fastcall TForm2::ComboBox22Select(TObject *Sender){

 int ind=ComboBox22->ItemIndex;
 switch(ind)
 {
   case 0:
	 bs=1;
	 break;
   case 1:
	 bs=2;
	 break;
   default:
	 bs=1;
	 break;
 }

}


/*  realtime change ...
void __fastcall TForm2::Button5Click(TObject *Sender)
{ }
*/

// busy ...
void __fastcall TForm2::Button5Click(TObject *Sender)
{
loop=0;
}
//---------------------------------------------------------------------------

