const float songSpeed = 1.0;
#define NOTE_D5 587
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494

// Music notes of the song, 0 is a rest/pulse
int notes[] = {
    NOTE_G4, NOTE_F4, NOTE_B4, NOTE_E4,
    NOTE_D4, NOTE_G4, NOTE_C4, NOTE_B4,
    NOTE_E4, NOTE_A4, NOTE_D5,
    
    
     NOTE_G4, NOTE_F4, NOTE_B4, NOTE_E4,
    NOTE_D4, NOTE_G4, NOTE_C4, NOTE_B4,
    NOTE_E4, NOTE_A4, NOTE_D5,0,
    
    NOTE_D4, NOTE_G4, NOTE_D4, 
    NOTE_G4, NOTE_F4, NOTE_D4};

// Durations (in ms) of each music note of the song
// Quarter Note is 250 ms when songSpeed = 1.0
int durations[] = {
    1000, 1000, 1000, 1000,1000,
   1000, 1000, 1000, 1000, 1000,
   750, 750, 750, 750,750,
   750, 750, 750, 750, 750,
   250, 250, 250, 250, 250, 250};

void setup()
{
  const int totalNotes = sizeof(notes) / sizeof(int);
  for (int i = 0; i < totalNotes; i++)
  {
    const int currentNote = notes[i];
    float wait = durations[i] / songSpeed;
     if (currentNote != 0)
    {
      tone(13, notes[i], wait); // tone(pin, frequency, duration)
    }
      delay(wait);
  }
}

void loop()
{
}