#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc2;            //xy=101,154
AudioSynthWaveformSine   sine3;          //xy=101,198
AudioSynthWaveformDc     dc6;            //xy=100,512
AudioSynthWaveformSine   sine7;          //xy=100,556
AudioSynthWaveformSine   sine2;          //xy=102,112
AudioSynthWaveformSine   sine6;          //xy=101,470
AudioSynthWaveformSine   sine1;          //xy=104,26
AudioSynthWaveformSine   sine4;          //xy=103,282
AudioSynthWaveformDc     dc1;            //xy=104,68
AudioSynthWaveformSine   sine5;          //xy=103,384
AudioSynthWaveformSine   sine8;          //xy=102,640
AudioSynthWaveformDc     dc5;            //xy=103,426
AudioSynthWaveformDc     dc4;            //xy=104,326
AudioSynthWaveformDc     dc8;            //xy=103,684
AudioSynthWaveformDc     dc3;            //xy=106,242
AudioSynthWaveformDc     dc7;            //xy=105,600
AudioEffectMultiply      multiply3;      //xy=258,216
AudioEffectMultiply      multiply4;      //xy=258,302
AudioEffectMultiply      multiply7;      //xy=257,574
AudioEffectMultiply      multiply8;      //xy=257,660
AudioEffectMultiply      multiply2;      //xy=262,132
AudioEffectMultiply      multiply6;      //xy=261,490
AudioEffectMultiply      multiply1;      //xy=265,43
AudioEffectMultiply      multiply5;      //xy=264,401
AudioMixer4              mixer1;         //xy=477,193
AudioMixer4              mixer2;         //xy=476,551
AudioMixer4              mixerMain;      //xy=950,402
AudioOutputI2S           i2s1;           //xy=1164,401
AudioConnection          patchCord1(dc2, 0, multiply2, 1);
AudioConnection          patchCord2(sine3, 0, multiply3, 0);
AudioConnection          patchCord3(dc6, 0, multiply6, 1);
AudioConnection          patchCord4(sine7, 0, multiply7, 0);
AudioConnection          patchCord5(sine2, 0, multiply2, 0);
AudioConnection          patchCord6(sine6, 0, multiply6, 0);
AudioConnection          patchCord7(sine1, 0, multiply1, 0);
AudioConnection          patchCord8(sine4, 0, multiply4, 0);
AudioConnection          patchCord9(dc1, 0, multiply1, 1);
AudioConnection          patchCord10(sine5, 0, multiply5, 0);
AudioConnection          patchCord11(sine8, 0, multiply8, 0);
AudioConnection          patchCord12(dc5, 0, multiply5, 1);
AudioConnection          patchCord13(dc4, 0, multiply4, 1);
AudioConnection          patchCord14(dc8, 0, multiply8, 1);
AudioConnection          patchCord15(dc3, 0, multiply3, 1);
AudioConnection          patchCord16(dc7, 0, multiply7, 1);
AudioConnection          patchCord17(multiply3, 0, mixer1, 2);
AudioConnection          patchCord18(multiply4, 0, mixer1, 3);
AudioConnection          patchCord19(multiply7, 0, mixer2, 2);
AudioConnection          patchCord20(multiply8, 0, mixer2, 3);
AudioConnection          patchCord21(multiply2, 0, mixer1, 1);
AudioConnection          patchCord22(multiply6, 0, mixer2, 1);
AudioConnection          patchCord23(multiply1, 0, mixer1, 0);
AudioConnection          patchCord24(multiply5, 0, mixer2, 0);
AudioConnection          patchCord25(mixer1, 0, mixerMain, 0);
AudioConnection          patchCord26(mixer2, 0, mixerMain, 1);
AudioConnection          patchCord27(mixerMain, 0, i2s1, 0);
AudioConnection          patchCord28(mixerMain, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=440,357
// GUItool: end automatically generated code

