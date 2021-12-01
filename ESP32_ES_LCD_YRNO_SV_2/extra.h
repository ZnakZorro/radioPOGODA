

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






/*struct stationsSTRUCT  {
  int  const  ampli;  
  char const *info;
  char const *stream;
};

stationsSTRUCT stacje [5]={
  {0, "TOK-FM",    "http://pl-play.adtonos.com/tok-fm"},
  {0, "RNS",       "http://stream.rcs.revma.com/ypqt40u0x1zuv"},
  {0, "357",       "http://stream.rcs.revma.com/ye5kghkgcm0uv"},
  {2, "Jazz",      "http://stream.srg-ssr.ch/m/rsj/aacp_96"},
  {2, "Classic",   "http://stream.srg-ssr.ch/m/rsc_de/aacp_96"}
};
*/
/*
String make_str(String str){
    if (str.length()>7) return str;
    String plus="";
    for(int i = 0; i < (7 - str.length()); i++)
        plus += ' ';  
    return plus+str;
}
*/
/*
String getSecondLine(String str){
    if (str.length()<17) return "";
    else return str.substring(16, str.length());
}*/

/*
Szkic używa  1 077 609 bajtów (34%) pamięci programu. Maksimum to 3145728 bajtów.
Zmienne globalne używają   5 0 960 bajtów (15%) pamięci dynamicznej, pozostawiając 276720 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1077537 bajtów (34%) pamięci programu. Maksimum to 3145728 bajtów.
Zmienne globalne używają 50896 bajtów (15%) pamięci dynamicznej, pozostawiając 276784 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.


Szkic używa 1 080 221 bajtów (34%) pamięci programu. Maksimum to 3145728 bajtów.
Zmienne globalne używają 50 904 bajtów (15%) pamięci dynamicznej, pozostawiając 276776 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.

Szkic używa 1080261 bajtów (34%) pamięci programu. Maksimum to 3145728 bajtów.
Zmienne globalne używają 50904 bajtów (15%) pamięci dynamicznej, pozostawiając 276776 bajtów dla zmiennych lokalnych. Maksimum to 327680 bajtów.







 */
