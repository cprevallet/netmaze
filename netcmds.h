enum
{
  NM_NOCOMMAND , NM_STARTGAME , NM_STOPGAME , NM_PAUSEGAME , NM_MAZEH ,
  NM_MAZEV , NM_ALLDATA ,
  NM_OWNDATA , NM_MESSAGE , NM_INFO , NM_TIMEERROR , NM_OWNNAME ,
  NM_ALLNAMES , NM_PING , NM_PONG , NM_QUIT , NM_READY , NM_RANDOM , NM_END ,
  NM_CNTRL , NM_INCPLAYER , NM_DECPLAYER , NM_SETMODE , NM_ENUM ,
  NM_SUBDATA , NM_OWNCOMMENT , NM_ALLCOMMENTS , NM_DOCOMMAND , NM_ADDPLAYER ,
  NM_REMOVEPLAYER , NM_JOIN , NM_ACKJOIN , NM_ACKADD ,
  NM_ACTIVATE , NM_INACTIVATE 
};

static char nm_field[] = { 1,0,1,1,0,
                    0,99,
                    2,0,0,1,0,
                    0,1,1,1,1,3,1,
                    1,1,1,5,2,
                    0,0,0,0,0,3,4,5,5,3,3 };

enum { MSG_SERVER , MSG_ALL , MSG_GROUP , MSG_TEAM , MSG_TO_NAME , MSG_PLAYER };



