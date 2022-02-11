
const char RADIO_SVG[] PROGMEM = R"=====(
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512"><path fill="navy" d="M73.8 141.9c-15.2 6-25.8 21.8-25.8 39.5v256c0 23.5 18.5 42.7 41.6 42.7h332.8c23.1 0 41.6-19.2 41.6-42.7v-256c0-23.7-18.5-42.7-41.6-42.7H179l171.8-71.3L336.7 32 73.8 141.9zM160 438c-35.4 0-64-28.6-64-64s28.6-64 64-64 64 28.6 64 64-28.6 64-64 64zm256-171.3h-32v-46.2h-44.8v46.2H96v-85.3h320v85.3z"/></svg>
)=====";

const char TEREN_WEB_JSON[] PROGMEM = R"=====(
{
    "name": "radioTeren",
    "short_name": "radioTeren",
    "description": "radioTeren",
    "start_url": "/",
    "display": "standalone",
    "background_color": "#369",
    "theme_color": "#369",
    "icons": [ 
        {
            "src": "radio.svg",
            "sizes": "48x48 72x72 96x96 128x128 150x150 256x256 512x512 1024x1024",
            "type": "image/svg+xml",
            "purpose": "any"
        }
    
    ]
}
)=====";



/*
Szkic używa 1 266 982 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52 464 bajtów (16%) pamięci dynamicznej, pozostawiając 275216 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1 266 866 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52464 bajtów (16%) pamięci dynamicznej, pozostawiając 275216 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1 266 198 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52 464 bajtów (16%) pamięci dynamicznej, pozostawiając 275216 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1 266 094 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52 464 bajtów (16%) pamięci dynamicznej, pozostawiając 275216 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1 270 038 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52544 bajtów (16%) pamięci dynamicznej, pozostawiając 275136 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

dodano station.alfa
Szkic używa 1 270 046 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52592 bajtów (16%) pamięci dynamicznej, pozostawiając 275088 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

index.h zamiast SPIFFS - 1500 bajtow
Szkic używa 1 268 498 bajtów (96%) pamięci programu. Maksimum to 1310720 bajtów.
Zmienne globalne używają 52576 bajtów (16%) pamięci dynamicznej, pozostawiając 275104 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.



void piszLED4alfa(uint8_t a, uint8_t b){
      //Serial.print(a);Serial.print(", "); Serial.print(b);Serial.print(" = ");  Serial.println(b/10);
//      //uint8_t a1 = char((a/10)+48);
//      //uint8_t a2 = char((a%10)+48);      
//      if (a1=='0') a1= ' ';
//      if (b1=='0') b1= ' ';
    //alpha4.clear();
      //a1 = stacje[a].alfa[0];
      //a2 = stacje[a].alfa[1];
      //uint8_t b1 = char((b/10)+48);
      //uint8_t b2 = char((b%10)+48);
    alpha4.writeDigitAscii(0, stacje[a].alfa[0]);
    alpha4.writeDigitAscii(1, stacje[a].alfa[1],true);
    alpha4.writeDigitAscii(2, char((b/10)+48));
    alpha4.writeDigitAscii(3, char((b%10)+48));
    alpha4.writeDisplay();
}
*/
