

void zapiszSPIFFS(const char *name, const char *content){
    File file = SPIFFS.open(name, FILE_WRITE);
    if(!file){
         Serial.println("error writing");
         return;
    }
    if (file.print(content)) {
          Serial.print("File was written  zapiszSPIFFS="); Serial.print(name);  Serial.println(content); 
    } else {
          Serial.println("write failed");
    }
    file.close();
}

String odczytajSPIFFS(const char *name){
    File file = SPIFFS.open(name, FILE_READ);
    String content = file.readStringUntil('\n');
    //Serial.println(name); 
    //Serial.println(content);    
    file.close();
    return content;
}


String odczytajSPIFFScsv(const char *name) {
  File file = SPIFFS.open(name, FILE_READ);
  String content = "";
  Serial.print("\nFile size: ");  Serial.println(file.size());
  while (file.available()){
    content += char(file.read());
  }
  file.close();
  return content;
}


/*
void transCSV2Array(String (& arr) [numParams], String csv){
  for (int i = 0; i < numParams; i++)
     arr[i] = strSplit(csv, ';', i);
}
*/



void listFileFromSPIFFS(){
    unsigned int totalBytes = SPIFFS.totalBytes();
    unsigned int usedBytes = SPIFFS.usedBytes();
    Serial.println("\n===== File system info =====");
    Serial.print("Total space: "); Serial.print(totalBytes); Serial.println(" byte");
    Serial.print("Total used:  "); Serial.print(usedBytes); Serial.println(" byte");
    Serial.println();
  File root = SPIFFS.open("/");  
  File file = root.openNextFile();
  while(file){
      Serial.print("FILE: "); Serial.print(file.name());
      Serial.print("\t\t");   Serial.println(file.size(), DEC);      
      file = root.openNextFile();
  }
}


/*
String getValue(String data, char separator, int index)
{
    int found = 0;
    int strIndex[] = { 0, -1 };
    int maxIndex = data.length() - 1;

    for (int i = 0; i <= maxIndex && found <= index; i++) {
        if (data.charAt(i) == separator || i == maxIndex) {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i+1 : i;
        }
    }
    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}
*/
/*
String getValue(String data,  int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)=='\n' || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
*/




struct sQQQ  {
  int8_t l;  
  int8_t m;
  int8_t h;
};


sQQQ qqq[5]={
    { -2, 4, -2},
    { 6, -2, 6},
    { 6,-6, 6},
    { 6,-9, 6},
    { 0,0,0}
};
