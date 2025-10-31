#ifndef GENIE_TRAININGLOCATION_H
#define GENIE_TRAININGLOCATION_H
#include "genie/file/ISerializable.h"

namespace genie
{
  namespace unit
  {
    // Class used to store information about train locations: id of building, training time and button id
    class TrainLocation : public ISerializable
    {
    public:
      TrainLocation();
      TrainLocation(int16_t unitID, int16_t trainTime, uint8_t buttonID, int32_t hotkeyID) : UnitID(unitID), TrainTime(trainTime), ButtonID(buttonID), HotKeyID(hotkeyID) {}
      virtual ~TrainLocation();
      virtual void setGameVersion(GameVersion gv);

      int16_t TrainTime = 0;
      int16_t UnitID = -1;
      uint8_t ButtonID = 0;
      int32_t HotKeyID = 16000;

    private:
      virtual void serializeObject(void);
    };
  }
}
#endif //GENIE_TRAININGLOCATION_H
