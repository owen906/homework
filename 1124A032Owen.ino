// 超級瑪利歐無敵星星配樂
const int buttonPin = 2;    // 按鈕接在2號腳位
const int ledPin = 13;      // LED接在13號腳位
const int buzzerPin = 11;   // 蜂鳴器接在11號腳位

// 定義音符頻率
#define NOTE_B4  494
#define NOTE_F5  698
#define NOTE_B5  988
#define NOTE_F6  1397
#define NOTE_B6  1976

void setup() {
  // 設定腳位模式
  pinMode(buttonPin, INPUT_PULLUP);  // 使用內部上拉電阻
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // 檢查按鈕是否被按下
  if (digitalRead(buttonPin) == LOW) {  // 按鈕被按下
    // 播放無敵星星配樂
    playNote(NOTE_B4, 100);
    playNote(NOTE_F5, 100);
    playNote(NOTE_B5, 100);
    playNote(NOTE_F6, 100);
    playNote(NOTE_B6, 100);
    playNote(NOTE_F6, 100);
    playNote(NOTE_B5, 100);
    playNote(NOTE_F5, 100);
    playNote(NOTE_B4, 100);
    
    delay(500);  // 播放完後等待0.5秒
  }
}

// 播放音符的函數
void playNote(int note, int duration) {
  digitalWrite(ledPin, HIGH);  // LED亮起
  tone(buzzerPin, note, duration);  // 播放音符
  delay(duration);  // 等待音符播放
  digitalWrite(ledPin, LOW);   // LED熄滅
  delay(50);  // 音符之間的短暫停頓
}