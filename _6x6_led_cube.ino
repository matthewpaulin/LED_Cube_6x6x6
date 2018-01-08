boolean layer1[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};

boolean layer2[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};

boolean layer3[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};

boolean layer4[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};

boolean layer5[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};
boolean layer6[6][6] =
{ {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true},
  {true, true, true, true, true, true}
};

int translate[6][6] =
{ {22, 23, 24, 25, 26, 27},
  {28, 29, 30, 31, 32, 33},
  {34, 35, 36, 37, 38, 39},
  {40, 41, 42, 43, 44, 45},
  {46, 47, 48, 49, 50, 51},
  {52, 53, 54, 10, 9, 8}
};

int amount = 95;

void setup() {
  pinMode(57, OUTPUT);
  pinMode(56, OUTPUT);
  pinMode(55, OUTPUT);
  pinMode(54, OUTPUT);
  pinMode(53, OUTPUT);

  pinMode(52, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(48, OUTPUT);

  pinMode(47, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(43, OUTPUT);

  pinMode(42, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);

  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(34, OUTPUT);

  pinMode(33, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);

  digitalWrite(13, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  Serial.begin(9600);
}

void loop() {
  if (millis() % 80 == 0) {
    for (int i = 0; i < 6; i++) {
      for (int k = 0; k < 6; k++) {
        layer1[i][k] = layer2[i][k];
      }
    }
    for (int i = 0; i < 6; i++) {
      for (int k = 0; k < 6; k++) {
        layer2[i][k] = layer3[i][k];
      }
    }
    for (int i = 0; i < 6; i++) {
      for (int k = 0; k < 6; k++) {
        layer3[i][k] = layer4[i][k];
      }
    }
    for (int i = 0; i < 6; i++) {
      for (int k = 0; k < 6; k++) {
        layer4[i][k] = layer5[i][k];
      }
    }

    for (int l = 0; l < 6; l++) {
      for (int j = 0; j < 6; j++) {
        if (random(0, 216) > amount) {
          layer5[l][j] = true;

        }
        else {
          layer6[l][j] = false;
        }
      }
    }
  }

  if (millis() % 500 == 0) {
    amount = random(80, 100);
  }

  digitalWrite(13, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer1[i][k]);
    }
  }
  digitalWrite(13, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer2[i][k]);
    }
  }
  digitalWrite(13, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer3[i][k]);
    }
  }
  digitalWrite(13, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer4[i][k]);
    }
  }
  digitalWrite(13, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(4, LOW);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer5[i][k]);
    }
  }

  digitalWrite(13, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, HIGH);
  for (int i = 0; i < 6; i++) {
    for (int k = 0; k < 6; k++) {
      digitalWrite(translate[i][k], layer6[i][k]);
    }
  }
}
