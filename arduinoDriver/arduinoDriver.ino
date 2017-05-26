
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
#define c_2_0 A1
#define c_2_1 A4
#define c_2_2 3
#define c_2_3 0
#define c_3_0 A0
#define c_3_1 A2
#define c_3_2 A3
#define c_3_3 A5

//delay between turning on and turning off sets of LEDs, meant to be adjusted to suit the speed that you want the animations to play at
int stepDelay =  250;


void setup() {
  // need to set all of the pins so that they can source or sink current
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

}

//this has to have a really long if structure because the analog pins cannot be put into an int array
//really annoying but fine
void mapLED(int x, int y, int z, bool on){
  
}








