
//the anodes of the LEDs are connected together to form the layers of the cube
//the cathodes are chained together to form a square of 16 columns

//definitions for the pins going to the anode layers
#define h_0 10
#define h_1 11
#define h_2 12
#define h_3 13

//definitions for the pins going to the columns
#define c_0_0 8
#define c_0_1 6
#define c_0_2 5
#define c_0_3 2
#define c_1_0 9
#define c_1_1 7
#define c_1_2 4
#define c_1_3 1
#define c_2_0 15
#define c_2_1 18
#define c_2_2 3
#define c_2_3 0
#define c_3_0 14
#define c_3_1 16
#define c_3_2 17
#define c_3_3 19

int layers[] = { h_0, h_1, h_2, h_3 };
int columns[4][4] = {{c_0_0, c_0_1, c_0_2, c_0_3} , {c_1_0, c_1_1, c_1_2, c_1_3 },{ c_2_0, c_2_1, c_2_2, c_2_3 }, {c_3_0, c_3_1, c_3_2, c_3_3}};

//delay between turning on and turning off sets of LEDs, meant to be adjusted to suit the speed that you want the animations to play at
int stepDelay =  250;


void setup() {
  // need to set all of the pins so that they can source or sink current
  for(int i = 0; i < 20; i++){
    pinMode(i, OUTPUT);
  }

  //set the pins to the initial off position
  for(int i = 0; i < 4; i++){
    digitalWrite(layers[i], LOW);
  }
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      digitalWrite(columns[i][j], HIGH);
    }
  }

}

void loop() {
  //turn on all of the leds individually and sequentially for demo purposes
  for(int i = 0; i <4; i++){
    for(int j = 0; j < 4; j++){
      for(int k = 0; k < 4; k++){
        mapLED(i, j, k, true);
        delay(stepDelay);
        mapLED(i, j, k, false);
      }
    }
  }


}

//this has to have a really long if structure because the analog pins cannot be put into an int array
//really annoying but fine
void mapLED(int x, int y, int z, bool on){
  if(on){
    digitalWrite( columns[x][y], LOW);
    digitalWrite(layers[z], HIGH);
  }else{
    digitalWrite( columns[x][y], HIGH);
    digitalWrite(layers[z], LOW);
  }
}








