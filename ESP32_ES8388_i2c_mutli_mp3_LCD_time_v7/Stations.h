#define last_stations  7+4  //17
#define max_stations  last_stations+1

struct stationsSTRUCT  {
  int  const  ampli;  
  char const *alfa;
  char const *info;
  char const *stream;
  
};

stationsSTRUCT stacje [last_stations+1]={
  {0, "TF", "TOK-FM",    "http://pl-play.adtonos.com/tok-fm"},
  {0, "NS", "NowySwiat", "http://stream.rcs.revma.com/ypqt40u0x1zuv"},
  {0, "35", "357",       "http://stream.rcs.revma.com/ye5kghkgcm0uv"},
  {1, "SJ", "Sws-Jaz",  "http://stream.srg-ssr.ch/m/rsj/aacp_96"},
  {1, "SC", "Sws-Cla",  "http://stream.srg-ssr.ch/m/rsc_de/aacp_96"},
  {0, "SP", "Sws-Pop",  "http://stream.srg-ssr.ch/m/rsp/aacp_96"},
  {1, "CF", "ClassFM",   "http://media-the.musicradio.com/ClassicFM"},
        //{1, "101_Jazz",  "https://ais-sa2.cdnstream1.com/b22139_128mp3"},
  {1, "1j", "101_Jazz",  "https://101smoothjazz.cdnstream1.com/b22139_128mp3"},
  
  
  {0, "RS", "RockServ",  "http://stream.open.fm/379"},
  {0, "No", "NewOnce",   "http://stream.open.fm/374"},
  {0, "NP", "Niezapom",  "http://195.150.20.242:8000/rmf_niezapomniane_melodie"},
  {0, "SZ", "Szczecin",  "http://stream4.nadaje.com:11986/prs.aac"},
 /*  
  //{1, "SwissJaz",  "http://stream.srg-ssr.ch/m/rsj/mp3_128"},
  //{1, "SwissCls",  "http://stream.srg-ssr.ch/m/rsc_de/mp3_128"},
  //{0, "RMF_Class",  "http://www.rmfon.pl/n/rmfclassic.pls"},
  {0, "RMF_FM",  "http://www.rmfon.pl/n/rmffm.pls"},
  {0, "Zetka",  "http://zet-net-01.cdn.eurozet.pl:8400/listen.pls"},
  {0, "AntyRadio",  "http://ant-waw-01.cdn.eurozet.pl:8602/listen.pls"},
  {0, "Eska",  "http://waw01-01.ic.smcdn.pl:8000/2260-1.aac.m3u"},
  {0, "RadioPlus",  "http://waw01-01.ic.smcdn.pl:8000/4260-1.aac.m3u"},
  {0, "WaWa",  "http://waw01-01.ic.smcdn.pl:8000/1260-1.aac.m3u"}
  */
};

struct sQQQ  {
  int8_t l;  
  int8_t m;
  int8_t h;
};


sQQQ qqq[5]={
    { 4, -4, 4},
    { 6, -6, 6},
    { 6,-12, 6},
    { 6,-18, 6},
    { 0,2,0}
};


/*
String strSplit(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
*/
