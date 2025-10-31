#pragma once
#include "genie/file/ISerializable.h"

namespace genie
{
  namespace tech
  {
    // Class used to store information about train locations: id of building,
    // training time and button id
    class ResearchLocation : public ISerializable {
    public:
      ResearchLocation();
      ResearchLocation(int16_t LocationID, int16_t researchTime, uint8_t buttonID)
        : LocationID(LocationID), ResearchTime(researchTime), ButtonID(buttonID) {
      }
      virtual ~ResearchLocation();
      virtual void setGameVersion(GameVersion gv);

      int16_t ResearchTime = 0;
      int16_t LocationID = -1;
      uint8_t ButtonID = 0;
      int32_t HotKeyID = 16000;

    private:
      virtual void serializeObject(void);
    };
  }
}
